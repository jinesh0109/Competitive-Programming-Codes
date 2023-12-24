#include<bits/stdc++.h>
#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
    int t;
    char c;
    cin>>t;
    while(t--)
    {

        string s,s1="";

        getline(cin,s);
        if(s.length()<1)
        {
            getline(cin,s);
        }


        cout<<s<<endl;
        cout<<"First part length "<<s.length()<<endl;
        int i;
        if(s.length()==1)
        {
            cout<<s<<"ay"<<endl;
            continue;
        }
        for(i=0;i<s.length();i++)
        {
            if(i==0 )
            {
                    if(s[i+1]-32!=0)
                    {
                        s[i]=s[i]+32;
                        s1+=s[i];

                        s.erase(s.begin()+i);
                    }

                    s1+="ay";



            }
            else if(i!=s.length()-1)
            {


               if(s[i]-32==0)
               {
                   s.insert(i,s1);
                   s1.erase();
                   cout<<i<<" NO way always\n";
                   cout<<"string length "<<s.length()<<endl;

               }
               else if(s[i-1]-32==0)
               {
                   s1+=s[i];
                   s1+="ay";
                   s.erase(s.begin()+i);
                   cout<<i<<" NO way \n";
                   cout<<"string length "<<s.length()<<endl;
               }
            }
            else if(i==s.length()-1)
            {
                cout<<"YO\n";
                if(s[i-1]-32==0)
                {
                    s.append("ay");
                }
                else if(s[i-1]-32!=0){
                        cout<<"Here\n";
                    s.append(s1);
                   s1.erase();
                }

            }


        }
        s[0]=s[0]-32;
        cout<<"Final "<<s.length()<<endl;
        cout<<s<<endl;
    }
}
