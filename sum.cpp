#include<bits/stdc++.h>
using namespace std;
int ans =0;
int sum (int n)
{
    if(n==0)
    {
        return ans ;
    }
    ans+=n;
    n--;
    sum(n);
}
int main()
{
    int n;
    cin>>n;
    int ans = sum(n);
    cout<<ans<<endl;
}