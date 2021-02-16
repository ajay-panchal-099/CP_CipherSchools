/*
 *
 * Author :  Ajay Panchal
 * B.TECH  CSE STUDENT
 * LOVELY PROFESSIONAL UNIVERSITY
 * BATCH : 2018-2022
 * GITHUB LINK : https://github.com/ajay-panchal-099/CP_CipherSchools
 * PROBLEM STATEMENT : generate all permutation of a string 
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

    for (int i = index; i < n ; ++i) {
        swap(str[index], str[i] );
        generate(result, str, index+1, n);
        swap(str[index], str[i] );
    }
}


void permute(){

    vector<string> result;
    string str = "abc";
    generate(result, str, 0, str.length());

    for( auto &it: result)
        cout<<it<<endl;
}

int32_t main()
{
    fast_io;
    // IO_Problem;

    permute();

    return 0;
}