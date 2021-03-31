#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[5],ans=0;
        cin>>a[0]>>a[1]>>a[2];

        sort(a,a+3);

        if(a[0]>=4){
            cout<<"7"<<endl;
            continue;
        }

        if(a[0]>0){
            a[0]--; ans++;
        }
        if(a[1]>0){
            a[1]--; ans++;
        }
        if(a[2]>0){
            a[2]--; ans++;
        }

        int x=0,y=0,z=0;

        sort(a,a+3);

        for(int i=0; i<=2; i++)
        {
            if(a[i]==0)
                x++;
            else if(a[i]==1)
                y++;
            else
                z++;
        }

        if(x==1||y==3){
            ans++;
        }
        if((y==2&&z==1)||(y==1&&z==2)){
            ans+=2;
        }
        if(z==3){
            ans+=3;
        }

        cout<<ans<<endl;
    }
    return 0;
}
