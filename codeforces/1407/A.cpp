#include<bits/stdc++.h>
#define ll long long
#define fr0(n) for(int i=0; i<n; i++)
#define fr1(n) for(int i=1; i<=n; i++)
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+5];
        fr0(n)
        cin>>a[i];
        int one=0, zero=0, m;

        fr0(n)
        {
            if(a[i]==1)
                one++;
            else
                zero++;
        }

        if(one>zero)
        {
            if(one%2==0)
                m=one;
            else
                m=one-1;

            cout<< m <<endl;
            fr0(m-1)
            cout<< "1 ";
            cout<< "1\n";
        }
        else if(zero>=one)
        {
            cout<< zero <<endl;
            fr0(zero-1)
            cout<< "0 ";
            cout<< "0\n";
        }
    }
}










