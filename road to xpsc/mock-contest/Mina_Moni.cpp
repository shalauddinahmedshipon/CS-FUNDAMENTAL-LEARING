#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }

       sort(v.begin(),v.end());


       int sum1=0;
       int sum2=0;
       int cnt=0;

       if(n%2==0){
         for (int i = n-1; i >=0; i-=2)
        {
        
          if(cnt%2==0){
            if(sum2>=sum1){
            sum1+=v[i];
            sum2+=v[i-1];
            }else{
            sum2+=v[i];
            sum1+=v[i-1];   
            }
           
            }else{
            if(sum1>=sum2){
            sum2+=v[i];
            sum1+=v[i-1];  
            }else{
            sum1+=v[i];
            sum2+=v[i-1];  
            }  
            }  
         cnt++;
         
        }
       }else{

        vector<int> v1;
        for (int i = 1; i < n; i++)
        {
        v1.push_back(v[i]);
        }

       for (int i = v1.size()-1; i >=0; i-=2)
       {
        
          if(cnt%2==0){
            sum1+=v1[i];
            sum2+=v1[i-1];
            }else{
            sum2+=v1[i];
            sum1+=v1[i-1];  
            }  
         cnt++;
         
       }
        
       if(sum1>=sum2) sum2+=v[0];
       else sum1+=v[0];

       }

   
       cout<<abs(sum1-sum2)<<endl;
       
    }
    
    return 0;
}