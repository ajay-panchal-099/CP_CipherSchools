/*
 *
 * Author :  Ajay Panchal
 * B.TECH  CSE STUDENT
 * LOVELY PROFESSIONAL UNIVERSITY
 * BATCH : 2018-2022
 * GITHUB LINK : https://github.com/ajay-panchal-099/CP_CipherSchools
 * PROBLEM STATEMENT : get min in O(1)
 */

#include<bits/stdc++.h>
using namespace std;

#define int                            long long
#define INF                            0x3f3f3f3f

#define fast_io                        ios_base::sync_with_stdio(false);cin.tie(NULL);
#define IO_Problem                 freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);

int getmin;
stack<int>s;

void s_push( int x){
    if(s.empty()){
        s.push(x);
        getmin = x;
    }
    else if( x>= getmin){
        s.push(x);
    }
    else{
        int temp = 2* x - getmin;
        s.push(temp);
        getmin = x;
    }
}

void s_pop( ){

    if( s.empty())
        return;
    else{

        int st =s.top();

        if(st >= getmin)
            s.pop();
        else{
            getmin = 2* getmin - st;
            s.pop();
        }
    }
}
void get_min(){
    cout<<getmin<<endl;
}


int32_t main()
{
    fast_io;
    // IO_Problem;
    s_push(3);
    get_min();
    s_push(5);
    get_min();
   s_push(2);
    get_min();
    s_push(1);
    get_min();
    s_push(1);
    get_min();
    s_push(1);
    get_min();

    return 0;
}