/*
 *
 * Author :  Ajay Panchal
 * B.TECH  CSE STUDENT
 * LOVELY PROFESSIONAL UNIVERSITY
 * BATCH : 2018-2022
 * GITHUB LINK : https://github.com/ajay-panchal-099/CP_CipherSchools
 * PROBLEM STATEMENT : sort 0 , 1 and 2
 */

#include<bits/stdc++.h>
using namespace std;

#define int                            long long
#define INF                            0x3f3f3f3f

#define fast_io                        ios_base::sync_with_stdio(false);cin.tie(NULL);
#define IO_Problem                 freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);


void sort_v( vector<int>& vec){


    int start = 0;
    int index = 0;
    int end = vec.size()-1;


    while( start <= end and index <= end){

        if(vec[index] == 0){
            swap(vec[start], vec[index]);
            start++;
            index++;

        }
        else if( vec[index] == 2){
            swap( vec[end], vec[index]);
            end--;
        }
        else{
            index++;
        }

    }



}

void sort_vec( vector<int>&vec){

    sort_v(vec);

    for( int x: vec)
        cout<<x<<" ";


}

int32_t main()
{
    fast_io;
    // IO_Problem;


    vector<int> vec{1, 1, 1, 2, 2,0 , 0, 0, 2, 1,2};

    sort_vec(vec);

    return 0;
}