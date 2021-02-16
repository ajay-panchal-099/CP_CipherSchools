/*
 *
 * Author :  Ajay Panchal
 * B.TECH  CSE STUDENT
 * LOVELY PROFESSIONAL UNIVERSITY
 * BATCH : 2018-2022
 * GITHUB LINK : https://github.com/ajay-panchal-099/CP_CipherSchools
 * PROBLEM STATEMENT :
 */

#include<bits/stdc++.h>
using namespace std;

#define int                            long long
#define INF                            0x3f3f3f3f

#define fast_io                        ios_base::sync_with_stdio(false);cin.tie(NULL);
#define IO_Problem                 freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);

bool isSafe(vector<vector<bool>> &board, int row, int col, int N)
{
    int r, c;
    for (c = 0; c < col; c++)
    {
        if (board[row][c])
            return false;
    }

    for (r = row, c = col; r >= 0 && c >= 0; r--, c--)
    {
        if (board[r][c])
            return false;
    }

    for (r = row, c = col; c >= 0 && r < N; r++, c--)
        if (board[r][c])
            return false;

    return true;
}

bool generateNQueenBoardHelper(vector<vector<bool>> &board, int col, int N)
{
    if (col >= N)
        return true;

    for (int row = 0; row < N; row++)
    {
        if (isSafe(board, row, col, N))
        {
            board[row][col] = true;
            if (generateNQueenBoardHelper(board, col + 1, N))
                return true;
            // backtracking step
            board[row][col] = false;
        }
    }

    return false;
}

bool generateNQueenBoard(int N)
{
    vector<vector<bool>> board(N, vector<bool>(N, false));
    if (!generateNQueenBoardHelper(board, 0, N))
    {
        return false;
    }
    else
    {
        for (vector<bool> row : board)
        {
            for (int cell : row)
            {
                cout << (cell == true ? 1 : 0) << "\t";
            }
            cout << "\n";
        }
        return true;
    }
}
int32_t main()
{
    fast_io;
    // IO_Problem;

    generateNQueenBoard(8);

    return 0;
}