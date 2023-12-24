#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        int i;
        int sum=0,sum1=0,sum2=0,sum3=0,sum4=0,sum5=0;

        int fp=0,f1p=0,f2p=0,f3p=0,f4p=0,f5p=0;
        for(i=0;i<a.size();i++)
        {

            if(a[i]=='A' || a[i]=='B')
            {
                sum++;
            }
            else{
                sum--;
                if(sum<0)
                {
                    fp=1;
                }
            }
            if(a[i]=='A' || a[i]=='C')
            {
                sum1++;
            }
            else{
                sum1--;
                if(sum1<0)
                {
                    f1p=1;
                }
            }
            if(a[i]=='C' || a[i]=='B')
            {
                sum2++;
            }
            else{
                sum2--;
                if(sum2<0)
                {
                    f2p=1;
                }
            }
            if(a[i]=='A')
            {
                sum3++;
            }
            else{
                sum3--;
                if(sum3<0)
                {
                    f3p=1;
                }
            }
            if(a[i]=='B')
            {
                sum4++;
            }
            else{
                sum4--;
                if(sum4<0)
                {
                    f4p=1;
                }
            }
            if(a[i]=='C')
            {
                sum5++;
            }
            else{
                sum5--;
                if(sum5<0)
                {
                    f5p=1;
                }
            }



        }

        if(sum==0)
        {
            if(fp==1)
            {
                //cout<<"NO\n";
                fp=0;
            }

        }
        if(sum1==0)
        {
            if(f1p==1)
            {
              f1p=0;
            }

        }
        if(sum2==0)
        {
            if(f2p==1)
            {
               f2p=0;
            }

        }
        if(sum3==0)
        {
            if(f3p==1 )
            {
                f3p=0;
            }

        }
        if(sum4==0)
        {
            if(f4p==1 )
            {
                f4p=0;
            }
        }
        if(sum5==0)
        {
            if(f5p==1 )
            {
                f5p=0;
            }
        }

        if(fp==1 || f1p==1 ||f2p==1 || f3p==1 || f4p==1 || f5p==1)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}
