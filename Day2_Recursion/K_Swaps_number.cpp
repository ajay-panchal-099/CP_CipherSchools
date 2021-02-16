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

string mx="";

void K_swaps_number( string num, int k, int index){
    if(num >  mx)
        mx = num;

    if( k == 0 ){
        return;
    }

  //cout<<mx<<endl;
    for (int i = index; i < num.length() -1; ++i) {
        for (int j = index+1; j < num.length() ; ++j) {
            if(num[j] > num[i]){
                swap(num[i], num[j]);
               // cout<<num<<endl;
                K_swaps_number(num, k-1, i+1);
              //  cout<<num<<endl;
                swap(num[i], num[j]);
            }
        }
    }
}

int32_t main()
{
    fast_io;
    // IO_Problem;

    string num = "76543";
    mx = num;
    int k = 1;

    K_swaps_number( num, k, 0);
    cout<<mx;

    return 0;
}