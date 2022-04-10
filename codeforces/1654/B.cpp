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
        string s; cin>>s;
        int n=s.size();

        map<char,int> mp;
        for(int i=0; i<n; i++)
        {
            mp[ s[i] ]++;
        }

        for(int i=0; i<n; i++)
        {
            if(mp[s[i]]<2)
            {
                break;
            }
            else if(mp[s[i]]>=2)
            {
                mp[ s[i] ]--;
                s.erase(s.begin());
                i--;
            }
        }
        //cout<<endl;

        cout<<s<<endl;

    }
}
