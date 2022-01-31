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
        ll hc,dc; cin>>hc>>dc;
        ll hm,dm; cin>>hm>>dm;
        ll k,w,a; cin>>k>>w>>a;

        ll cm=hm/dc;
        if(hm%dc!=0)
            cm++;

        ll mc=hc/dm;
        if(hc%dm!=0)
            mc++;


        string s="NO";

        for(int i=0; i<=k; i++)
        {
            cm=hm/(dc + (i*w));
            if((hm%(dc + (i*w)))!=0)
                cm++;

            mc=(hc + ((k-i)*a))/dm;
            if(((hc + ((k-i)*a))%dm)!=0)
                mc++;

            if(cm<=mc)
            {
                s="YES"; break;
            }
        }
        cout<<s<<endl;

    }
}
