#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stack>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<cstring>
using namespace std;
void factor(int n){
    vector<int>arr;
    for(int i = 2;i*i<=n;i++){
        while(n%i==0){
            arr.push_back(i);
            n=n/i;
        }
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"input the number : ";
    cin>>n;
    factor(n);
    return 0;
}