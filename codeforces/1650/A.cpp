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
        char c; cin>>c;

        vector<int> v;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]==c)
                v.push_back(i);
        }

        bool f=false;
        for(auto i : v)
        {
            if(i%2==0 && (s.size()-1-i)%2==0)
                f=true;
        }

        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
