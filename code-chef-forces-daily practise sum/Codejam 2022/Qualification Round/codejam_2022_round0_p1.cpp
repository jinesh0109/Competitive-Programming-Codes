#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++)
    {
        int r,c,i,j;
        cin>>r>>c;
        cout<<"Case #"<<tt<<":\n";
        cout<<"..";
        for(i=0;i<c-1;i++)
        {
            cout<<"+-";
        }
        cout<<"+\n";
        cout<<"..";
        for(i=0;i<c-1;i++)
        {
            cout<<"|.";
        }
        cout<<"|\n";
        for(i=0;i<r-1;i++)
        {
            for(j=0;j<c;j++)
            {
                cout<<"+-";
            }
            cout<<"+\n";
            for(j=0;j<c;j++)
            {
                cout<<"|.";
            }
            cout<<"|\n";
        }
        for(j=0;j<c;j++)
        {
            cout<<"+-";
        }
        cout<<"+\n";


    }
}
