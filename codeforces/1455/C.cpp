#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll x,y;
        cin>>x>>y;

        if(x==y)
        {
            cout<< x-1 << " " <<x<<endl;
        }
        else if(x>y)
        {
            cout<< (x-y)+(y-1) << " " <<y<<endl;
        }
        else if(x<y)
        {
            cout<< x-1 << " " << (y-x)+x <<endl;
        }
    }
}
