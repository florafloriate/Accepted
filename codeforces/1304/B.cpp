#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n,mm;
    cin>>n>>mm;

    deque<string> dq;

    string s;

    for(int i=0; i<n; i++)
    {
        cin>>s;
        dq.push_back(s);
    }

    string f="",m="",l="";

    while(!dq.empty())
    {
        s=dq.front();
        reverse(s.begin(),s.end());

        if(s==dq.front())
        {
            m=s;
            dq.pop_front();
        }
        else
        {
            dq.pop_front();
            for(auto i:dq)
            {
                if(i==s)
                {
                    l=s+l;
                    reverse(s.begin(),s.end());
                    f=f+s;
                    break;
                }
            }
        }
    }

    cout<<f.size()+m.size()+l.size()<<endl;
    cout<<f<<m<<l<<endl;

    return 0;
}
