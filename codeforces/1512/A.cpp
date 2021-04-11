#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a[n+5];
        int b[n+5];

        for(int i=1; i<=n; i++)
        {
            cin>>a[i]; b[i]=a[i];
        }

        int s;
        sort(b+1,b+n+1);
        if(b[1]!=b[2])
            s=b[1];
        else
            s=b[n];

        for(int i=1; i<=n; i++)
        {
            if(a[i]==s)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
}
