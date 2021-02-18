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

void maximum( vector<int>& vec, int k ){

     deque<int> q;
     int i;
    for ( i = 0; i < k; ++i) {

        while (!q.empty() and   vec[i] >= vec[q.back()] )
            q.pop_back();
        q.push_back(i);
    }


    for (; i <  vec.size(); ++i) {
        cout<<vec[q.front()]<<" ";

        while (!q.empty() and   vec[i] >= vec[q.back()] )
            q.pop_back();

        while (!q.empty() and   q.front() <= i-k )
            q.pop_front();

        q.push_back(i);

    }
    cout<<vec[q.front()];
}


int32_t main()
{
    fast_io;
    // IO_Problem;

    vector<int> vec = { 1, 2, 3, 1, 4, 5, 2, 3, 6};

    int k ;
    k = 3;

    maximum(vec, k);

    return 0;
}