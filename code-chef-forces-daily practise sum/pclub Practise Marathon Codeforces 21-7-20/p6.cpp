#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    string f,m,s;
    cin>>f>>m>>s;
    if(f==m && f==s)
    {
        cout<<"?";
    }
    else if(((f==m && f=="rock") && s=="paper")||((f==m && f=="scissors")&& s=="rock"))
    {

        cout<<"S";
    }
    else if((f==m && f=="paper") && s=="scissors")
    {
        cout<<"S";
    }
    else if(((m==s && m=="rock") && f=="paper")||((s==m && m=="paper")&& f=="scissors")||((s==m && m=="scissors")&& f=="rock"))
    {
        cout<<"F";
    }
    else if(((f==s && f=="rock") && m=="paper")||((f==s && f=="paper")&& m=="scissors")||((f==s && f=="scissors")&& m=="rock"))
    {
        cout<<"M";
    }
    else if(((f==m && f=="rock") && s=="scissors")||((f==m && f=="paper")&& s=="rock")||((f==m && f=="scissors")&& s=="paper"))
    {
        cout<<"?";
    }
    else if(((s==m && m=="rock") && f=="scissors")||((s==m && m=="paper")&& f=="rock")||((s==m && m=="scissors")&& f=="paper"))
    {
        cout<<"?";
    }
    else if(((s==f && f=="rock") && m=="scissors")||((s==f && f=="paper")&& m=="rock")||((s==f && f=="scissors")&& m=="paper"))
    {
        cout<<"?";
    }
    else{
        cout<<"?";
    }
}
