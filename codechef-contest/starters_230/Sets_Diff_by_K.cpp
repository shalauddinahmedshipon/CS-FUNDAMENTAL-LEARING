#include<bits/stdc++.h>;
using namespace std;



int main(){
    int t; cin>>t;
    while (t--)
    {
        int n,k; 
        cin>>n>>k;
        vector<int> v;
      
        for (int i = 0; i < n; i++)
        {
            int x; cin>>x;
           if(x==1){
            v.push_back(i);
          }
        }
    
       
    
       if(v.empty()){
        cout<<"No"<<endl;  
       }
       else{
           bool flag=true;
          flag &=(v.front()<=k);
          flag &=((n-1)-v.back()<=k);

          for (int i = 0; i <v.size()-1; i++)
          {

            if((v[i+1]-v[i]>k)&&(v[i+1]-v[i]<=2*k+1)){
                continue;
            }
            else{
                flag=false;
                break;
            }
          
          }


           if(flag) cout<<"Yes"<<endl;
           else cout<<"No"<<endl;
       }
       

      
       
     
       
      
        


        
    }
    
    return 0;
}