#include<bits/stdc++.h>
using namespace std;
void fun(int n)
{
    if(n==0)
    {
        return ;
    }
    cout<<n<<" ";
    fun(n-1);
}
void fun2(int n)
{
    if(n==0)
    {
        return;
    }
  
    fun2(n-1);
    cout<<n<< " ";
}
void funboth(int n)
{
    if(n==0)
    {
        return ;
    }
    cout<<n<<" ";
    funboth(n-1);
    cout<<n<<" ";
}
int main()
{
    int n;
    cin>>n;
    fun(n);
    cout<<endl;
    fun2(n);
    cout<<endl;
    funboth(n);
    cout<<endl;
}