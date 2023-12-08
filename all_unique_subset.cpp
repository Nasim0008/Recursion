#include<bits/stdc++.h>
using namespace std;
void fun(int ind,int n,int arr[],vector<int>&v)
{
    for(auto u:v)
    {
        cout<<u<< " ";
    }
    cout<<endl;

    for(int i=ind;i<n;i++)
    {
        if(i!=ind and arr[i]==arr[i+1])
        {
            continue;
        }
        v.push_back(arr[i]);
        fun(i+1,n,arr,v);
        v.pop_back();
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
    vector<int>v;
    fun(0,n,arr,v);
}