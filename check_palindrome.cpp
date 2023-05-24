#include <bits/stdc++.h>
using namespace std;
bool check(string s, int low, int high,int n)
{
    if (low==(n/2))
    {
        return true;
    }
    if (s[low] != s[high])
    {
        return false;
    }

    return check(s, ++low, --high,n);
}
int main()
{
    string s;
    cin >> s;
    bool flag = check(s, 0, s.size() - 1,s.size());
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}