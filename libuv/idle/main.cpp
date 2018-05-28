//g++ -fpermissive -I../include main.cpp -L../lib -luv -lpthread
#include <stdio.h>
#include <uv.h>

int64_t counter = 0;

void wait_for_a_while(uv_idle_t* handle)
{
    counter++;
    if (counter >= 10e6)
    {
        uv_idle_stop(handle);
        printf("stop 0...\n");
    }
}

void wait_for_a_while1(uv_idle_t* handle)
{
    counter++;
    if (counter >= 10)
    {
        uv_idle_stop(handle);
        printf("stop 1...\n");
    }
}

int main()
{
    uv_idle_t idler;
    uv_idle_t idler1;

    uv_idle_init(uv_default_loop(), &idler);
    uv_idle_init(uv_default_loop(), &idler1);
    uv_idle_start(&idler, wait_for_a_while);
    uv_idle_start(&idler1, wait_for_a_while1);

    printf("Idling...\n");
    uv_run(uv_default_loop(), UV_RUN_DEFAULT);

    uv_loop_close(uv_default_loop());
    return 0;
}