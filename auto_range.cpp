#include<bits/stdc++.h>
using namespace std;
#define King() ios_base::sync_with_stdio(NULL);cin.tie(NULL);cout.tie(NULL);
#define ll long long

int main(){
    King()
    vector<pair<int, string>>v={{1, "Hello"}, {2, "shuvro"}};
    // for(pair<int, string> l :v){
    //     cout<<l.first<<" "<<l.second<<" ";
    // }
    for(auto &l :v){
        cout<<l.first<<" "<<l.second<<" ";
    }

}
