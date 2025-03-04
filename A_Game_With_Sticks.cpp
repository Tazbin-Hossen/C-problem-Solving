#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ll a,b; cin>>a>>b;
    if((a*b<=9))
    {
        if((a*b)%2==0){cout<<"Malvika";}
        else{cout<<"Akshat";}
    }
    return 0;
}