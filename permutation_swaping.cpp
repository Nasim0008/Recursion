#include<bits/stdc++.h>
using namespace std;
void fun(int i,int n,int arr[])
{
    if(i==n)
    {
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<< " ";
        }
        cout<<endl;
        return;
    }

    for(int ind = i;ind<n;ind++)
    {
        swap(arr[ind],arr[i]);
        fun(i+1,n,arr);
        swap(arr[ind],arr[i]);
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n+3];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    fun(0,n,arr);
}