#include<bits/stdc++.h>
using namespace std;
void print(int row,int col,int arr[])
{
    if(row==0)
    {
        return;
    }
    if(col<row)
    {
        if(arr[col]>arr[col+1])
        {
            swap(arr[col],arr[col+1]);
        }
        print(row,col+1,arr);
    }
    else
    {
        print(row-1,0,arr);
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
    print(n-1,0,arr);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}