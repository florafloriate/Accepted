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
        int k;
        cin>>n>>k;

        for(int i=0; i<k-3; i++)
        {
            cout<<"1 ";
            n--;
        }

        if(n%4==0)
        {
            n=n/2;
            cout<<n<<" "<<n/2<<" "<<n/2<<endl;
        }
        else if(n%2==0)
        {
            n=n-2;
            cout<<"2 "<<n/2<<" "<<n/2<<endl;
        }
        else
        {
            n=n-1;
            cout<<"1 "<<n/2<<" "<<n/2<<endl;
        }

    }
}
