#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int arr[3],arr1[3],i;
    int c=0,c1=0;
    for(i=0;i<3;i++)cin>>arr[i];
    for(i=0;i<3;i++)cin>>arr1[i];
    for(i=0;i<3;i++)
    {
        if(arr[i]>arr1[i])
            c++;
        else if(arr[i]<arr1[i])
            c1++;
    }
    cout<<c<<" "<<c1<<endl;

}
