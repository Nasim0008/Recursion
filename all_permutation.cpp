#include<bits/stdc++.h>
using namespace std;
void fun(int n,int arr[],vector<int>&v,int check[])
{
    if(v.size()==n)
    {
        for(auto u:v)
        {
            cout<<u<< " ";
        }
        cout<<endl;
        return;
    }

    for(int i=0;i<n;i++)
    {
        if(check[i]==0)
        {
            check[i]=1;
            v.push_back(arr[i]);
            fun(n,arr,v,check);
            check[i]=0;
            v.pop_back();
        }
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
    int check[n+3]={0};
    fun(n,arr,v,check);
}