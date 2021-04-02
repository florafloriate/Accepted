#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,x,y;
        cin>>a>>b>>x>>y;

        int mx=a*y;
        mx=max(mx,a*(b-y-1));
        mx=max(mx,b*x);
        mx=max(mx,b*(a-x-1));

        cout<<mx<<endl;
    }

    return 0;
}
