/*
 *
 * Author :  Ajay Panchal
 * B.TECH  CSE STUDENT
 * LOVELY PROFESSIONAL UNIVERSITY
 * BATCH : 2018-2022
 * GITHUB LINK : https://github.com/ajay-panchal-099/CP_CipherSchools
 * PROBLEM STATEMENT : largest rectangular area in binary matrix
 *
 *  formula used: abs(left_max - right_max) * arr[i]
 */

#include<bits/stdc++.h>
using namespace std;

#define int                            long long
#define INF                            0x3f3f3f3f

#define fast_io                        ios_base::sync_with_stdio(false);cin.tie(NULL);
#define IO_Problem                 freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);


vector<int> left_max(vector<int>&hist){

    stack<int>s;
    vector<int> ans(hist.size());
    for (int i = 0; i < hist.size() ; ++i) {

        while(!s.empty() and hist[s.top()] >= hist[i])
            s.pop();

            if(s.empty())
                ans[i]  = -1;
            else ans[i] = s.top();

            s.push(i);

    }

    /*for( int x: ans)cout<<x<<" ";
    cout<<endl;*/
    return ans;
}


vector<int> right_max(vector<int>&hist){

     stack<int>s;
    vector<int> ans(hist.size());
    for (int i = hist.size()-1; i>=0; --i) {

        while(!s.empty() and hist[s.top()] >= hist[i])
            s.pop();

            if(s.empty())
                ans[i]  =hist.size() ;
            else ans[i] = s.top();

            s.push(i);

    }

    /*for( int x: ans)cout<<x<<" ";
    cout<<endl;*/
    return ans;

}



int  largest_area( vector<int>& hist){

    int max_area = 0;

    vector<int>left = left_max(hist);
   vector<int>right = right_max(hist);

    for (int i = 0; i < hist.size(); ++i) {

        int area = (right[i] - left[i]  -1 ) * hist[i];
        max_area = max( area, max_area);
    }

    //cout<<max_area<<endl;
    return max_area;

}

int32_t main()
{
    fast_io;
    // IO_Problem;

   vector< vector<int>> mat={
            { 0, 1, 1, 0 },
            { 1, 1, 1, 1 },
            { 1, 1, 1, 1 },
            { 1, 1, 0, 0 },
    };

    vector<int>v(mat.size(), 0);

    int area = 0;
    for (int i = 0; i < mat.size(); ++i) {
        for (int j = 0; j < mat[0].size(); ++j) {
            if(mat[i][j] == 0){
                v[j] = 0;
            }else
                v[j]+=1;
        }
        area = max(area, largest_area(v));
    }

    cout<<area<<endl;

    return 0;
}