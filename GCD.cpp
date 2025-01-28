#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ll n1,n2; cin>>n1>>n2;
    while(n2!=0)
    {
        ll rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    cout<<n1;
    return 0;
}