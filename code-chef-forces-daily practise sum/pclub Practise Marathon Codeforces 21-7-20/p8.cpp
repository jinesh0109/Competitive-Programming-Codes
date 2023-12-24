#include<bits/stdc++.h>
#include<string>
#define ll long long int
using namespace std;
int main()
{
    ll a1,a2,a3,a4,i;
    cin>>a1>>a2>>a3>>a4;
    string str,str1="47",str2="74";
    if((abs(a3-a4))>=2)
    {
        cout<<"-1";
    }
    else if(a3==a4)
    {
        if(a1>=a3+1 && a2>=a3+1)
        {
            str.append(a1-a3-1,'4');
           for(i=0;i<a3;i++)
           {
               str+=str1;
           }
           str.append(a2-a3-1,'7');
           str+=str2;
           cout<<str;
        }
        else if(a1>=a3+1 && a2==a3)
        {
            str.append(a1-a3-1,'4');
            for(i=0;i<a3;i++)
           {
               str+=str1;
           }
           str.append("4");
           cout<<str;
        }
        else if(a2>=a3+1 && a1==a3)
        {
            for(i=0;i<a3;i++)
           {
               str+=str2;
           }
            str.append(a2-a3,'7');
            cout<<str;
        }
        else{
            cout<<"-1";
        }
    }
    else if(a3>a4)
    {
        if(a1>=a3 && a2>=a3)
        {
            str.append(a1-a3,'4');
            for(i=0;i<a3;i++)
           {
               str+=str1;
           }
           str.append(a2-a3,'7');
           cout<<str;
        }
        else{
            cout<<"-1";
        }
    }
    else if(a4>a3){
        if(a1>=a4 && a2>=a4)
        {

            str+=str2;
            str.append(a1-a4,'4');
            for(i=0;i<a4-2;i++)
            {
               str+=str2;
            }
            str.append(a2-a4,'7');
            str+=str2;
           cout<<str;
        }
        else{
            cout<<"-1";
        }
    }

}

