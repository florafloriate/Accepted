#include<bits/stdc++.h>
#define mod              1000000007
#define INF              1e9
#define pi               acos(-1)
#define ll               long long
#define endl             "\n"
#define F                first
#define S                second
#define bug(x)           cout<<x<<"*"<<endl;
#define mem(name,value)  memset(name, value, sizeof(name))
#define decimal(x)       fixed<<setprecision(x)
#define fastio           ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

int main()
{
    fastio;

    int t; cin>>t;
    while(t--)
    {
        string s,t; cin>>s>>t;
        map<char,int> mp;

        int ss=s.size(), ts=t.size();
        for(int i=0; i<ss; i++)
            mp[s[i]]++;

        if(t!="abc" || mp['c']==0 || mp['b']==0 || mp['a']==0)
        {
            for(auto i:mp)
            {
                for(int j=1; j<=i.second; j++)
                    cout<<i.first;
            }

            cout<<endl;
        }
        else
        {
            int x=0;
            for(auto i:mp)
            {
                if(i.first=='b')
                    x=i.second;
                else
                {
                    for(int j=1; j<=i.second; j++)
                        cout<<i.first;

                    if(i.first=='c')
                    {
                        for(int j=1; j<=x; j++)
                            cout<<"b";
                    }
                }
            }

            cout<<endl;
        }
    }
}
