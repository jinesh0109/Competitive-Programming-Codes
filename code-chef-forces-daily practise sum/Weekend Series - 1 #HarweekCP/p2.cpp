#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    long long int arr[27],i,index[27];
    for(i=1;i<27;i++)
    {
        arr[i]=0;
        index[i]=0;
    }
    long long int c;
    for(i=0;i<s.size();i++)
    {
       c=s[i]-96;
       if(arr[c]==0)
       {
           arr[c]=i+1;
           index[c]=i+1;
       }
       else{
            if((i+1)-index[c]>=arr[c])
            {

                arr[c]=(i+1)-index[c];
                index[c]=i+1;
            }
            else{
                index[c]=i+1;
            }
       }
    }
    long long int temp;
    for(i=1;i<27;i++)
    {
        temp=s.size()-index[i]+1;
        arr[i]=max(temp,arr[i]);
    }
    long long int min1=1000000;
    for(i=1;i<27;i++)
    {
        min1=min(arr[i],min1);
    }
    cout<<min1<<endl;
}
