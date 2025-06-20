#include <bits/stdc++.h>
using namespace std;

void printSortedWithIndex(int arr[], int n)
{
    vector<pair<int, int>> v;
    for(int i = 0; i < n; i++)
        v.push_back({arr[i], i});
    sort(v.begin(), v.end());
    for(int i = 0; i < n; i++)
    {
        cout << v[i].first << " " << v[i].second;
        cout << endl;
    }
}

int main()
{
    int arr[] = {20, 10, 5, 40};
    printSortedWithIndex(arr, 4);
    return 0;
}