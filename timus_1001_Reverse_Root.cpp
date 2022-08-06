//Memory limit exceeded 
#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main()
{
    vector<long long >v;
    long long a;
    while(a!=EOF){
        v.push_back(a);
    }
    for(int i=v.size()-1;i>=0;i--)
    {
        cout<<sqrt((v[i]));
    }
    return 0;
}
