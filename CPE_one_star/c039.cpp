#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int a,b;
    while(cin >> a >> b){
        int max_counter = 0;
        for(int i=min(a,b);i<=max(a,b);i++){
            int counter = 0;
            int n = i;
            while(n!=1){
                n = n%2==1? 3*n + 1: n/2;
                counter++;
            }
            counter++;
            max_counter = max(max_counter,counter);
        }
        cout<<a<<' '<<b<<' '<<max_counter<<'\n';
    }
    return 0;
}