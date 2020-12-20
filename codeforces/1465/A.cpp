#include <bits/stdc++.h>
#define ll long long

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,o=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=n-1; i>=0; i--)
        {
            if(s[i]==')')
                o++;
            else
                break;
        }

        if(o> n-o)
            cout<< "Yes\n";
        else
            cout<< "No\n";

    }


}
