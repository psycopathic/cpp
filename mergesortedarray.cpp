#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,i,j,k;
    cin>>n;
    int m;
    cin>>m;
    int arr1[n],arr2[m];
    for( i=0;i<n;i++){
        cin>>arr1[i];
    }
    for( j=0;j<m;j++){
        cin>>arr2[j];
    }
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
    k=0;
    int arr3[k];
    i=0,j=0;
        while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];
        }
        else {
            arr3[k++]=arr2[j++];
        }
    }
     while(i<n){
     arr3[k++]=arr1[i++];
     }
      while(j<m){
      arr3[k++]=arr2[j++];
      }
     for(i=0;i<k;i++){
        cout<<arr3[i]<<" ";
     }
    return 0;
}
