#include<bits/stdc++.h>
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
    optimize();
    ll n;
    cin>>n;
    while(n--)
    {
        string str;
        cin>>str;
        bool ans=next_permutation(str.begin(),str.end());
        if(ans==1){cout<<str<<endl;}
        else{cout<<"no answer"<<endl;}
    }
    return 0;
}