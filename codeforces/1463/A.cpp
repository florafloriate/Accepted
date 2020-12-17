#include <bits/stdc++.h>
#define ll long long

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        ll mn=min(a,min(b,c));

        ll d=(a+b+c)/9;

        ll p=a+b+c;

        if(mn>=d && (a+b+c)%9==0)
            cout<< "YES\n";
        else
            cout<< "NO\n";
    }
}
