#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    string str; cin>>str;
    set<char>st;
    for(ll i=0;i<str.length();i++)
    {
        st.insert(str[i]);
    }
    if(st.size()%2!=0){cout<<"IGNORE HIM!";}
    else{cout<<"CHAT WITH HER!";}
   


    return 0;
}