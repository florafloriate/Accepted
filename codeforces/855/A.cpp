#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    set<string> s;
    for(int i=0; i<n; i++)
    {
        string x; cin>>x;
        if(s.find(x)!=s.end())
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
            s.insert(x);
        }
    }
}
