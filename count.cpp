#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stack>
#include<map>
#include<unordered_map>
#include<unordered_set>
using namespace std;
int main()
{
    vector<int>arr{1,2,3,4,5,5,5,5};
    auto a = count(arr.begin(),arr.end(),5);
    cout<<a<<endl;
    return 0;
}