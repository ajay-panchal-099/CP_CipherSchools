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
long long factorial(int N)
{
    if (N <= 1)
    {
        return 1;
    }
    else
    {
        long long result = 1;
        for (int i = 2; i <= N; i++)
        {
            result *= i;
        }
        return result;
    }
}
long long totalUniquePaths(int R, int C)
{
    return factorial(R + C - 2) / (factorial(R - 1) * factorial(C - 1));
}
int32_t main()
{
    fast_io;
    // IO_Problem;
    cout<<totalUniquePaths(3, 3)<<endl;
    cout<<totalUniquePaths(3, 2)<<endl;

    return 0;
}