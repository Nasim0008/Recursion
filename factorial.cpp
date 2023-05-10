#include<bits/stdc++.h>
using namespace std;
long long int ans = 1;
long long int fact(int n)
{
    if(n==0)
    {
        return ans;
    }
    fact(n-1);
    ans*=n;
}
int main()
{
    int n;
    cin>>n;
    long long int value = fact(n);
    cout<<value<<endl;
}