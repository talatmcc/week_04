#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <int> v(n);
        long long sum = 0;
        for( int i=0;i<n; i++){
            cin>>v[i];
            sum += abs(v[i]);
        }
        int count = 0;
        for( int i=0;i<n; i++){
            if(v[i] < 0){
                count++;
                while(v[i]<=0){
                    i++;
                }
            }
        }
        cout<<sum<<" "<<count<<endl;
    }
    return 0;
}