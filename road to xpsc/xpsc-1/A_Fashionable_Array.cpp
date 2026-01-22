#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int sz;
        cin>>sz;
        int arr[sz];
       

        for(int i = 0; i <sz; i++)
        {
          cin>>arr[i];
        }  
        sort(arr,arr+sz);

        int mini=arr[0];
        int max=arr[sz-1];

        if(mini%2==max%2){
            cout<<"0"<<endl;
        }else{
            int countMin=0;
            int i=0;
            while (arr[i]%2!=max%2)
            {
                i++;
                countMin++;
            }

            int countMax=0;
            int j=sz-1;

            while (arr[j]%2!=mini%2)
            {
                j--;
                countMax++;
            }


            cout<<min(countMin,countMax)<<endl;
            
        }




    }
    
    
    return 0;
}