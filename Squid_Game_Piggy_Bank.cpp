#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ll a,b; cin>>a>>b;
    if(a>b){ cout<<(a-b)*10000;}
    else{cout<<(b-1)*10000;}
    return 0;
}