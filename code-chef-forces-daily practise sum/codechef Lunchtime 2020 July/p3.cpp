#include<bits/stdc++.h>
#define ll long long int
#include<sstream>
#include<iostream>
#include<string>
using namespace std;
ll a,b,n1;
string s;
ll binaryToDecimal(ll n1)
{
    ll num = n1;
    ll dec_value = 0;

    // Initializing base value to 1, i.e 2^0
    ll base = 1;

    ll temp = num;
    while (temp) {
        ll last_digit = temp % 10;
        temp = temp / 10;

        dec_value += last_digit * base;

        base = base * 2;
    }

    return dec_value;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,i,j;
        cin>>n;
        ll arr[n],arr1[5000],max=0,min=2e32;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        for(i=0;i<n;i++)
        {
            while(arr[i]>0)
            {
                ll z=arr[i]%2;
                s.append("z");
                arr[i]=arr[i]/2;
            }
            stringstream geek(s);


            ll x = 0;
            geek >> x;
            cout<<x<<endl;
            if(x>max)
                max=x;
            if(x<min)
                min=x;
        }
            ostringstream str1,str2;
             str1 << max;
             str2<<min;

    // the str() coverts number into string
    string geek2 = str1.str();
    string geek3 = str2.str();
    string g4=geek2+geek3,g5=geek3+geek2;
         stringstream geek6(g4);
         stringstream geek7(g5);
         ll x5 = 0;
            geek6 >> x5;
        ll x6 = 0;
            geek7 >> x6;
         binaryToDecimal(x5);
         binaryToDecimal(x6);
         cout<<x5-x6<<endl;

    }
}
