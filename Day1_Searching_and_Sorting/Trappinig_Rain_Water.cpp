/*
 *
 * Author :  Ajay Panchal
 * B.TECH  CSE STUDENT
 * LOVELY PROFESSIONAL UNIVERSITY
 * BATCH : 2018-2022
 * GITHUB LINK : https://github.com/ajay-panchal-099/CP_CipherSchools
 * PROBLEM STATEMENT : Trapping Rain Water
 */

#include<bits/stdc++.h>
using namespace std;

#define int                            long long
#define INF                            0x3f3f3f3f

#define fast_io                        ios_base::sync_with_stdio(false);cin.tie(NULL);
#define IO_Problem                 freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);





void trap( vector<int>&vec){
   int n = vec.size();
    vector<int> right(n);
    int water = 0;

    right[n - 1] = vec[n - 1];
    for (int i = n - 2; i >= 0; i--)
        right[i] = max(right[i + 1], vec[i]);
    int left = vec[0];
    for (int i = 0; i < n; i++){
        left = max(left, vec[i]);
        water += min(left, right[i]) - vec[i];
    }


    cout<< water<<endl;


}

int32_t main()
{
    fast_io;
    // IO_Problem;


    vector<int> building{0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};

    trap(building);

    return 0;
}