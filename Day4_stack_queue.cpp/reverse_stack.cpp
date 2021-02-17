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

void insert(stack<int>&s, int temp){
    if(s.empty()){
        s.push(temp);
        return;
    }
    else{
        int temp1 = s.top();
        s.pop();
        insert(s, temp);
        s.push(temp1);
    }
}
void reverse_stack( stack<int>&s){
    if(!s.empty()){
        int temp = s.top();
        s.pop();
        reverse_stack(s);
        insert(s, temp);
    }

}


int32_t main()
{
    fast_io;
    // IO_Problem;

    stack<int>s;

    for (int i = 0; i < 10; ++i) {
        s.push(10*i+i);
    }

    reverse_stack(s);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

    return 0;
}