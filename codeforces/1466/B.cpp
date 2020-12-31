#include <bits/stdc++.h>
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
        int eva[n+5];
        for(int i=0; i<n; i++)
            cin>>eva[i];
        set<int>s;
        for(int i=0; i<n; i++)
        {
            if(s.count(eva[i]))
                eva[i]++;
            s.insert(eva[i]);
        }
        cout<<s.size()<<endl;
    }
}
