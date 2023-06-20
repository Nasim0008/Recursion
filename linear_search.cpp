#include <bits/stdc++.h>
using namespace std;
vector<int> fun(int arr[], int i, int n, int target, vector<int> v)
{
    if (i == n)
    {
        return v;
    }
    if (arr[i] != target)
    {
        return fun(arr, ++i, n, target, v);
    }
    v.push_back(i);
    return fun(arr, ++i, n, target, v);
}
int main()
{
    int n;
    cin >> n;
    int arr[n + 4];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> ve;
    vector<int> v = fun(arr, 0, n,4, ve);
    for (auto u : v)
    {
        cout << u << " ";
    }
    cout << endl;
}