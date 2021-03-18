#include<bits/stdc++.h>
#define ll long long
#define freopenin freopen("input.txt","r",stdin);
#define freopenout freopen("output.txt","w",stdout);

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<<a<<" ";
        if(a!=c)
            cout<<c<<endl;
        else
            cout<<d<<endl;
    }
}


