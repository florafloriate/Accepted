#include<bits/stdc++.h>
#define ll long long
#define freopenin freopen("input.txt","r",stdin);
#define freopenout freopen("output.txt","w",stdout);

using namespace std;

int main()
{
    int x;
    cin>>x;

    int r=x%4,a;
    char b;

    if(r==0)
    {
        a=1; b='A';
    }
    else if(r==1)
    {
        a=0; b='A';
    }
    else if(r==2)
    {
        a=1; b='B';
    }
    else if(r==3)
    {
        a=2; b='A';
    }
    cout<<a<<" "<<b<<endl;
}


