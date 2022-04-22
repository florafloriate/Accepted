#include<bits/stdc++.h>
#define mod              1000000007
#define INF              1e9
#define pi               acos(-1)
#define ll               long long
#define endl             "\n"
#define F                first
#define S                second
#define LL_INF           1LL<<62
#define Checkbit(x, k)   (x & (1LL << k)) ///whether the k-th bit of x is zero or not
#define mem(name,value)  memset(name, value, sizeof(name))
#define binary(x)        bitset<31>(x)
#define decimal(x)       fixed<<setprecision(x)
#define fastio           ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

int main()
{
    fastio;
    int t; cin>>t;
    while(t--)
    {
        string s; cin>>s;

        vector<int> v;
        int a=1;
        for(int i=1; i<s.size(); i++)
        {
            if(s[i]==s[i-1])
            {
                a++;
            }
            else
            {
                v.push_back(a);
                a=1;
            }
        }

        v.push_back(a);

        bool f=true;
        for(auto i:v)
        {
            //cout<<i<<" ";
            if(i<=1)
                f=false;
        }

        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
}
