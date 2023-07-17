#include<bits/stdc++.h>
using namespace std;
bool flag = false;
bool fun(int ind,int n,vector<int>&v,int arr[],int target,int sum)
{
    if(ind>=n)
    {
        if(sum==target)
        {
            for(auto u:v)
            {
                cout<<u<< " ";
            }
            cout<<endl;
            return true;
        }
        else 
        {
            return false;
        }
    }

    sum+=arr[ind];
    v.push_back(arr[ind]);
     if(fun(ind+1,n,v,arr,target,sum)==true)
     {
        return true;
     }

    sum-=arr[ind];
    v.pop_back();
    if(fun(ind+1,n,v,arr,target,sum)==true)
    {
        return true;
    }

    return false;
}
int main()
{
    int n;
    cin>>n;
    int target = 2;
    int arr[n+4];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int>v;
    fun(0,n,v,arr,target,0);

}