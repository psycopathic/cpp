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
  cout<<arr[0]+arr[k-1]<<endl;
    return 0;
}