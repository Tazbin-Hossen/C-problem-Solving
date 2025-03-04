#include<bits/stdc++.h>
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
    optimize();
    ll a,b; cin>>a>>b;
    if((a+(10*b))>=100){cout<<"Yes";}
    else{cout<<"No";}
    return 0;
}