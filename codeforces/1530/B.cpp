#include<bits/stdc++.h>
#define mod              1000000007
#define INF              1e9
#define pi               acos(-1)
#define ll               long long
#define endl             "\n"
#define mem(name,value)  memset(name, value, sizeof(name))
#define decimal(x)       fixed<<setprecision(x)
#define fastio           ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

int main()
{
    fastio;
    int t; cin>>t;
    while(t--)
    {
        ll hh,ww; cin>>hh>>ww;

        int a[hh+5][ww+5];

        for(int i=1; i<=hh; i++)
        {
        	for(int j=1; j<=ww; j++)
        	{
        		a[i][j]=0;
        	}
        }

        if(ww>hh)
        {
            for(int w=1; w<=ww; w++)
                a[1][w]= ((w%2==1) ? 1:0);
            for(int w=1; w<=ww; w++)
                a[hh][w]= ((w%2==1) ? 1:0);

            if(hh-4>0)
            {
                for(int h=3; h<=hh-2; h++)
                    a[h][1]= ((h%2==1) ? 1:0);
                for(int h=3; h<=hh-2; h++)
                    a[h][ww]= ((h%2==1) ? 1:0);
            }
        }
        else
        {
            for(int h=1; h<=hh; h++)
                a[h][1]= ((h%2==1) ? 1:0);
            for(int h=1; h<=hh; h++)
                a[h][ww]= ((h%2==1) ? 1:0);

            if(ww-4>0)
            {
                for(int w=3; w<=ww-2; w++)
                    a[1][w]= ((w%2==1) ? 1:0);
                for(int w=3; w<=ww-2; w++)
                    a[hh][w]= ((w%2==1) ? 1:0);
            }


        }

        for(int i=1; i<=hh; i++)
        {
        	for(int j=1; j<=ww; j++)
        	{
        		cout<<a[i][j];
        	}
        	cout<<endl;
        }
        cout<<endl;

    }
}
