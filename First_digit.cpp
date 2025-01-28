#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ll n; cin>>n;
    string str= to_string(n);
    if(str[0]%2==0){cout<<"EVEN";}
    else{cout<<"ODD";}

    return 0;
}