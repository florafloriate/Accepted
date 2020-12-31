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
        int eva[55], a[n+5], ans=0;

        memset(eva, 0, sizeof(eva));

        for(int i=0; i<n; i++)
            cin>>a[i];

        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                eva[a[j]-a[i]]=1;
            }
        }

        for(int i=0; i<55; i++)
        {
            if(eva[i]==1)
                ans++;
        }

        cout<<ans<<endl;
    }
}
