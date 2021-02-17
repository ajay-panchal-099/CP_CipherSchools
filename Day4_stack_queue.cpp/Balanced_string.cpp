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

bool balanced( string str){

    stack<int>s;

    for( auto ch : str){
        if(ch == '{' || ch == '[' || ch == '(')
            s.push(ch);
        else{
            if(s.empty())
                return false;
            char tp = s.top();
            s.pop();
            if((ch == '}' and tp == '[') or ((ch == '}' and tp == '(') ) )
                return false;
            else if((ch == ']' and tp == '(') or ((ch == ']' and tp == '{') ))
                 return false;
            else if((ch == ')' and tp == '[') or ((ch == ')' and tp == '{') ))
              return false;
        }
    }

    if(s.empty())
        return true;
    return false;


}

int32_t main()
{
    fast_io;
    // IO_Problem;
    string str = "[({})]";

    if(balanced(str)){
        cout<<"string is balanced"<<endl;
    }else{
        cout<<"string is not balanced"<<endl;
    }

    return 0;
}