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
    int n; cin>>n;
    string s; cin>>s;

    vector<vector<int>> v(20);

    for(int i=2; i<=9; i++)
    {
        if(i==2)
        {
            v[i].push_back(2);
        }
        else if(i==3)
        {
            v[i].push_back(3);
        }
        else if(i==4)
        {
            v[i].push_back(2);
            v[i].push_back(2);
            v[i].push_back(3);
        }
        else if(i==5)
        {
            v[i].push_back(5);
        }
        else if(i==6)
        {
            v[i].push_back(3);
            v[i].push_back(5);
        }
        else if(i==7)
        {
            v[i].push_back(7);
        }
        else if(i==8)
        {
            v[i].push_back(2);
            v[i].push_back(2);
            v[i].push_back(2);
            v[i].push_back(7);
        }
        else if(i==9)
        {
            v[i].push_back(7);
            v[i].push_back(3);
            v[i].push_back(3);
            v[i].push_back(2);
        }
    }

    vector<int> ans;
    for(int i=0; i<n; i++)
    {
        if(s[i]!='0' && s[i]!='1')
        {
            for(auto it : v[s[i]-'0'])
            {
                ans.push_back(it);
            }
        }
    }

    sort(ans.begin(),ans.end());
    reverse(ans.begin(),ans.end());

    for(auto it : ans)
    {
        cout<<it;
    }cout<<endl;

}
