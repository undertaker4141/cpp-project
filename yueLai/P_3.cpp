#include <bits/stdc++.h>
using namespace std;

bool isrp(int a,int b){
    if(a==1|b==1){
        return true;
    }
    while(1){
        int t = a%b;
        if(t==0){
            break;
        }
        else{
            a = b;
            b = t;
        }
    }
    if(b>1){
        return false;
    }
    return true;
}

int main(){
    int a;
    cin>>a;
    for(int k = 0;k<a;k++){
        string test;
        cin>>test;
        int arr[123];
        for(int i = 0;i<123;i++){
            arr[i]=0;
        }

        for(int i = 0;i<test.length();i++){
            arr[test[i]]++;
        }

        for(int i = 0;i<123;i++){
            arr[i] = isrp(arr[i],510510)? 1:0;
        }
        
        int zcounter = 0;
        for(int i = 0;i<123;i++){
            zcounter+=arr[i];
        }

        if(zcounter==0){
            cout<<"Case "<<k+1<<": "<<"empty"<<endl;
        }
        else{
            cout<<"Case "<<k+1<<": ";
            for(int i = 0;i<123;i++){
                if(arr[i]==1){
                    cout<<char(i);
                }
            }
            cout<<endl;
        }
    }

    return 0;
}
