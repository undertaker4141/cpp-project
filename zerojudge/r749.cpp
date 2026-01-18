#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int counter = 0;
    for(int i = 0;i<=n;i++){
        for(int j = 0;j<=i;j++){
            counter = counter + i + j;
        }
    }
    cout << counter;
    return 0;
}