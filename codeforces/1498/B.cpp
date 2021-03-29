#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,w,ww,ans=0;
        cin>>n>>w;
        int a[n+5];
        for(int i=0; i<n; i++)
            cin>>a[i];

        sort(a,a+n);
        reverse(a,a+n);

        multiset<int> ms;
        multiset<int>:: iterator it;

        for(int i=0; i<n; i++)
        {
            it=ms.lower_bound(a[i]);
            if(it!=ms.end())
            {
                ww=*it;
                ms.erase(it);
                if(ww-a[i]>0)
                    ms.insert(ww-a[i]);
            }
            else
            {
                ans++;
                if(w-a[i]>0)
                    ms.insert(w-a[i]);
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
