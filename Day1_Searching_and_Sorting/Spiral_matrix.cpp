/*
 *
 * Author :  Ajay Panchal
 * B.TECH  CSE STUDENT
 * LOVELY PROFESSIONAL UNIVERSITY
 * BATCH : 2018-2022
 * GITHUB LINK : https://github.com/ajay-panchal-099/CP_CipherSchools
 * PROBLEM STATEMENT :
 * print given matrix in spiral form
 */

#include<bits/stdc++.h>
using namespace std;

#define int                            long long
#define INF                            0x3f3f3f3f

#define fast_io                        ios_base::sync_with_stdio(false);cin.tie(NULL);
#define IO_Problem                 freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);


void spiral_form(vector<vector<int>>& mat){ 
    
    
    int rs = 0, re = mat.size()-1;
    int cs = 0, ce = mat[0].size()-1;
    
    
    while(rs<= re and cs <= ce){ 
        // first row 

        for (int i = cs; i <= ce ; ++i) {
            cout<<mat[rs][i]<<" ";
        }
        rs++;
        
        // last column 
        for (int i = rs; i <= re ; ++i) {
            cout<<mat[i][ce]<<" ";
        }
        ce--;

        // last row
        for (int i = ce ; i >= cs ; --i) {
            cout<<mat[re][i]<<" ";
        }
        re--;

        // first column
        for (int i = re ; i >= rs ; --i) {
            cout<<mat[i][cs]<<" ";
        }
        cs++;
    }
    
    
    
    
    
}

int32_t main()
{
    fast_io;
    // IO_Problem;

    vector<vector<int>> mat= { { 1, 2, 3, 4 },
                  { 5, 6, 7, 8 },
                  { 9, 10, 11, 12 },
                  { 13, 14, 15, 16 } };
    
    spiral_form( mat);
    

    return 0;
}