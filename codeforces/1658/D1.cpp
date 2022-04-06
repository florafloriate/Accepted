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
        int s,n; cin>>s>>n;
        int a[n+5];
        for(int i=0; i<n+1; i++)
            cin>>a[i];

        int bit[35]={0};

        for(int i=0; i<n+1; i++)
        {
            int x=0;
            while(a[i]!=0)
            {
                if(a[i]&1 == 1)
                    bit[x]++;

                x++;
                a[i]=a[i]>>1;
            }
        }

        int c=n+1,pos=0;

        for(int i=32; i>=0; i--)
        {
            if(bit[i]>0)
            {
                pos=i; break;
            }
        }

        int ans=0;
        for(int i=pos; i>=0; i--)
        {
            int x=1<<i;
            if(bit[i]>c-bit[i])
                ans=ans|x;
        }

        cout<<ans<<endl;
    }

}
