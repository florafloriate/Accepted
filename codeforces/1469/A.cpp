#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;

        int n=s.size();
        int p=0,q=0,o=0;

        if(n%2!=0)
        {
            cout<< "NO\n";
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                if(s[i]=='(')
                    p++;
                else if(s[i]==')')
                    p--;
                else if(s[i]=='?')
                    q++;

                if(p<0 && q<abs(p))
                {
                    cout<< "NO\n";
                    o++;
                    break;
                }
            }

            p=0,q=0;

            if(o)
                continue;

            for(int i=n-1; i>0; i--)
            {
                if(s[i]=='(')
                    p--;
                else if(s[i]==')')
                    p++;
                else if(s[i]=='?')
                    q++;

                if(p<0 && q<abs(p))
                {
                    cout<< "NO\n";
                    o++;
                    break;
                }
            }

            if(o==0)
                cout<< "YES\n";
        }



    }

}
