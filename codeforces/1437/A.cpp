#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll l,r;
        cin>>l>>r;

        if(r/2<l)
            cout<< "YES" <<endl;
        else
            cout<< "NO" <<endl;
    }
}
