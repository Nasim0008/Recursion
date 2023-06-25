#include<bits/stdc++.h>
using namespace std;
void fun(int arr[],int i,int j,int n)
{
    if(i==n-1)
    {
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        return;
    }

    if(j<n-1)
    {
        if(arr[j]>arr[j+1])
        {
            swap(arr[j],arr[j+1]);
        }
        fun(arr,i,j+1,n);
    }
    else
    {
        fun(arr,i+1,0,n);
    }
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
    fun(arr,0,0,n);
}