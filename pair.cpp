#include<bits/stdc++.h>
using namespace std;
#define King() ios_base::sync_with_stdio(NULL);cin.tie(NULL);cout.tie(NULL);
#define ll long long

int main(){
    pair<int, string>p[10];
    for(int i=0; i<10; i++){
        cin>>p[i].first>>p[i].second;
    }
    swap(p[0].first, p[9].first);
    swap(p[0].second, p[9].second);
    cout<<endl;
    for(int i=0; i<10; i++){
        cout<<p[i].first<<" "<<p[i].second<<endl;
    }
    

}