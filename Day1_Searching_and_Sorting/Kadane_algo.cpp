/*
 *
 * Author :  Ajay Panchal
 * B.TECH  CSE STUDENT
 * LOVELY PROFESSIONAL UNIVERSITY
 * BATCH : 2018-2022
 * GITHUB LINK : https://github.com/ajay-panchal-099/CP_CipherSchools
 * PROBLEM STATEMENT : Largest Sum Contiguous SubArray
 */

#include<bits/stdc++.h>
using namespace std;

#define int                            long long
#define INF                            0x3f3f3f3f

#define fast_io                        ios_base::sync_with_stdio(false);cin.tie(NULL);
#define IO_Problem                 freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);



void largest_sum( vector<int>& vec){

    int MaxSum = vec[0];
    int temp = vec[0];
    for( int i =1; i < vec.size(); i++){
         temp = max( temp+ vec[i], vec[i] );
         MaxSum = max(MaxSum, temp);
    }


    cout<<MaxSum<<endl;



}


int32_t main()
{
    fast_io;
    // IO_Problem;


    vector<int> vec{-2, -3, 4, -1, -2, 1, 5, -3};

    largest_sum(vec);

    return 0;
}