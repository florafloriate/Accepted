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
        int a[n+5],zero=0;
        a[0]=0;
        a[n+1]=0;
        int b=0,e;
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
            if(a[i]==0)
                zero++;
            else if(b==0)
                b=i;
        }

        if(zero==n)
        {
            cout<<n<<" 0"<<endl; continue;
        }

        vector<pair<int,int>> vc;
        for(int i=1; i<=n+1; i++)
        {
            if(a[i]==0)
            {
                if(b<=i-1 && a[i-1]!=0)
                {
                    vc.push_back({b,i-1});
                    b=i+1;
                }
                else if(a[i-1]==0)
                    b=i+1;
            }
        }

//        for(auto it:vc)
//        {
//            b=it.first;
//            e=it.second;
//            cout<<b<<" "<<e<<endl;
//        }

        int mx=0,f=0,l=0;
        for(auto it:vc)
        {
            b=it.first;
            e=it.second;

            int cnt=0,two=0;
            for(int i=b; i<=e; i++)
            {
                if(a[i]<0)
                    cnt++;
                if(abs(a[i])==2)
                    two++;
            }

            if(cnt%2==0)
            {
                if(mx<=two)
                {
                    mx=two;
                    f=b-1; l=n-e;
                }
            }
            else
            {
                int x,y,tf=0,tl=0,tm=0;
                for(int i=b; i<=e; i++)
                {
                    if(abs(a[i])==2)
                        tf++;

                    if(a[i]<0)
                    {
                        x=i+1;break;
                    }
                }

                for(int i=e; i>=b; i--)
                {
                    if(abs(a[i])==2)
                        tl++;

                    if(a[i]<0)
                    {
                        y=i-1;break;
                    }
                }

                if(tf<tl)
                {
                    if(mx<=two-tf)
                    {mx=two-tf;
                    f=x-1; l=n-e;}
                }
                else
                {
                    if(mx<=two-tl)
                    {mx=two-tl;
                    f=b-1; l=n-y;}
                }
            }
        }

        cout<<f<<" "<<l<<endl;
    }

    return 0;
}
