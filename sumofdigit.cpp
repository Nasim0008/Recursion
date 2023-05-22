#include<bits/stdc++.h>
using namespace std;
int fun(int n)
{
    static int cnt =0;
    if(n==0)
    {
        return cnt ;
    }
    cnt++;
    n/=10;
    fun(n);

}
int main()
{
    int n;
    cin>>n;
    int ans =fun(n);
    cout<<ans<<endl;
}