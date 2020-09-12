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
        {
            cin>>a[i];
        }
        int x,y,ok=0;
        for(int i=0; i<=105; i++)
        {
            ok=0;
            for(int p=0; p<n; p++)
            {
                if(a[p]==i)
                {
                    a[p]=-1;
                    ok=1;
                    break;
                }
            }
            if(ok)
            {
                continue;
            }
            else
            {
                x=i;
                break;
            }
        }

        for(int i=0; i<=105; i++)
        {
            ok=0;
            for(int p=0; p<n; p++)
            {
                if(a[p]==i)
                {
                    a[p]=-1;
                    ok=1;
                    break;
                }
            }
            if(ok)
            {
                continue;
            }
            else
            {
                y=i;
                break;
            }
        }

        cout<<x+y<<endl;

    }
}
