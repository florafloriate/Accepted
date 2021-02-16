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
        int a[n+5];
        for(int i=0; i<n; i++)
            cin>>a[i];
        int ans=0;
        for(int i=1; i<n; i++)
        {
            int mx=max(a[i-1],a[i]);
            int mn=min(a[i-1],a[i]);

            while(mn*2<mx)
            {
                mn=mn*2;
                ans++;
            }
        }

        cout<<ans<<endl;


    }
}
