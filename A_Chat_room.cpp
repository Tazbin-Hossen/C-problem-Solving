#include<bits/stdc++.h>
#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
    optimize();
    string str; cin>>str;
    sort(str.begin(),str.end());
    if(str.find("hello")&&str.length()>=5){cout<<"YES";}
    else{cout<<"NO";}
    return 0;
}