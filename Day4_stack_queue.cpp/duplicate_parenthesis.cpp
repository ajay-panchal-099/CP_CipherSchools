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

bool duplicate_parenthesis(string str){

    stack<char> s;


    for (int i = 0; i < str.length() ; ++i) {
         if(str[i] == ')'){

             int non = 0;

             while(!s.empty() and s.top() != '('){
                 if(s.top() =='+')
                     non++;
                 s.pop();
             }
             s.pop();
             if(non == 0)
                 return true;

        }
         else{
             s.push(str[i]);
         }
    }
    return false;
}

int32_t main()
{
    fast_io;
    // IO_Problem;

    string str = "((a+b)+((c+d)))";

    if(duplicate_parenthesis(str))
        cout<<"YES"<<endl;
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}