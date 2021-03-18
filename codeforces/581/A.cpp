#include<bits/stdc++.h>
#define ll long long
#define freopenin freopen("input.txt","r",stdin);
#define freopenout freopen("output.txt","w",stdout);

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<min(a,b)<<" "<<((a+b)/2)-min(a,b)<<endl;
}


