#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        stack<int> s;
        vector<int> ans;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            s.push(x);
        }

        int ok[n+5];
        memset(ok,0,sizeof(ok));

        stack<int> r;
        int v=n;

        while(!s.empty())
        {
            while(s.top()!=v)
            {
                r.push(s.top());
                ok[s.top()]=1;
                s.pop();
            }

            r.push(s.top());
            ok[s.top()]=1;
            s.pop();

            while(!r.empty())
            {
                ans.push_back(r.top());
                r.pop();
            }


            while(ok[v]!=0 && v>0)
                v--;
        }

        for(auto a: ans)
            cout<<a<<" ";
        cout<<endl;

    }











}
