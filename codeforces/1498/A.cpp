#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,v,sum=0;
        cin>>n;
        v=n;
        while(1)
        {
            sum=0;
            while(v>0)
            {
                sum=sum+(v%10);
                v=v/10;
            }
            v=__gcd(n,sum);
            //cout<<v<<" "<<sum<<endl;
            if(v>1)
            {
                cout<<n<<endl;
                break;
            }
            else
            {
                n++;
                v=n;
            }
        }

    }

    return 0;
}
