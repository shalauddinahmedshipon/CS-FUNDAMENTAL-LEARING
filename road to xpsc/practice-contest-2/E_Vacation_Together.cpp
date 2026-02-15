// #include<bits/stdc++.h>;
// using namespace std;

// int main(){
//     int n,m;
//     cin>>n>>m;
//     char arr[n][m];

//     for (int i = 0; i <n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             char x;
//             cin>>x;
//             arr[i][j]=x;
//         }
        
//     }

//     int count =0;
//     int res=0;

//     for (int i = 0; i <m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if(arr[j][i]='0'){
//                 count++;
//                 if(count==n){
//                     res++;
//                     count=0;
//                 }
//             }else{
//                 count=0;
//             }
//             // cout<<arr[j][i];
            
//         }

//         count=0;

//         // cout<<endl;
        
//     }

//     cout<<res<<endl;
    
//     return 0;
// }