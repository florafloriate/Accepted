#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        long long p=n*k;
        long long a[p+5];
        for(int i=0; i<p; i++)
            cin>>a[i];
        long long sum=0;
        if(n%2==0)
        {
            for(int i=(((n/2)-1)*k); i<p; i=i+((n/2)+1))
            {
                //cout<<a[i]<<endl;
                sum+=a[i];
            }
        }
        else
        {
            n++;
            for(int i=(((n/2)-1)*k); i<p; i=i+(n/2))
            {
                //cout<<a[i]<<endl;
                sum+=a[i];
            }
        }

        cout<<sum<<endl;

    }
}
