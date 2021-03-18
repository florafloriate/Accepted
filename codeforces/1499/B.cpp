#include<bits/stdc++.h>
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
        int ok1=1, ok=1;
        for(int i=1; i<s.size(); i++)
        {
            if(s[i-1]==s[i] && s[i]=='1')
                ok=0;
            if(ok==0 && s[i-1]==s[i] && s[i]=='0')
                ok1=0;
        }

        if(ok==0 && ok1==0)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
}
