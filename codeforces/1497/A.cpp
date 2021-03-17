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
        set<int> s;
        set<int>::iterator it;
        vector<int> v;

        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            it=s.find(x);
            if(it==s.end())
                s.insert(x);
            else
                v.push_back(x);
        }

        for(auto i : s)
            cout<<i<<" ";
        for(int i=0; i<v.size(); i++)
            cout<<v[i]<<" ";
        cout<<endl;
    }
}

/*

*/
