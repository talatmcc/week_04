#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <string> v(n);
    for( int i=0;i<n; i++){
        cin>>v[i];
    }
    map <string , bool > mp;
    for(int i=n-1;i>=0;i--){
        if(mp[v[i]] == false){
            mp[v[i]] = true;
            cout<<v[i][v[i].length() -2]<<v[i][v[i].length() - 1];
        }
    }
    return 0;
}