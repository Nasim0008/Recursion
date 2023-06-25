#include<bits/stdc++.h>
using namespace std;
void fun(int i,int r,int j,int c)
{
    if(i==r)
    {
        return;
    }
    if(j<c)
    {
        cout<< "* ";
        fun(i,r,j+1,c);
    }
    else
    {
        c-=1;
        cout<<endl;
        fun(i+1,r,0,c);
    }
}
int main()
{
    int r,c;
    cin>>r>>c;
    fun(0,r,0,c);
}