#include<bits/stdc++.h>
using namespace std;
struct axis{
    int x;
    int y;
};
char dec_LR(char c,char dera){
    char result;
    if(c == 'N'){
        result = dera=='L'? 'W':'E';
    }
    else if(c == 'S'){
        result = dera=='L'? 'E':'W';
    }
    else if(c == 'E'){
        result = dera=='L'? 'N':'S';
    }
    else{
        result = dera=='L'? 'S':'N';
    }
    return result;
}
bool dec_lost(axis target,int m,int n){
    bool lost = false;
    if(target.x>m||target.x<0){
        lost = true;
    }
    if(target.y>n||target.y<0){
        lost = true;
    }
    return lost;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int m,n;
    axis r;
    char c;
    string s;
    vector<axis> losted;
    cin>>m>>n;
    while(cin >>r.x>>r.y>>c>>s){
        bool lost = false;
        for(int i = 0;i<s.length();i++){
            // cout<<s[i]<<endl;
            switch(s[i]){
                case 'L':
                    c = dec_LR(c,'L');
                    break;
                case 'R':
                    c = dec_LR(c,'R');
                    break;
                case 'F':
                    switch(c){
                        case 'N':
                            r.y = r.y + 1;
                            lost = dec_lost(r,m,n);
                            if(lost == true){
                                for(int k = 0;k<losted.size();k++){
                                    if(losted[k].x == r.x&&losted[k].y == r.y - 1){
                                        lost = false;
                                        r.y = r.y - 1;
                                    }
                                }
                                if(lost){
                                    axis temp;
                                    temp.x = r.x;
                                    temp.y = r.y-1;
                                    losted.push_back(temp);
                                    r = temp;
                                    break;
                                }
                            }
                            break;
                        case 'S':
                            r.y = r.y - 1;
                            lost = dec_lost(r,m,n);
                            if(lost == true){
                                for(int k = 0;k<losted.size();k++){
                                    if(losted[k].x == r.x&&losted[k].y == r.y + 1){
                                        lost = false;
                                        r.y = r.y + 1;
                                    }
                                }
                                if(lost){
                                    axis temp;
                                    temp.x = r.x;
                                    temp.y = r.y+1;
                                    losted.push_back(temp);
                                    r = temp;
                                    break;
                                }
                            }
                            break;
                        case 'E':
                            r.x = r.x + 1;
                            lost = dec_lost(r,m,n);
                            if(lost == true){
                                for(int k = 0;k<losted.size();k++){
                                    if(losted[k].y == r.y&&losted[k].y == r.x - 1){
                                        lost = false;
                                        r.x = r.x - 1;
                                    }
                                }
                                if(lost){
                                    axis temp;
                                    temp.x = r.x-1;
                                    temp.y = r.y;
                                    losted.push_back(temp);
                                    r = temp;
                                    break;
                                }
                            }
                            break;
                        case 'W':
                            r.x = r.x - 1;
                            lost = dec_lost(r,m,n);
                            if(lost == true){
                                for(int k = 0;k<losted.size();k++){
                                    if(losted[k].y == r.y&&losted[k].y == r.x + 1){
                                        lost = false;
                                        r.x = r.x + 1;
                                    }
                                }
                                if(lost){
                                    axis temp;
                                    temp.x = r.x+1;
                                    temp.y = r.y;
                                    losted.push_back(temp);
                                    r = temp;
                                    break;
                                }
                            }
                            break;
                    }
                    break;
            }
            if(lost)break;
        }
        if(lost){
            cout<<r.x<<' '<<r.y<<' '<<c<<' '<<"LOST"<<'\n';
        }
        else{
            cout<<r.x<<' '<<r.y<<' '<<c<<'\n';
        }
    }
    return 0;
}

// 測試git