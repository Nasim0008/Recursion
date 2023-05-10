#include<bits/stdc++.h>
using namespace std;
void rev(int i,int n,string s)
{
    if(i>=(n/2))
    {
        return ;
    }
    swap(s[i],s[n-1-i]);
    rev(i+1,n,s);
}
bool check(string s)
{
    string temp  = s ;
    int n = s.size();
    rev(0,n,s);
    if(temp==s)
    {
        return true;
    }
    return false;
}
int main()
{
    string s;
    cin>>s;
    if(check(s))
    {
        cout<< "Yes"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}