/*
 *
 * Author :  Ajay Panchal
 * B.TECH  CSE STUDENT
 * LOVELY PROFESSIONAL UNIVERSITY
 * BATCH : 2018-2022
 * GITHUB LINK : https://github.com/ajay-panchal-099/CP_CipherSchools
 * PROBLEM STATEMENT : C++ program for implementation of Heap Sort
 */

#include <bits/stdc++.h>
using namespace std;

void heapify(vector<int>&v, int n, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && v[l] > v[largest])
        largest = l;

    if (r < n && v[r] > v[largest])
        largest = r;

    if (largest != i) {
        swap(v[i], v[largest]);
        heapify(v, n, largest);
    }
}
void heapSort(vector<int>&v)
{
    int n = v.size();
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(v, n, i);

    for (int i = n - 1; i >= 0; i--) {
        swap(v[0], v[i]);
        heapify(v, i, 0);
    }
}
int main()
{
   vector<int> v = { 12, 11, 13, 5, 6, 7 };
    heapSort(v);

    
   for(auto it: v)
       cout<<it<<" ";
}