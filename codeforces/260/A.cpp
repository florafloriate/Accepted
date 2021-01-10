#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
        int a,b,n;
        cin>>a>>b>>n;

        int ok=0,p=a;



            for(int j=0; j<=9; j++)
            {
                if( ((a*10)+j)%b==0 )
                {
                    a=(a*10)+j;
                    break;
                }
                if(j==9 && a%b!=0)
                    ok=-1;
            }


        if(ok==-1)
            cout<<ok<<endl;
        else
        {
            cout<<a;
            for(int i=1; i<n; i++)
                cout<< "0";

            cout<<endl;
        }

}
