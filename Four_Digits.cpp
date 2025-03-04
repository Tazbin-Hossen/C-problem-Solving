#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ll a; cin>>a;
    if(a>0&&a<10){cout<<"000"<<a;}
    else if (a==0){cout<<"0000";}
    else if(a>=10&&a<=99){cout<<"00"<<a;}
    else if(a>=100&&a<=999){cout<<"0"<<a;}
    else{cout<<a;}
    return 0;
}