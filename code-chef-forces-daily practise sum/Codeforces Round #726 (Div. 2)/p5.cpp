#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k,i,j,l;
    cin>>n>>k;
    string s;
    cin>>s;
    string s1=s;
    string ans1;
    ans1+=s[0];
    int temp=s[0]-97,ind,flag=1;
    for(i=1;i<n;i++)
    {
        int a=s[i]-97;
        if(i==n-1)
        {
            if(temp==a)
            {
                ind=i-1;
                flag=0;
                break;
            }
        }
        if(temp<a)
        {
            ind=i-1;
            flag=0;
            break;
        }
        else if(temp==a)
        {
            //ans1+=s[i];

            int c=1,flag1=1;
            for(j=i+1;j<n;j++)
            {
                if(s[j]-97==temp)
                {
                    break;
                }


                if(c<i)
                {
                    if(s[c]-97<s[j]-97)
                    {
                //      ans1+=s[c];
                        ind=i-1;
                        flag1=0;
                        break;
                    }
                    else if(s[c]-97==s[j]-97)
                    {
                        c++;
                    }
                    else{
                        break;
                    }
                }
                else{
                    break;
                }

            }
            if(flag1==0)
            {
                flag=0;
                break;
            }
            else{
                ans1+=s[i];
            }
        }
        else{
            ans1+=s[i];
        }
    }
    int ans;
    if(flag==1)
    {
        ind=n-1;
    }
    ans=k/(ind+1);
    //cout<<" index "<<ind+1<<endl;
    //cout<<ans<<endl;
    string ans2=ans1;
    for(i=0;i<ans;i++)
    {
        ans1+=ans2;
    }
    //cout<<ans1.size()<<endl;
    for(i=0;i<k;i++)
    {
        cout<<ans1[i];
    }
    cout<<"\n";

}
