#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll k,i;
        cin>>k;
        string s;
        cin>>s;
        int f=1;
        string s1="";
        ll c3=0,c2=0,c5=0,c7=0,c8=0;
        if(k==1)
        {
            cout<<"1\n";
            cout<<s<<endl;

            continue;
        }
        int f1=1;
        for(i=0;i<k;i++)
        {
            if(s[i]=='1' ||  s[i]=='4' || s[i]=='6' || s[i]=='8' || s[i]=='9')
            {
                cout<<"1\n";

                cout<<s[i]<<endl;
                f=0;

                break;
            }
            if(i!=0)
            {
                if(f1==1)
                {
                    if(s[i]=='2' || s[i]=='5')
                    {

                        s1+=s[i-1];
                        s1+=s[i];
                        //cout<<s1<<endl;
                        f1=0;
                    }
                }

                if(s[i]=='7')
                {
                    f1=0;

                }
            }
            if(s[i]=='2')
            {
                c2++;
            }
            if(s[i]=='5')
            {
                c5++;
            }
            if(s[i]=='7')
            {
                c7++;
            }
            if(s[i]=='8')
            {
                c8++;
            }
            if(s[i]=='3')
            {
                c3++;
            }
        }
        if(f==1)
        {
            if(s1.size()>=1)
            {
                cout<<s1.size()<<endl;
                cout<<s1<<endl;
            }
            else if(c3>=2)
            {
                cout<<"2\n";
                cout<<"33\n";
            }
            else if(c7==2)
            {
                cout<<"2\n";
                cout<<"77\n";
            }
            else if(c7>=1)
            {
                if(c2>=1)
                {
                    cout<<"2\n";
                    cout<<"27\n";
                }
                else if(c5>=1)
                {
                    cout<<"2\n";
                    cout<<"57\n";
                }
                else if(c8>=1)
                {
                    cout<<"2\n";
                    cout<<"87\n";
                }
            }
            else{
                cout<<s.size()<<endl;
                cout<<s<<endl;
            }
        }

    }
}
