#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int counter = 0;
    int temp = 0;
    for(int i = a;i<=b;i++){
    if(i!=1){
        for(int j = 2;j<=sqrt(i);j++){
            if(i%j==0){
                temp++;

            }
        }
        if(temp == 0){
            counter++;
        }
        temp = 0;
        }
    }
    cout<<counter<<endl;
    return 0;
}
