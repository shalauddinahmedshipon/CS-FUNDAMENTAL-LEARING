#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t; cin>>t;
    while (t--)
    {
        vector<int> v(5);
        for(int i=0;i<5;i++){
            cin>>v[i];
        }
        
        int isUp60=0,isUp30=0;
        
        for(int i=0;i<5;i++){
         if(v[i]>=60) isUp60++;
         if(v[i]>=30) isUp30++;
        }

        if(isUp60>=2&&isUp30>=4){
           cout<<"Pass"<<endl;
        }else{
            cout<<"Fail"<<endl;
        }
    }
    
    return 0;
}