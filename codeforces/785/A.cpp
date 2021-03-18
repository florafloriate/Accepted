#include<bits/stdc++.h>
#define ll long long
#define freopenin freopen("input.txt","r",stdin);
#define freopenout freopen("output.txt","w",stdout);

using namespace std;

int main()
{
    int n,sum=0;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;

        if(s[0]=='T')
            sum+=4;
        else if(s[0]=='C')
            sum+=6;
        else if(s[0]=='O')
            sum+=8;
        else if(s[0]=='D')
            sum+=12;
        else if(s[0]=='I')
            sum+=20;
    }
    cout<<sum<<endl;
}


