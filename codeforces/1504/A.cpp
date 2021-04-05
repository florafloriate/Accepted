#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,a,b;
        cin>>s;
        int acnt=0,ok=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='a')
                acnt++;
        }
        if(acnt==s.size())
        {
            cout<<"NO"<<endl; continue;
        }

        int n=s.size()+1;
        a="a"+s;
        for(int i=0; i<n; i++)
        {
            if(a[i]!=a[n-i-1])
            {
                ok=1;
                cout<<"YES"<<endl;
                cout<<a<<endl;
                break;
            }
        }
        if(ok)
            continue;

        b=s+"a";
        for(int i=0; i<n; i++)
        {
            if(b[i]!=b[n-i-1])
            {
                ok=1;
                cout<<"YES"<<endl;
                cout<<b<<endl;
                break;
            }
        }
        if(ok)
            continue;
        else
        {
            cout<<"NO"<<endl; continue;
        }
    }
    return 0;
}
