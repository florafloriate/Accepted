#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n ; cin>>n;
        int a[n+5];
        int b[n+5];
        for(int i=0; i<n; i++)
        {
            cin>>a[i]; b[i]=a[i];
        }
        sort(b,b+n);
        int x=0,y=0,z=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]==b[i])
                continue;
            else
            {
                for(int j=i; j<n; j++)
                {
                    if(a[j]==b[i])
                    {
                        x=i; y=j; z++;
                        break;
                    }
                }

                if(z)
                    break;
            }
        }

        reverse(a+x,a+y+1);

        for(int i=0; i<n; i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }
}
