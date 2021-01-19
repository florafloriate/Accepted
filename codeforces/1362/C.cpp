#include<bits/stdc++.h>
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

        ll sum=0,i=1;
        while(1)
        {
            if(n%2==0)
            {
                n=n/2;
                sum=sum+(n*i);
                i++;
            }
            else
            {
                n=n/2;
                sum=sum+( (n+1) *i);
                i++;
            }
            if(n==0)
                break;
        }
        cout<<sum<<endl;
    }
}