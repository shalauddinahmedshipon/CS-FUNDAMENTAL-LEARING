// #include<bits/stdc++.h>;
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int n;
//         cin>>n;
//         vector<int> v(n);
//         map<int,int> mp;
      
//         for (int i = 0; i < n; i++)
//         {
//             cin>>v[i];
//             mp[v[i]]++;
          
//         }

        

//         if(n==1){
//             cout<<"Yes"<<endl;
//         }else{
       


//         for (int i = 0; i < 100; i++)
//         {
            
//         for (int i = 0; i < n-1; i++)
//         {
//             for (int j = i+1; j < n; j++)
//             {
//                 if((v[i]&v[j])==0){
//                     int sum=v[i]+v[j];
//                     v.push_back(sum);
//                     v.erase(v[i]);
//                     v.erase(v[j]);
//                 }
//             }
            
          
//         }
//         }
        
        

        


//         }
        

//     }
    
//     return 0;
// }