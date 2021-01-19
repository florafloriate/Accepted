#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        ll a,b,n,m;
        cin>>a>>b>>n>>m;
 
        if(a+b>=n+m && m<=min(a,b)) cout<< "YES\n";
        else cout<< "NO\n";
    }
}