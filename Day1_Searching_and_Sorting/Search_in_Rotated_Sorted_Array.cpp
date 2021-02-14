/*
 *
 * Author :  Ajay Panchal
 * B.TECH  CSE STUDENT
 * LOVELY PROFESSIONAL UNIVERSITY
 * BATCH : 2018-2022
 * GITHUB LINK : https://github.com/ajay-panchal-099/CP_CipherSchools
 * PROBLEM STATEMENT : Search in Rotated Sirted Array
 */

#include<bits/stdc++.h>
using namespace std;

#define int                            long long
#define INF                            0x3f3f3f3f

#define fast_io                        ios_base::sync_with_stdio(false);cin.tie(NULL);
#define IO_Problem                 freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);



void Search( vector<int>& vec, int target){


    int start = 0;
    int end = vec.size()-1;

    while(start <= end){

        int mid = start + ( end - start)/ 2;
        if( vec[mid] == target){
            cout<<mid<<endl;
            break;
        }
        if(vec[start] <= vec[mid]){
            if(vec[start] <= target and target <= vec[mid] )
                end = mid-1;
            else
                start = mid+1;
        }
        else if( vec[mid] <= vec[end] ){
            if(vec[mid] <= target and  target <= vec[end])
                start = mid+1;
            else
                end = mid-1;
        }
    }

  
}


int32_t main()
{
    fast_io;
    // IO_Problem;


    vector<int> vec{5, 6, 7, 8, 1, 2, 3,  4};

    Search(vec, 1);

    return 0;
}