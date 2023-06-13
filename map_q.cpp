#include<bits/stdc++.h>
using namespace std;
#define King() ios_base::sync_with_stdio(NULL);cin.tie(NULL);cout.tie(NULL);
#define ll long long

int main(){
    King()
    map<string, int>m;
    int n; cin>>n;
    for(int i=0; i<n; i++){
        string s;cin>>s;
        m[s]++;
    }
    cout<<endl;
    for(auto &l : m)cout<<l.first<<" "<<l.second<<endl;

}