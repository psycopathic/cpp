#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
// int binary_search(int *arr,int n,int key)
// {
//     int l=0,h=n-1,mid=0;
//     while(l<=h)
//     {
//         mid=(l+h)/2;
//         if(arr[mid]==key){
//             //cout<<mid<<endl;
//          return mid;
//         }
//          else if(arr[mid]<key)
//          {
//             l=mid+1;
//          }
//          else
//          {
//             h=mid-1;
//          }
//     }
//     return -1;
// }
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int *x=lower_bound(arr,arr+n,key);
    cout<<*x<<endl;
//     int t;
//     cin>>t;
//     while(t--){
//     int key;
//     cin>>key;
//     int x=binary_search(arr,n,key);
//     cout<<x<<endl;
//     if(x==-1)
//     {
//         int key1=*(lower_bound(arr,arr+n,key));
//         cout<<"NO "<<binary_search(arr,n,key1);
//     }
//     else
//     {
//         cout<<"yes "<<x<<endl;
//     }
// }
    return 0;
}