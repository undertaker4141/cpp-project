#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    int quoter_counter = 1;
    while(getline(cin,s)){
        for(int i = 0;i<s.size();i++){
            //置換邏輯
            if(s[i]=='"'){
                if(quoter_counter%2==1){
                    s[i] = '`';
                    s.insert(i,"`");
                    quoter_counter++;
                }
                else{
                    s[i] = '\'';
                    s.insert(i,"'");
                    quoter_counter++;
                }
            }
        }
        cout<<s<<'\n';
    }
    return 0;
}