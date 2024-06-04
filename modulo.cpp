#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stack>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<cstring>
#include<cmath>
#define m 1000000007
using namespace std;
int main()
{
    long long a = 1*pow(10,18);
    long long b = 2*pow(10,18);

    int x = (a+b)%m;
    cout<<x<<endl;
    return 0;
}