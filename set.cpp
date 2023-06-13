#include<bits/stdc++.h>
using namespace std;
#define King() ios_base::sync_with_stdio(NULL);cin.tie(NULL);cout.tie(NULL);
#define ll long long

int main(){
    set<string>s;
    int n; cin>>n;
    for(int i=0; i<n; i++){
        string ss; cin>>ss;
        s.insert(ss);
    }
    for(auto l:s){
        cout<<l<<endl;
    }

}