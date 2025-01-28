#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ll n; cin>>n;
    ll power=1,binary=0,temp,sum=0;
    if(n%2==0){cout<<"NO";}
    else{
        while(n>0)
        {
            ll r=n%2;
            n/=2;
            binary+=(r*power);
            power=power*10;  
        }
        temp=binary;
        while(binary>0)
        {
            ll rem=binary%10;
            sum=(sum*10)+rem;
            binary/=10;
        }
        if(sum==temp){cout<<"YES";}
        else{cout<<"NO";}
    }
    return 0;
}