/*
 *
 * Author :  Ajay Panchal
 * B.TECH  CSE STUDENT
 * LOVELY PROFESSIONAL UNIVERSITY
 * BATCH : 2018-2022
 * GITHUB LINK : https://github.com/ajay-panchal-099/CP_CipherSchools
 * PROBLEM STATEMENT : find element in sorted matrix;
 */

#include<bits/stdc++.h>
using namespace std;

#define int                            long long
#define INF                            0x3f3f3f3f

#define fast_io                        ios_base::sync_with_stdio(false);cin.tie(NULL);
#define IO_Problem                 freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);

void find_element( vector<vector<int>>& mat, int ele){

    int r = mat.size()-1;
    int c = mat[0].size()-1;


     int x = c;
     int y = 0;

     while( x>= 0 and y <= r){

         if( mat[x][y] == ele){
             cout<<"Element Found at index "<<x<<" "<<y<<endl;
             return;
         }

         else if( mat[x][y] > ele){
             x--;
         }
         else
             y++;

     }

     cout<<"Element Not Found"<<endl;

}

int32_t main()
{
    fast_io;
    // IO_Problem;

    vector<vector<int>>mat = { {10, 20, 30, 40},
                               {15, 25, 35, 45},
                               {27, 29, 37, 48},
                               {32, 33, 39, 50}};

    find_element( mat, 20);

    return 0;
}