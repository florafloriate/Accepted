#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    map<int,int> mp;
    for(int i=0; i<n; i++)
    {
        int x; cin>>x;
        mp[x]++;
    }

    int mx=0;
    for(auto i : mp)
    {

        if(mx < i.second)
            mx=i.second;
    }

    cout<<mx<<endl;
}
