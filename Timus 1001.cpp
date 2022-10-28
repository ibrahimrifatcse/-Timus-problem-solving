#include"bits/stdc++.h"
using namespace std;
#define v vector
#define ll long long 

int main(){
ll a;
v<ll>arr;

while(cin>>a){
    arr.push_back(a);
}
for(int i=arr.size()-1;i>=0;i--){

    cout<<fixed<<setprecision(4)<<sqrt(arr[i])<<"\n";

}



}
