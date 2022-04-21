#include<bits/stdc++.h>
#define mod              1000000007
#define INF              1e9
#define pi               acos(-1)
#define ll               long long
#define endl             "\n"
#define F                first
#define S                second
#define bug(x)           cout<<x<<"*"<<endl;
#define LL_INF           1LL<<62
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
        int n; cin>>n;
        string s; cin>>s;
        s=" "+s;
        vector<int> v;
        v.push_back(0);
        for(int i=1; i<n+1; i++)
        {
            if(s[i]=='W')
                v.push_back(i);
        }

        v.push_back(n+1);
        bool f=true;
        int a[3];
//        for(int i=1; i<v.size(); i++)
//            cout<<v[i-1]<<" "<<v[i]<<endl;
        for(int i=1; i<v.size(); i++)
        {
            a[0]=0;
            a[1]=0;

            if(v[i]-v[i-1]==1)
                continue;
            else if(v[i]-v[i-1]>2)
            {
                for(int j=v[i-1]+1; j<v[i]; j++)
                {
                    if(s[j]=='B')
                        a[0]++;
                    else
                        a[1]++;
                }

                if(a[0]==0 || a[1]==0)
                    f=false;

            }
            else
                f=false;
        }

        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
