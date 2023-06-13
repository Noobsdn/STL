#include<bits/stdc++.h>
using namespace std;
#define King() ios_base::sync_with_stdio(NULL);cin.tie(NULL);cout.tie(NULL);
#define ll long long
void printvec(vector<string>v){
    // cout<<"Size:"<<v.size()<<endl;
    for(int i=0; i<v.size(); ++i){
        cout<<v[i]<<" ";
    }
    cout<<endl;

}

int main(){
    King()
    vector<string>v;
    int n;cin>>n;
    // for(int i=0; i<n; ++i){
    //     int x; cin>>x;
    //     printvec(v);
    //     v.push_back(x);
    // }
    for(int i=0; i<n; ++i){
        string x; cin>>x;
        // printvec(v);
        v.push_back(x);
    }
    printvec(v);

}