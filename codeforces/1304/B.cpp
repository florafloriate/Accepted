#include <bits/stdc++.h>
#define ll long long

using namespace std;
int main()
{
    int n,o;
    cin>>n>>o;
    vector<string> farha;

    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        farha.push_back(s);
    }

    string f="",l="",m="";

    for(int i=0; i<farha.size(); i++)
    {
        for(int j=0; j<farha.size(); j++)
        {
                string d=farha[j];
                reverse(d.begin(),d.end());
                if(farha[i]==d && i!=j)
                {
                    f=f+farha[i];
                    l=farha[j]+l;
                    farha[i]="";
                    farha[j]="";
                }
                else if(farha[j]==d && farha[j]!="")
                {
                    m=farha[j];
                    farha[j]="";
                }
        }
    }

    cout<< f.size()+m.size()+l.size() <<endl;
    cout<< f << m << l <<endl;

    return 0;
}
