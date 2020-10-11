#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        if(n==1 || n==2 || n==4)
            cout<< "-1\n";
        else if(n==5)
            cout<< "0 1 0\n";
        else if(n==7)
            cout<< "0 0 1\n";
        else if(n%3==0)
            cout<< n/3 << " 0 0\n";
        else if(n%3==1)
            cout<< (n/3)-2 << " 0 1\n";
        else
            cout<< (n/3)-1 << " 1 0\n";
    }
}
