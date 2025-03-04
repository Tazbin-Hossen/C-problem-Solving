#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ll a,b,c;
    ll aa=pow(a,2),bb=pow(b,2),cc=pow(c,2);
    ll power=aa+bb;
    if(power==cc){cout<<"Yes";}
    else{cout<<"No";}
    return 0;
}