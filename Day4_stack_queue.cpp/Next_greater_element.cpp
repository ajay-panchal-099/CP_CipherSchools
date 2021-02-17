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

void next_greatet_element(vector<int>&vec){

    int l = vec.size();
    vector<int> ans(l);

    stack<int>s;
    for (int i = l-1;  i >=0 ; --i) {
        while(!s.empty() and s.top()< vec[i])
            s.pop();

        if(s.empty())
            ans[i] = -1;
        else
            ans[i] = s.top();
        s.push(vec[i]);

    }


    for( int x: ans)
        cout<<x<<" ";
}


int32_t main()
{
    fast_io;
    // IO_Problem;

    vector<int>vec={3, 5, 2, 5, 8,5, 4};

    next_greatet_element(vec);

    return 0;
}