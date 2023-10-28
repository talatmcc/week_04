#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s = "";
        for(int i=9;i>=0;i--){
            if( i <= n){
                string str_i = to_string(i);
                s += str_i;
                n -= i;
                if(n==0){
                    break;
                }
            }
        }
        reverse(s.begin() , s.end());
        cout<<s<<endl;
    }
    return 0;
}