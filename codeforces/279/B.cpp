#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;
    int a[n+5];
    for(int i=0; i<n; i++)
        cin>> a[i];
    int sum=0,cnt=0,mx=INT_MIN,l=0;
    for(int i=0; i<n; i++)
    {
        sum+=a[i];
        cnt++;
        while(sum>t)
        {
            cnt--;
            sum-=a[l];
            l++;
        }
        mx=max(mx,cnt);
    }
    cout<<mx<<endl;
}
