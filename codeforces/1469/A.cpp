#include <bits/stdc++.h>
#define ll long long

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.size();

        if(n%2==1 || s[0]==')' || s[n-1]=='(')
            cout<< "NO\n";
        else
            cout<< "YES\n";
    }

}
