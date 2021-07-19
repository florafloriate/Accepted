#include<bits/stdc++.h>
#define mod              1000000007
#define INF              1e9
#define pi               acos(-1)
#define ll               long long
#define endl             "\n"
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
        int n,k1,k2; cin>>n>>k1>>k2;
        int a[k1+5];
        int b[k2+5];
        string s;

        for(int i=0; i<k1; i++)
        {
            cin>>a[i];
            if(a[i]==n)
                s="YES";
        }

        for(int i=0; i<k2; i++)
        {
            cin>>b[i];
            if(b[i]==n)
                s="NO";
        }

        cout<<s<<endl;
    }
}
