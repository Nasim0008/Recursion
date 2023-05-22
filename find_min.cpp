#include <bits/stdc++.h>
using namespace std;
int print(int arr[], int mx,int n,int start)
{
    if (start==n)
    {
        return mx;
    }
    mx = min(mx,arr[start]);
    start++;
    print(arr,mx,n,start);
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
    cout<<print(arr,INT_MAX,n,0)<<endl;
}