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
        int n; cin>>n;
        int sumf=0;
        multiset<int> fa;
        multiset<int> fb;

        for(int i=0; i<n; i++)
        {
            int x; cin>>x;
            fa.insert(x);
            if(fa.size() > n/4)
            {
                sumf+=(*fa.rbegin());
                fb.insert(*fa.rbegin());
                fa.erase(fa.find(*fa.rbegin()));
            }
        }

        int suml=0;
        multiset<int> la;
        multiset<int> lb;

        for(int i=0; i<n; i++)
        {
            int x; cin>>x;
            la.insert(x);
            if(la.size() > n/4)
            {
                suml+=(*la.rbegin());
                lb.insert(*la.rbegin());
                la.erase(la.find(*la.rbegin()));
            }
        }

        int xn=0;
        while(sumf<suml)
        {
            xn++;
            int stage=n+xn;

            fb.insert(100);
            sumf+=100;
            if(fb.size() > stage - stage/4)
            {
                sumf-=(*fb.begin());
                fb.erase(fb.begin());
            }

            la.insert(0);
            if(la.size() > stage/4)
            {
                suml+=(*la.rbegin());
                la.erase(la.find(*la.rbegin()));
            }
        }
        cout<<xn<<endl;
    }
}
