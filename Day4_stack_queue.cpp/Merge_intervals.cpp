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

#define ii pair<int, int>


bool compare(  ii &a,  ii&b){
    return a.first <= b.first;
}
void merge_intervals( vector<ii> &vec){

    sort( vec.begin(), vec.end(), compare);

    vector<ii> result;

   for( auto it: vec){
       if(result.empty()){
           result.push_back(it);
       }
       else{
           ii tp = result.back();
           result.pop_back();

           if( tp.second >it.second){
               result.emplace_back(tp.first, max(it.second, tp.second));
           }else{
               result.push_back(tp);
               result.push_back(it);
           }

       }
       
   }

   for( auto it: result)
       cout<<it.first<<" "<<it.second<<endl;

}

int32_t main()
{
    fast_io;
    // IO_Problem;

    vector<ii> vec = {{6, 8}, {1, 9}, {2, 4}, {4 , 7}};

    merge_intervals( vec);


    return 0;
}