#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string, int> a, pair<string, int> b){
    if(a.second>b.second){
        return true;
    }
    else if(b.second==a.second){
        return a.first>b.first;
    }
    else{
        return false;
    }
}

int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    string arrc[a];
    for(int i = 0;i<a;i++){
       cin>>arrc[i]>>arr[i];
    }

    
    vector<pair<string, int>> dic;
    for(int i = 0;i<a;i++){
        dic.push_back(pair<string, int>(arrc[i], arr[i]));
    }
    sort(dic.begin(),dic.end(),cmp);

    for(int i = 0;i<dic.size();i++){
        cout<<dic[i].first<<" "<<dic[i].second<<endl;
    }
}
