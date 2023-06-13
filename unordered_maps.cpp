#include<bits/stdc++.h>
using namespace std;
#define King() ios_base::sync_with_stdio(NULL);cin.tie(NULL);cout.tie(NULL);
#define ll long long

int main(){
    unordered_map<int, string>m;
    // int n; cin>>n;

    m.insert({1, "hello"});
    m[2]="hi";

    for(auto &l : m){
        cout<<l.first<<" "<<l.second<<" ";
    }

}