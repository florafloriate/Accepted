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
        string s; cin>>s;

        int c=0,len=n,step=0;
        for(int i=1; i<n; i++)
        {
            //cout<<"*"<<c<<" "<<i<<endl;
            if(s[c]=='(' && s[c+1]==')')
            {
                len-=2;
                step++;
                i=c+2;
                c=c+2;
            }
            else if(s[c]==s[i])
            {
                len=len-(i-c+1);
                step++;
                c=i+1;
                i++;
            }
            //cout<<" "<<c<<" "<<i<<endl;
        }

        cout<<step<<" "<<len<<endl;
    }

}
