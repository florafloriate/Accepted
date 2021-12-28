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

bool cmp(pair<int,int> &x, pair<int,int> &y)
{
    if(x.S-x.F < y.S-y.F)
        return true;
    else
        return false;
}

int main()
{
    fastio;
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<pair<int,int>> vc;

        for(int i=0; i<n; i++)
        {
            int a,b; cin>>a>>b;
            vc.push_back(make_pair(a,b));
        }

        sort(vc.begin(),vc.end(),cmp);

        int p=0;

        int pos[1200]={0};
        int check[1200]={0};

        for(auto i:vc)
        {
            for(auto j=i.F; j<=i.S; j++)
            {
                if(check[j]==0)
                {
                    pos[p]=j;
                    check[j]=1;
                    p++;
                }
            }
        }

        p=0;

        for(auto i:vc)
        {
            cout<<i.F<<" "<<i.S<<" "<<pos[p]<<endl;
            p++;
        }
    }
}
