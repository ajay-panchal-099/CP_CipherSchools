/*
 *
 * Author :  Ajay Panchal
 * B.TECH  CSE STUDENT
 * LOVELY PROFESSIONAL UNIVERSITY
 * BATCH : 2018-2022
 * GITHUB LINK : https://github.com/ajay-panchal-099/CP_CipherSchools
 * PROBLEM STATEMENT : stock buy and sell (infinite transactions)
 */

#include<bits/stdc++.h>
using namespace std;

#define int                            long long
#define INF                            0x3f3f3f3f

#define fast_io                        ios_base::sync_with_stdio(false);cin.tie(NULL);
#define IO_Problem                 freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);

void Profit(vector<int>& vec){

    int profit = 0;


    for (int i = 1; i <  vec.size(); ++i) {
        if(vec[i-1]< vec[i])
            profit+= vec[i] - vec[i-1];
    }

    cout<<profit<<endl;

}


int32_t main()
{
    fast_io;
    // IO_Problem;

    vector<int>vec{ 100, 180, 260, 310,
                    40, 535, 695};

    Profit(vec);

    return 0;
}