#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int calculation(int n,int sum)
    {
        if(n==0){return;};
        if(n%2!=0)
        {
            sum+=(-n);
            calculation(n-1);
        }
        else
        {
            sum+=(n);
            calculation(n-1);
        }
        
    }
int main(){
    ll n; cin>>n;
    ll sum=0;
    calculation(n,sum);
    cout<<sum;
    return 0;
}