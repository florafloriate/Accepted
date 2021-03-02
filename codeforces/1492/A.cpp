#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll p,a,b,c;
        cin>>p>>a>>b>>c;

        ll da=p/a, fa=p%a, ans;

        if(fa>0)
            da++;

        ans=(da*a)-p;

        ll db=p/b, fb=p%b;

        if(fb>0)
            db++;

        ans=min(ans,(db*b)-p);


        ll dc=p/c, fc=p%c;

        if(fc>0)
            dc++;

        ans=min(ans,(dc*c)-p);

        cout<<ans<<endl;
    }
}
