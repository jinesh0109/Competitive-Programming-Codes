#include<bits/stdc++.h>
using namespace std;
int n;
int fibonacci(int n,int arr[])
{
    if(n<=1)return n;
    if(arr[n]!=-1)return arr[n];
    arr[n]= fibonacci(n-1,arr)+fibonacci(n-2,arr);
    return arr[n];
}
int main()
{

   cin>>n;
   int i,arr[n+1];
   for(i=0;i<n+1;i++)arr[i]=-1;
   long long int ans=fibonacci(n,arr);
   cout<<ans;
}
