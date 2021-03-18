#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    string s,x="",y="";
    cin>>s;
    int n=s.size();
    int m=n/2,c=0;

    for(int i=0; i<m; i++)
    {
        x+=s[i];
    }
    for(int i=n-1; i>=n-m; i--)
    {
        y+=s[i];
    }

    for(int i=0; i<x.size(); i++)
    {
        if(x[i]!=y[i])
            c++;
    }

    if(c==0)
    {
        if(n%2==0)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    else if(c==1)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}
