#include<bits/stdc++.h>
using namespace std;
string rev(string s,int n,string a)
{
    if(n<0)
    {
        return a;
    }
    n--;
    a+=s[n];
     return rev(s,n,a);
}
int main()
{
    string s;
    cin>>s;
    int n = s.size();
    string a;
    cout<<rev(s,n,a)<<endl;
}