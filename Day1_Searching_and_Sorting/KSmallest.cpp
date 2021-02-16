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

void KSmallest(vector<int>&vec, int k){

    priority_queue<int>max_h;

    for( int x: vec){
        max_h.push(x);
        if(max_h.size() > k){
            max_h.pop();
        }
    }

    cout<<" K Smallest elements are: "<<endl;

    while(max_h.size()>0){
        int t = max_h.top();
        cout<<t<<" ";
        max_h.pop();
    }

}

int32_t main()
{
    fast_io;
    // IO_Problem;
    vector<int> vec{3, 2, 4, 5, 6, 7, 8};

    int k = 4;

    KSmallest(vec, k);

    return 0;
}