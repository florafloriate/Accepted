#include <bits/stdc++.h>
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

        int d=n-k;

        int p[k+5];

        for(int i=1; i<=k; i++)
            p[i]=i;

        int q=k;
        for(int i=k-d; i<=k; i++)
        {
            p[i]=q;
            q--;
        }

        for(int i=1; i<k; i++)
            cout<<p[i]<<" ";
        cout<<p[k]<<endl;
    }
}
