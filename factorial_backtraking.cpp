#include<bits/stdc++.h>
using namespace std;
// long long int ans = 1;
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
  return n*(fact(n-1));
}
int main()
{
    int n;
    cin>>n;
    long long int value = fact(n);
    cout<<value<<endl;
}