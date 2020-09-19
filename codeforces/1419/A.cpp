#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int odd=0;
        int even=0;
        for(int i=0; i<n; i++)
        {
            if(i%2==0)
            {
                if(s[i]%2)
                    odd++;
            }
            else if(i%2)
            {
                if(s[i]%2==0)
                    even++;
            }
        }
        if(n%2)
        {
            if(odd>0)
                cout<< "1\n";
            else
                cout<< "2\n";
        }
        else
        {
            if(even>0)
                cout<< "2\n";
            else
                cout<< "1\n";
        }
    }
}
