#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    long long int a=0,b=0,i;
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='0')
        {
            a++;
        }
        else{
            b++;
        }
    }
    cout<<min(a,b);
}
