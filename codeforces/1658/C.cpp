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

int n;
int a[102];
int sum[100002]={0};

int main()
{
    fastio;

    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int c[n+n+5];
        int one=0,pos=0;
        for(int i=0; i<n; i++)
        {
            cin>>c[i];
            if(c[i]==1)
            {
                one++;
                pos=i;
            }
        }

        if(one==1)
        {
            int x=n;
            for(int i=0; i<pos; i++)
            {
                c[x++]=c[i];
            }

            int last=c[pos],ans=1;
            for(int i=pos+1; i<=pos+n-1; i++)
            {
                if(c[i]>1 && c[i]<=last+1)
                    last=c[i];
                else
                    ans=0;
            }

            if(ans)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
            cout<<"NO"<<endl;

    }

}
