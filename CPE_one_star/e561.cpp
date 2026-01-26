#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    while (n>0)
    {
        int l;
        cin >> l;
        int str[l];
        for(int i = 0; i < l;i++){
            cin >> str[i];
        }
        int counter = 0;
        for(int i = 0;i<l;i++){
            for(int j = 0;j<l-i-1;j++){
                if(str[j]>str[j+1]){
                    int temp = str[j];
                    str[j] = str[j+1];
                    str[j+1] = temp;
                    counter++;
                }
            }
        }
        cout<<"Optimal train swapping takes "<<counter<<" swaps.\n";
        n--;
    }
    return 0;
}
