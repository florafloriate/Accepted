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
        int n; cin>>n;
        string se,sg; cin>>se>>sg;

        int ans=0;
        for(int i=0; i<n; i++)
        {
            if(sg[i]=='1')
            {
                if(se[i]=='0')
                    ans++;
                else if(i>0 && se[i-1]=='1')
                {
                    ans++; se[i-1]='0';
                }
                else if(i<n-1 && se[i+1]=='1')
                {
                    ans++; se[i+1]='0';
                }
            }
        }
        cout<<ans<<endl;
    }
}
