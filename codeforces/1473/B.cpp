#include <bits/stdc++.h>
#define ll long long
using namespace std;

int gcd(int a, int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,t;
        cin>>s>>t;

        int ns=s.size(), nt=t.size();

        int l=lcm(ns,nt);

        string x="",y="";

        for(int i=0; i< l/ns; i++)
        {
            x+=s;

        }

        for(int i=0; i< l/nt; i++)
        {
            y+=t;
        }

        if(x==y)
            cout<<x<<endl;
        else
            cout<< "-1\n";






    }
}
