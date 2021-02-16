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
void balanced(vector<string>& result, int open, int close, int N, string str) {
    // open = 0, open = N, close = [0, N]
    if (open < 0 || close < 0 || open > N || close > N || close > open) {
        return;
    }
    if (open == N && close == N) {
        result.push_back(str);
        return;
    }

    balanced(result, open + 1, close, N, str + "(");
    balanced(result, open, close + 1, N, str + ")");
}

void  balancedParenthesis(int N) {
    vector<string> result;
    balanced(result, 0, 0, N, "");
    for (string res : result) {
        cout << res << "\n";
    }

}

int32_t main()
{
    fast_io;
    // IO_Problem;

    balancedParenthesis(3);

    return 0;
}