#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
      string a,b;
      cin>>a>>b;
      int lenA= a.size();
      int lenB= b.size();
      char c[lenA+lenB];
      int posA=0;
      int posB=0;
      if(lenA==lenB){
      for(int i=0;i<lenA+lenB;i++){
       if(i%2==0){
        c[i]=a[posA];
        posA++;

       }else{
        c[i]=b[posB];
        posB++;
       }
      }

      for(int i=0;i<lenA+lenB;i++){
       cout<<c[i];
      }
        
      }
      else if(lenA<lenB){
       
       for(int i=0;i<2*lenA;i++){
         if(i%2==0){
        c[i]=a[posA];
        posA++;

       }else{
        c[i]=b[posB];
        posB++;
       }
      
       }

      for(int i=2*lenA;i<lenA+lenB;i++){
        c[i]=b[posB];
        posB++;
       }

       for(int i=0;i<lenA+lenB;i++){
       cout<<c[i];
      }

     

      }
      else if(lenA>lenB){
        for(int i=0;i<2*lenB;i++){
         if(i%2==0){
        c[i]=a[posA];
        posA++;

       }else{
        c[i]=b[posB];
        posB++;
       }
      
       }

      for(int i=2*lenB;i<lenA+lenB;i++){
        c[i]=a[posA];
        posA++;
       }

       for(int i=0;i<lenA+lenB;i++){
       cout<<c[i];
      }
      }
     
 

       cout<<endl;
       
      
    }
    
    return 0;
}