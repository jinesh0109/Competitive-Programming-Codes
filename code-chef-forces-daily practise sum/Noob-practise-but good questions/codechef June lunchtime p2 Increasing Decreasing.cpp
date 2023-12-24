#include <iostream>
#include<map>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,i,max1=0;
        cin>>n;
        long long int arr[n];

        map<long long int ,long long int>m;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];

            if(arr[i]>max1)
                max1=arr[i];
            m[arr[i]]++;
        }
        int c;
        map<long long int,long long int>::iterator it=m.begin();
        if(m[max1]>1)
        {
            cout<<"NO\n";
            continue;
        }
        else
        {
            c=1;

            while(it!=m.end())
            {
                if(it->second>2)
                {
                    cout<<"NO\n";
                    c=0;
                  break;
                }
                it++;
            }

        }
        long long int e=n-1,arr1[n],f=0;
        if(c==1)
        {
            i=0;
            cout<<"YES\n";
            sort(arr,arr+n);
            while(i<n)
            {
                if(arr[i]==arr[i+1])
                {
                    arr1[f]=arr[i];
                    arr1[e]=arr[i+1];
                    f++,e--;
                    i+=2;
                }
                else{
                    arr1[f]=arr[i];
                    f++;
                    i++;
                }
            }
            for(i=0;i<n;i++)
            {
                cout<<arr1[i]<<" ";
            }
            cout<<"\n";
        }

    }
    return 0;
}
