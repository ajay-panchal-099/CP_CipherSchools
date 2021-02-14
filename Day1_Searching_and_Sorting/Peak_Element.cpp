/*
 *
 * Author :  Ajay Panchal
 * B.TECH  CSE STUDENT
 * LOVELY PROFESSIONAL UNIVERSITY
 * BATCH : 2018-2022
 * GITHUB LINK : https://github.com/ajay-panchal-099/CP_CipherSchools
 * PROBLEM STATEMENT : find peak element in a given array
 */

#include<bits/stdc++.h>
using namespace std;

#define int                            long long
#define INF                            0x3f3f3f3f

#define fast_io                        ios_base::sync_with_stdio(false);cin.tie(NULL);
#define IO_Problem                 freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);


 int peak_element( vector<int>& vec, int start, int end){


     while( start <= end){

         int mid = start + ( end - start)/ 2;
        // not on cornor
         if( mid > 0 and mid <  vec.size()-1){

             if( vec[mid] > vec[mid-1] and vec[mid] > vec[mid+1])
                 return vec[mid];
             else if( vec[mid-1] > vec[mid])
                 end = mid-1;
             else
                 start = mid+1;
         }
         else if( mid == 0){
             if(vec[0] > vec[1])
                 return vec[0];
             else
                 return vec[1];
         }
         else if( mid == vec.size()-1){
             if( vec[vec.size()-1] > vec[vec.size()-2])
                 return vec[vec.size()-1];
             else
                 return vec[vec.size()-2];
         }


     }
     return  -1;
 }


void find_peak_element( vector<int> & vec){

     int peak = peak_element(vec, 0, vec.size()-1);

     if( peak == -1)
         cout<<"No peak Element"<<endl;
     else
         cout<<"Peak element is "<<peak<<endl;

}

int32_t main()
{
    fast_io;
    // IO_Problem;


    vector<int> vec{ 4, 7, 1, 2, 3};

    find_peak_element(vec);


    return 0;
}