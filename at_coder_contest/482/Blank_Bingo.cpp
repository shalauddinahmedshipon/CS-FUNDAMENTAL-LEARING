#include<bits/stdc++.h>;
using namespace std;

int main(){
    char grid[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
           cin>>grid[i][j];
        }
        
    }

    int ans=5;
    int cnt=0;
    for (int i = 0; i < 5; i++)
    {
       
        for (int j = 0; j < 5; j++)
        {
            if(grid[i][j]=='.'){
                cnt++;
            }
        }

        ans=min(ans,cnt);
        cnt=0;
        
    }


    for (int j = 0; j < 5; j++)
    {
       
        for (int i = 0; i < 5; i++)
        {
            if(grid[i][j]=='.'){
                cnt++;
            }
        }

        ans=min(ans,cnt);
        cnt=0;
        
    }


    for (int i = 0; i < 5; i++)
    {
       
        for (int j = 0; j < 5; j++)
        {

            if(i==j){
                  if(grid[i][j]=='.'){
                    cnt++;
                  }
            }
            
        }      
    }

     ans=min(ans,cnt);
     cnt=0;


     for (int i = 0; i < 5; i++)
    {
       
        for (int j = 0; j < 5; j++)
        {

            if(i+j==4){
                  if(grid[i][j]=='.'){
                    cnt++;
                  }
            }
            
        }

       
        
    }


     ans=min(ans,cnt);
     cnt=0;
    

    cout<<ans<<endl;
    
    return 0;
}