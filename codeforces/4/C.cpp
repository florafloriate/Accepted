#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    map<string,int> mp;
    for(int i=0; i<n; i++)
    {
        string x; cin>>x;
        mp[x]++;

        if(mp[x]==1)
            cout<<"OK"<<endl;
        else
            cout<<x<<mp[x]-1<<endl;
    }
}
