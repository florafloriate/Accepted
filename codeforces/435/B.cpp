#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    string s;
    cin>>s;
    int k;
    cin>>k;
    for(int i=0; i<s.size(); i++)
    {
        int p=s[i],q=i;
        for(int j=i+1; j<=i+k && j<s.size(); j++)
        {
            if(s[j]>p)
            {
                p=s[j];
                q=j;
            }
        }
        if(p>s[i])
        {
            for(int l=q; l>i; l--)
                swap(s[l],s[l-1]);

            k=k-(q-i);
        }

        if(!k)
            break;
    }
    cout<<s<<endl;
}
