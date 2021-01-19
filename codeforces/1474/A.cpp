#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s,a="1";
        cin>>s;

        for(int i=1; i<n; i++)
        {
            if(s[i-1]==s[i])
            {
                if(a[i-1]=='1')
                    a+="0";
                else
                    a+="1";
            }
            else if(s[i-1]!=s[i] && s[i]=='1')
            {
                a+="1";
            }
            else
            {
                if(a[i-1]=='1')
                    a+="1";
                else
                    a+="0";
            }
        }

        cout<<a<<endl;

    }
}
