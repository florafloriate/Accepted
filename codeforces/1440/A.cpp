#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c0,c1,h;
        cin>>n>>c0>>c1>>h;
        string s;
        cin>>s;
        int z=0, o=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='0')
                z++;
            else
                o++;
        }
        //cout<<z<< " " <<o<<endl;

        int a,b,c;
        a=(h*z)+(n*c1);
        b=(h*o)+(n*c0);
        c=(z*c0)+(o*c1);

        int mx=min(a,b);
        mx=min(mx,c);

        cout<<mx<<endl;

    }
}
