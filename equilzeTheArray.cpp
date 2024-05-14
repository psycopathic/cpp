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
int equalizeArray(vector<int> arr) {
    vector<int>repeat;
    int count = 0;
    pair<int,int>res;
    sort(arr.begin(),arr.end());
    
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        repeat.push_back(count);
        count = 0;
    }
    
    int high = *max_element(repeat.begin(),repeat.end());
    
    return (arr.size() - high);
}


int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int res = equalizeArray(arr);

    cout<<res-1<<endl;
    return 0;
}