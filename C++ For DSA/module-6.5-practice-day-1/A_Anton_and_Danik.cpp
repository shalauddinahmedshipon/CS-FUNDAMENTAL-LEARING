#include<bits/stdc++.h>;
using namespace std;

int main(){
    int n;
    string str;
    cin>>n>>str;
    int countA=0;
    int countD=0;
    for(int i=0;i<n;i++){
        if(str[i]=='A'){
            countA++;
        }else{
            countD++;
        }
    }
    if(countA==countD){
        cout<<"Friendship"<<endl;
    }
    else if(countA>countD){
        cout<<"Anton"<<endl;
    }else{
         cout<<"Danik"<<endl;
    }
    return 0;
}