#include<bits/stdc++.h>
#define ll long long int

#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char str[300000];
        ll i,cs=0,cp=0,cr=0;
        cin>>str;

        for(i=0;i<strlen(str);i++)
        {
            if(str[i]=='R')
                cr++;
            else if(str[i]=='P')
                cp++;
            else
                cs++;
        }
        char s;
        if(cr>=cp && cr>=cs)
        {
            s='P';
        }
        else if(cs>=cp)
        {
            s='R';
        }
        else{
            s='S';
        }
        for(i=0;i<strlen(str);i++)
        {
            cout<<s;
        }
        cout<<"\n";
    }
}
