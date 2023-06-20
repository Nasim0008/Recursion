#include <bits/stdc++.h>
using namespace std;
int fun(int arr[], int i, int n, int target)
{
    if (i == n)
    {
        return -1;
    }
    if (arr[i] != target)
    {
        return fun(arr, ++i, n, target);
    }
    
    return i;
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
    cout<<fun(arr,0,n,5)<<endl;
  
}