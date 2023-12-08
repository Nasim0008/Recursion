#include <bits/stdc++.h>
using namespace std;
void fun(int i, int n, int sum, int arr[], vector<int> &v)
{
    if (i >= n)
    {
        for (auto u : v)
        {
            cout << u << " ";
        }
        cout << endl;
        return;
    }
    v.push_back(arr[i]);
    fun(i + 1, n, sum + arr[i], arr, v);
    v.pop_back();
    fun(i + 1, n, sum, arr, v);
}
int main()
{
    int n;
    cin >> n;
    int arr[n + 3];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> v;
    fun(0, n, 0, arr, v);
    sort(v.begin(), v.end());
    for (auto u : v)
    {
        cout << u << " ";
    }
    cout << endl;
}