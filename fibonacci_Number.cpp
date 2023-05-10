#include<bits/stdc++.h>
using namespace std;
int fibo(int n)
{
    if(n<=1)
    {
        return n;
    }
    int last = fibo(n-1);
    int second_last=fibo(n-2);
    return last+second_last;
}
int main()
{
    int n;
    cin>>n;
    int value = fibo(n);
    cout<<value<<endl;
}