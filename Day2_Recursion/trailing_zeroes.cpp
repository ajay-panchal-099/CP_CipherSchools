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

void count_trailing_zeroes( int n){

    int count  = 0;

    for( int i = 5; n/i>=1; i*= 5){
        count += n/i;
    }

    cout<<count<<endl;
}

int32_t main()
{
    fast_io;
    // IO_Problem;
    int n = 20;

    count_trailing_zeroes( n);

    return 0;
}