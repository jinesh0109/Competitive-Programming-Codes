#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int i,n=s.size();
        int m=0;
        int arr[26]={0};
        for(i=0;i<n;i++)
        {
            if(arr[s[i]-'a']==0)
            {
                arr[s[i]-'a']=1;
            }
            else{
                m+=2;
                for(int j=0;j<26;j++)
                {
                    arr[j]=0;
                }
            }
        }
        cout<<n-m<<endl;
    }
}
