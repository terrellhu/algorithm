#include <iostream>
#include <vector>

using namespace std;

bool searchMatrix(vector<vector<int> > matrix, int number)
{
    if (matrix.empty() || matrix[0].empty())
    {
        return false;
    }

    int m = matrix.size();
    int n = matrix[0].size();

    int i = m-1;
    int j = 0;
    while (i >= 0 && j != n)
    {
        //cout << i << "#" << j << endl;
            if (matrix[i][j] == number)
            {
                return  true;
            }else if (matrix[i][j] > number) {
                i--;
            }else {
                j++;
            }
    }

    return false;
}


int main(int argc, char** argv)
{
    if (2 != argc)
    {
        cerr << "usage: proc number" << endl;
        return 0;
    }
    int number = strtol(argv[1], nullptr, 0);

    vector<vector<int> > matrix;
    //vector<int> v1 = {-5};
    /*vector<int> v1 = {1,  2,  3,  4,  5};
    vector<int> v2 = {6,  7,  8,  9,  10};
    vector<int> v3 = {11, 12, 13, 14, 15};
    vector<int> v4 = {16, 17, 18, 19, 20};
    vector<int> v5 = {21, 22, 23, 24, 25};*/
    vector<int> v1 = {1,  4,  7,  11,  15};
    vector<int> v2 = {2,  5,  8,  12,  19};
    vector<int> v3 = {3, 6, 9, 16, 22};
    vector<int> v4 = {10, 13, 14, 17, 24};
    vector<int> v5 = {18, 21, 23, 26, 20};
    matrix.push_back(v1);
    matrix.push_back(v2);
    matrix.push_back(v3);
    matrix.push_back(v4);
    matrix.push_back(v5);

    cout << searchMatrix(matrix, number) << endl;

    return 0;
}