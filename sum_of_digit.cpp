#include<bits/stdc++.h>
using namespace std;
int fun(int n,int cnt)
{
    
    if(n==0)
    {
        return cnt ;
    }
    cnt+=(n%10);
    n/=10;
    fun(n,cnt);

}
int main()
{
    int n;
    cin>>n;
    int ans =fun(n,0);
    cout<<ans<<endl;
}