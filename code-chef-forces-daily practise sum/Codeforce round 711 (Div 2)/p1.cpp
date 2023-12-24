#include<bits/stdc++.h>
#include<iterator>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll i,j;
        i=0;
        j=s.size()-1;
        int flag=1,flag1=1;
        while(i<=j)
        {
            if(s[i]!='a' || s[j]!='a')
            {
                flag1=0;
            }
            i++;
            j--;

        }
        if(flag1==1)
        {
            cout<<"NO\n";
        }
        else{
            i=0;
            j=s.size()-1;
            while(i<=j)
            {
                if(s[i]!='a')
                {
                    s.insert(s.begin()+j+1,'a');

                    break;
                }
                if(s[j]!='a')
                {
                    s.insert(s.begin()+i,'a');

                    break;
                }


                i++;
                j--;
            }
            cout<<"YES\n";
            cout<<s<<endl;


        }


    }
}
