#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;
int digit(int n)
{   
    int count=0;
    while(n>0)
    {
       n=n/10;
       count++;
    }
    return count;
}
int main()
{
   int n;
   cin>>n;
   int x=digit(n);
   int arr[x],k=0;
   while(n>0)
   {
     arr[k++]=n%10;
     n=n/10;
   }
    reverse(arr,arr+k);
//    for(int i=0;i<k;i++)
//    {
//     cout<<arr[i]<<" ";
//    }
   swap(arr[0],arr[k-1]);
   cout<<endl;
//    for(int i=0;i<k;i++)
//    {
//     cout<<arr[i]<<" ";
//    }
   int j=0;
   int num=0;
   for(int i=pow(10,x-1);i>0;i=i/10)
   {
     num+=arr[j++]*i;
   }
   cout<<endl;
   cout<<"number is "<<num<<endl;
    return 0;
}