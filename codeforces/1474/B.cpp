#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll d;
        cin>>d;

        int a=1+d;

        for(int i=2; i<a; i++)
        {
            if(a%i==0)
            {
                a++;
                i=2;
            }
        }

        int b=a+d;
        for(int i=2; i<b; i++)
        {
            if(b%i==0)
            {
                b++;
                i=2;
            }
        }

        //cout<<a<< " " << b <<endl;
        cout<< a*b <<endl;
    }
}
