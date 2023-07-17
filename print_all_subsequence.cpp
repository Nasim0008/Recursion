#include<bits/stdc++.h>
using namespace std;
void fun(int ind,int n,vector<int>&v,int arr[])
{
    if(ind>=n)
    {
        for(auto u:v)
        {
            cout<<u<< " ";
        }
        cout<<endl;
        return;
    }
    v.push_back(arr[ind]);
    fun(ind+1,n,v,arr);

    v.pop_back();
    fun(ind+1,n,v,arr);
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
    vector<int>v;
    fun(0,n,v,arr);
}