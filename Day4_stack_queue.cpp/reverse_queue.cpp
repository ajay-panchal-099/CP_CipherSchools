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


void reverse_queue( queue<int>&q){

    if(!q.empty()){ 
        int temp = q.front();
        q.pop();
        reverse_queue(q);
        q.push(temp);
    }

}

int32_t main()
{
    fast_io;
    // IO_Problem;

    queue<int>q;

    for (int i = 0; i < 10; ++i) {
        q.push(11-i);
        //cout<<11-i<<" ";
    }
  cout<<endl;
    reverse_queue(q);

    while (!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }

    return 0;
}