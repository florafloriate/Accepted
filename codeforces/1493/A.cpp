#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> v;

        for(int i=1; i<=n; i++)
        {
            if(i>k)
                v.push_back(i);
            else if(i>=k-(k/2) && i<k)
                v.push_back(i);
        }

        cout<<v.size()<<endl;
        for(auto x:v)
            cout<<x<<" ";
        cout<<endl;
    }
}
