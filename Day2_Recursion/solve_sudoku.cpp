/*
 *
 * Author :  Ajay Panchal
 * B.TECH  CSE STUDENT
 * LOVELY PROFESSIONAL UNIVERSITY
 * BATCH : 2018-2022
 * GITHUB LINK : https://github.com/ajay-panchal-099/CP_CipherSchools
 * PROBLEM STATEMENT : solve sudoku
 */

#include<bits/stdc++.h>
using namespace std;

#define int                            long long
#define INF                            0x3f3f3f3f

#define fast_io                        ios_base::sync_with_stdio(false);cin.tie(NULL);
#define IO_Problem                 freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);

int N = 9;

bool usedInRow(vector<vector<int>> &grid, int row, int num)
{
    for (int i = 0; i < N; ++i)
    {
        if (grid[row][i] == num)
        {
            return true;
        }
    }
    return false;
}

bool usedInCol(vector<vector<int>> &grid, int col, int num)
{
    for (int i = 0; i < N; ++i)
    {
        if (grid[i][col] == num)
        {
            return true;
        }
    }
    return false;
}

bool usedInBox(vector<vector<int>> &grid, int row, int col, int num)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (grid[row + i][col + j] == num)
            {
                return true;
            }
        }
    }
    return false;
}

bool isSafe(vector<vector<int>> &grid, int row, int col, int num)
{
    return (!usedInRow(grid, row, num) &&
            !usedInCol(grid, col, num) &&
            !usedInBox(grid, row - row % 3, col - col % 3, num));
}
void print_solution(vector<vector<int>>& grid){
    for (int row = 0; row < N; row++)
    {
        for (int col = 0; col < N; col++)
        {
            cout<<grid[row][col]<<" ";
        }
        cout<<endl;
    }
}
bool unassigned(vector<vector<int>> &grid, int &row, int &col)
{
    for (row = 0; row < N; row++)
    {
        for (col = 0; col < N; col++)
        {
            if (grid[row][col] == 0)
            {
                return true;
            }
        }
    }
    return false;
}
void solve_sudoku(vector<vector<int>>& grid){

    int row, col;
    if(!unassigned(grid, row, col)){
        print_solution(grid);
        return;
    }

    for (int i = 1; i <= 9 ; ++i) {
        if(isSafe(grid, row, col ,i)){
            grid[row][col] = i;
            solve_sudoku(grid);
            grid[row][col] = 0;
        }
    }

}



int32_t main()
{
    fast_io;
    // IO_Problem;

    vector<vector<int>> grid = {
            {3, 0, 6, 5, 0, 8, 4, 0, 0},
            {5, 2, 0, 0, 0, 0, 0, 0, 0},
            {0, 8, 7, 0, 0, 0, 0, 3, 1},
            {0, 0, 3, 0, 1, 0, 0, 8, 0},
            {9, 0, 0, 8, 6, 3, 0, 0, 5},
            {0, 5, 0, 0, 9, 0, 6, 0, 0},
            {1, 3, 0, 0, 0, 0, 2, 5, 0},
            {0, 0, 0, 0, 0, 0, 0, 7, 4},
            {0, 0, 5, 2, 0, 6, 3, 0, 0}};

    solve_sudoku(grid);

    return 0;
}