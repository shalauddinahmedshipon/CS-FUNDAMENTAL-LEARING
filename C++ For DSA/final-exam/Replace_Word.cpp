#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
       string s,x;
       cin>>s>>x;
      int lenX=x.size();
      int lenS=s.size();

      for(int i=0;i<lenS;i++){
          bool isEqual=true;
           for(int j=0;j<lenX;j++){
                if(s[i+j]!=x[j]){
                    isEqual=false;
                    break;
                };
               
            }
       if(isEqual){
        cout<<"#";
        i+=lenX-1;
       }else{
        cout<<s[i];
       }
       
    
      }
     
    cout<<endl;
    }
    
    return 0;
}