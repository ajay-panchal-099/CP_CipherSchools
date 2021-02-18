/*
 *
 * Author :  Ajay Panchal
 * B.TECH  CSE STUDENT
 * LOVELY PROFESSIONAL UNIVERSITY
 * BATCH : 2018-2022
 * GITHUB LINK : https://github.com/ajay-panchal-099/CP_CipherSchools
 * PROBLEM STATEMENT :
 */

#include<bits/stdc++.h>
using namespace std;

#define int                            long long
#define INF                            0x3f3f3f3f

#define fast_io                        ios_base::sync_with_stdio(false);cin.tie(NULL);
#define IO_Problem                 freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);

void  left_min(vector<int>&vec){

    stack<int>s;
    vector<int> ans(vec.size());
    for (int i = 0; i < vec.size() ; ++i) {

        while(!s.empty() and vec[s.top()] >= vec[i])
            s.pop();

        if(s.empty())
            ans[i]  = -1;
        else ans[i] = s.top();

        s.push(i);

    }

    for( int x: ans){
        if(x==-1)
            cout<<"-"<<" ";
        else
            cout<<vec[x]<<" ";
    }
    cout<<endl;

}

int32_t main()
{
    fast_io;
    // IO_Problem;
    vector<int>vec = {1, 6, 4, 10, 2, 5};
    left_min(vec);

    return 0;
}