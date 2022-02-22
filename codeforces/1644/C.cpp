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

int maxsum(int a[],int n,int k)
{
    int sum=0;
    for(int i=0; i<k; i++)
        sum+=a[i];

    int last=0;
    int j=0;
    int ans=INT_MIN;
    ans=max(ans,sum);
    for(int i=k; i<n; i++)
    {
        sum=sum+a[i];
        last=last+a[j++];
        ans=max(ans,sum);
        if(last<0)
        {
            sum=sum-last;
            ans=max(ans,sum);
            last=0;
        }
    }
    return ans;
}

int main()
{
    fastio;
    int t; cin>>t;
    while(t--)
    {
        int n,x; cin>>n>>x;
        int a[n+5];
        for(int i=0; i<n; i++)
            cin>>a[i];

        int p=maxsum(a,n,0);

        for(int k=0; k<=n; k++)
        {
            int y=maxsum(a,n,k)+(x*k);

            p=max(y,p);

            cout<<max(p,0)<<" ";
        }
        cout<<endl;
    }
}
