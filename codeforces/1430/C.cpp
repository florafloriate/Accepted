#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;

        cout<< "2\n";

        if(n==2)
        {
            cout<< "2 1\n";
            continue;
        }


        cout<< n << " " << n-2 <<endl;



        ll m=(n+n-2)/2;
        n=n-1;

        int p=1;
        while(n>0)
        {
            cout<< m << " " << n <<endl;
            m=(m+n)/2;

            if(p==1)
            {
                n=n-2;
                p=0;
            }
            else
                n=n-1;
        }
    }
}
