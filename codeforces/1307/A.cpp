#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,d,mn,j=1;
        cin>>n>>d;
        int a[n+5];

        for(int i=0; i<n; i++)
            cin>>a[i];

        for(int i=1; i<n; i++)
        {
            a[i]*=j;
            if(a[i]<=d)
            {
                d-=a[i];
                a[0]+=(a[i]/j);
            }
            else
            {
                a[0]+=(d/j);
                break;
            }
            j++;
        }
        cout<<a[0]<<endl;
    }

    return 0;
}
