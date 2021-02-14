/*
 *
 * Author :  Ajay Panchal
 * B.TECH  CSE STUDENT
 * LOVELY PROFESSIONAL UNIVERSITY
 * BATCH : 2018-2022
 * GITHUB LINK : https://github.com/ajay-panchal-099/CP_CipherSchools
 * PROBLEM STATEMENT : Majority Element 
 */

#include<bits/stdc++.h>
using namespace std;

#define int                            long long
#define INF                            0x3f3f3f3f

#define fast_io                        ios_base::sync_with_stdio(false);cin.tie(NULL);
#define IO_Problem                 freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);


int find_candidate( vector<int>&vec){

    int candidate = vec[0];
    int count = 1;

    for (int i = 1; i < vec.size() ; ++i) {
        if( vec[i] == candidate)
            count++;
        else
            count--;
        if( count==0){
            count = 1;
            candidate =  vec[i];
        }
    }

    return candidate;

}


void findMajority( vector<int> vec){

    int candidate = find_candidate( vec);

    int count = 0;

    for( int x: vec){
        if( x == candidate)
            count++;
    }

    if(count>(vec.size() /2))
        cout<<"Majority Element is : "<<candidate<<endl;
    else
        cout<<"No candidate element"<<endl;


}


int32_t main()
{
    fast_io;
    // IO_Problem;

    vector<int>vec{1, 2, 3, 4, 1, 2, 2 , 2, 2};

    findMajority(vec);

    return 0;
}