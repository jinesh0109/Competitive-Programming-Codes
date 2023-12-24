/*Using this algorithm we can sort all the 1's 2's and 0's in O(N) time and O(1) space*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)cin>>arr[i];
    int left=0,right=n-1,mid=0,temp;
    while(mid<=right)
    {
        if(arr[mid]==0)
        {
            temp=arr[left];
            arr[left]=arr[mid];
            arr[mid]=temp;
            left++;
            mid++;
        }
        else if(arr[mid]==2)
        {
            temp=arr[right];
            arr[right]=arr[mid];
            arr[mid]=temp;
            right--;
        }
        else{
            mid++;
        }
    }
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
