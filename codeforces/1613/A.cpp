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
        string a,b; int x,y; cin>>a>>x>>b>>y;

        if(a.size()+x > b.size()+y)
            cout<< ">" <<endl;
        else if(a.size()+x < b.size()+y)
            cout<< "<" <<endl;
        else
        {
            int mn=min(x,y);
            x-=mn; y-=mn;

            while(x--)
                a+="0";
            while(y--)
                b+="0";

            int n=a.size(),p=0;
            for(int i=0; i<n; i++)
            {
                if(a[i]>b[i])
                {
                    cout<<">"<<endl;
                    p=1;break;
                }
                else if(a[i]<b[i])
                {
                    cout<<"<"<<endl;
                    p=1;break;
                }
            }

            if(p==0) cout<<"="<<endl;
        }

    }
}
