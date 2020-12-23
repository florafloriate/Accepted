#include <bits/stdc++.h>
#define ll long long

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll x,y,a,b;
        cin>>x>>y>>a>>b;

        if((y-x)%(a+b)==0)
            cout<< (y-x)/(a+b) <<endl;
        else
            cout<< "-1\n";
    }

    return 0;
}
