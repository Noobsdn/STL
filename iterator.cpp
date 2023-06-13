#include<bits/stdc++.h>
using namespace std;
#define King() ios_base::sync_with_stdio(NULL);cin.tie(NULL);cout.tie(NULL);
#define ll long long

int main(){
    vector<int>v;
    int N; cin>>N;
    for(int i=0; i<N; i++){
        int x; cin>>x;
        v.push_back(x);
    }
    vector<int> :: iterator it;
    for(it=v.end()-1; it>=v.begin(); --it){
        cout<<*it<<" ";
    }
    cout<<endl;
    vector<pair<int, int>>v_p={{1, 2}, {2, 3}, {3, 4}};
    vector<pair<int, int>> :: iterator it1;
    for(it1=v_p.end()-1; it1>=v_p.begin(); --it1){
        cout<<(it1->first)<<" "<<(it1->second)<<" ";
    }
    cout<<endl;
    

}