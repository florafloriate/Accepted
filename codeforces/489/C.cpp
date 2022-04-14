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

    int m,s,ss; cin>>m>>s;

    ss=s;
    if(m*9<s || (s==0&&m>1))
        cout<<"-1 -1"<<endl;
    else
    {
        string ans="",an="";
        for(int i=1; i<=m; i++)
        {
            ans+="0";
            an+="0";
        }

        for(int i=0; i<ans.size(); i++)
        {
            if(s-9>=0)
            {
                ans[i]+=9;
                s-=9;
            }
            else
            {
                ans[i]+=s;
                s=0;
            }
        }

        an[m-1]='1';
        ss--;
        for(int i=0; i<an.size(); i++)
        {
            if(ss-9>=0)
            {
                an[i]+=9;
                ss-=9;
            }
            else
            {
                an[i]+=ss;
                ss=0;
            }
        }

        reverse(an.begin(),an.end());
        cout<<an<<" "<<ans<<endl;
    }
}
