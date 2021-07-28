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
    //fastio;
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;

        if(n%2==0)
        {
            for(int i=1; i<=n; i++)
            {
                for(int j=1; j<=n; j++)
                {
                    if(i==j) cout<<"1";
                    else if(i==(n-j+1)) cout<<"1";
                    else cout<<"0";
                    cout<<" ";
                }
                cout<<endl;
            }
        }
        else
        {
            int x=n/2; x++;
            for(int i=1; i<=n; i++)
            {
                for(int j=1; j<=n; j++)
                {
                    if(i==x && j==x) cout<<"0";
                    else if(i==x-1 && j==x) cout<<"1";
                    else if(i==x && (j==x+1||j==x-1)) cout<<"1";
                    else if(i==x+1 && j==x) cout<<"1";
                    else if(i==j) cout<<"1";
                    else if(i==(n-j+1)) cout<<"1";
                    else cout<<"0";
                    cout<<" ";
                }
                cout<<endl;
            }
        }
    }
}
