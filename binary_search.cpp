#include<bits/stdc++.h>
using namespace std;
int binary(int arr[],int low ,int high,int target)
{
    if(low>high)
    {
        return -1;
    }
    int mid = (low+high)/2;
    if(arr[mid]==target)
    {
        return mid;
    }
    if(arr[mid]<target)
    {
        return binary(arr,mid+1,high,target);
    }
    return binary(arr,low,mid-1,target);
}
int main()
{
    int n;
    cin>>n;
    int arr[n+4];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans = binary(arr,0,n-1,5);
    cout<<ans<<endl;
}