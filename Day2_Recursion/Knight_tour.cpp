/*
 *
 * Author :  Ajay Panchal
 * B.TECH  CSE STUDENT
 * LOVELY PROFESSIONAL UNIVERSITY
 * BATCH : 2018-2022
 * GITHUB LINK : https://github.com/ajay-panchal-099/CP_CipherSchools
 * PROBLEM STATEMENT : knight tour problem
 */

#include<bits/stdc++.h>
using namespace std;

#define int                            long long
#define INF                            0x3f3f3f3f

#define fast_io                        ios_base::sync_with_stdio(false);cin.tie(NULL);
#define IO_Problem                 freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);

// directions

const int fxx[8][2] =                  {{2,1}, {1,2}, {-1,2}, {-2,1}, {-2,-1}, {-1,-2}, {1, -2}, {2,-1}};


int num = 1;
int n;

void print(vector<vector<int>>& tour ){
    for( auto &r: tour){
        for( auto &c: r)
            cout<<c<<" ";
        cout<<endl;
    }
}

bool is_safe(vector<vector<int>>& tour, int i, int j){

    if(i<0 || i >=n || j <0 || j >=n || tour[i][j] != 0)
        return false;

    return true;

}
void knight_tour( vector<vector<int>>& tour, int i,int j ,  int count){
    tour[i][j] = count;
      if(count>=n*n){
          print(tour);
          return;
      }

    for (int  k= 0; k < 8; ++k) {
        int x = i + fxx[k][0];
        int y = j + fxx[k][1];
        if(is_safe(tour, x, y)){
           // tour[x][y] = count+1;
            knight_tour(tour, x, y, count+1);
           // tour[x][y] = count;
        }
    }
 tour[i][j] =0;

}

int32_t main()
{
    fast_io;
    // IO_Problem;
      n = 8;
     vector<vector<int>>tour(n, vector<int>(n, 0));
     knight_tour(tour, 0, 0, 1);
    return 0;
}