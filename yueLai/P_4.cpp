#include <bits/stdc++.h>
using namespace std;

void serch(char sample,int i,int j, char* arrc[], int row){
    
}


int main(){
    int a,b;
    while(cin>>a>>b){
        char arrc[a+2][b+2];
        for(int i = 0;i<a+2;i++){
            for(int j = 0;j<b+2;b++){
                arrc[i][j] = '$';
            }
        }


        for(int i = 0;i<a;i++){
            for(int j = 0;j<b;j++){
                cin>>arrc[i][j];
            }
        }

        for(int i = 0;i<a;i++){
            for(int j = 0;j<b;j++){
                if(arrc[i][j]=='T'){
                    //serch

                }
            }
        }
        
    }
    return 0;
}
