#include<bits/stdc++.h>
using namespace std;
void fun(int ind,int n,vector<int>&v,int arr[],int target,int sum)
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
        }
        return;
    }

    sum+=arr[ind];
    v.push_back(arr[ind]);
    fun(ind+1,n,v,arr,target,sum);

    sum-=arr[ind];
    v.pop_back();
    fun(ind+1,n,v,arr,target,sum);
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