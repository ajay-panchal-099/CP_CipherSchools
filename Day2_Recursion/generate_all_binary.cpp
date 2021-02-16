/*
 *
 * Author :  Ajay Panchal
 * B.TECH  CSE STUDENT
 * LOVELY PROFESSIONAL UNIVERSITY
 * BATCH : 2018-2022
 * GITHUB LINK : https://github.com/ajay-panchal-099/CP_CipherSchools
 * PROBLEM STATEMENT : generate all binary string of length n
 */

#include<bits/stdc++.h>
using namespace std;

#define int                            long long
#define INF                            0x3f3f3f3f

#define fast_io                        ios_base::sync_with_stdio(false);cin.tie(NULL);
#define IO_Problem                 freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
void generate(vector<string>&result, string str, int index, int n){
    if(index == n){
        result.push_back(str);
        return;
    }

    str.push_back('0');
    generate(result, str, index+1, n);
    str.pop_back();
    str.push_back('1');
    generate(result, str, index+1, n);
    str.pop_back();
}


void generate_all_binary(int n){

    vector<string> result;

    generate(result, "", 0, n);

    for( auto it: result)
        cout<<it<<endl;
}

int32_t main()
{
    fast_io;
    // IO_Problem;

    int n  = 3;
    generate_all_binary(n);

    return 0;
}