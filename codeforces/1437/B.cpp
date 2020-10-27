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
        string s;
        cin>>s;
        int z=1,o=1;
        for(int i=1; i<n; i++)
        {
            if(s[i]=='1' && s[i]==s[i-1])
                o++;
            if(s[i]=='0' && s[i]==s[i-1])
                z++;
        }
        if(o>z)
            cout<< o-1 <<endl;
        else
            cout<< z-1 <<endl;
    }
}
