#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    string x,y;
    cin>>x>>y;
    int n=x.size();
    for(int i=0; i<n; i++)
    {
        if(x[i]>='A' && x[i]<='Z')
            x[i]=x[i]- 'A'+ 'a';
        if(y[i]>='A' && y[i]<='Z')
            y[i]=y[i]- 'A'+ 'a';
    }
    int ans=0;
    for(int i=0; i<n; i++)
    {
        if(x[i]<y[i])
        {
            ans=-1;
            break;
        }
        else if(x[i]>y[i])
        {
            ans=1;
            break;
        }
    }
    cout<<ans<<endl;
}
