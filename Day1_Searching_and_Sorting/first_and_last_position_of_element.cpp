/*
 *
 * Author :  Ajay Panchal
 * B.TECH  CSE STUDENT
 * LOVELY PROFESSIONAL UNIVERSITY
 * BATCH : 2018-2022
 * GITHUB LINK : https://github.com/ajay-panchal-099/CP_CipherSchools
 * PROBLEM STATEMENT : find first and last position in sorted array
 */

#include<bits/stdc++.h>
using namespace std;

#define int                            long long
#define INF                            0x3f3f3f3f

#define fast_io                        ios_base::sync_with_stdio(false);cin.tie(NULL);
#define IO_Problem                 freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);

int find_first(vector<int>& vec, int x){

    int start = 0;
    int end = vec.size()-1;
    int res = -1;

    while( start <= end){

        int mid = start + ( end - start)/2;

        if( vec[mid] == x){
            res = mid;
            end = mid-1;
        }
        else if(vec[mid] > x){
            end = mid-1;
        }
        else
            start = mid+1;
    }

    return res;


}


int find_last(vector<int>& vec, int x){
    int start = 0;
    int end = vec.size()-1;
    int res = -1;

    while( start <= end){

        int mid = start + ( end - start)/2;

        if( vec[mid] == x){
            res = mid;
            start = mid+1;
        }
        else if(vec[mid] > x){
            end = mid-1;
        }
        else
            start = mid+1;
    }

    return res;
}

void Positions( vector<int> & vec, int x){


    int first = find_first(vec, x);
    if( first == -1){
        cout<<"Element is not Present "<<endl;
        return;
    }

    int last = find_last( vec, x);

    cout<<"First and last Positions of element is "<<first << " "<<last<<endl;




}

int32_t main()
{
    fast_io;
    // IO_Problem;

    vector<int> vec{1, 2, 3, 4, 4, 4, 5, 6};

    Positions(vec, 4);

    return 0;
}