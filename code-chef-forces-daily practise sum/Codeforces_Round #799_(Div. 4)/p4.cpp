#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;
#define ll long long int
int main()
{
    ll t=1;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll x;
        cin>>x;
        string s1="";
        s1+=s[0];
        s1+=s[1];
        string s2=" ";
        s2+=s[3];
        s2+=s[4];

        int hr=stoi(s1);
        int min2=stoi(s2);
        int final_hr=hr,final_min=min2;
        int cnt=0;
        ll c=0;
        set<string> s11;
        while(true)
        {

            string hr1="",min1="";
            if(hr<10)
            {
                hr1+='0';
                hr1+=to_string(hr);
            }
            else{
                hr1+=to_string(hr);
            }
            if(min2<10)
            {
                min1+='0';
                min1+=to_string(min2);
            }
            else{
                min1+=to_string(min2);
            }


            auto it=s11.find(hr1+min1);
            if(it!=s11.end())
            {

                break;
            }
            s11.insert(hr1+min1);
            if(hr1[0]==min1[1] && hr1[1]==min1[0])
            {
                c++;
            }

            if(min2+x<=59)
            {
                min2+=x;
            }
            else{
                int x1=x;
                x1=x1-(59-min2);
                while(x1>0)
                {
                    hr=(hr+1)%24;
                    cnt+=1;
                    min2=0;
                    if(x1-1>=60)
                    {
                        x1-=60;
                    }
                    else{
                        min2=x1-1;
                        x1=0;
                    }

                }


            }
            //cout<<hr<<" "<<min2<<endl;
        }

        cout<<c<<endl;
    }
}
