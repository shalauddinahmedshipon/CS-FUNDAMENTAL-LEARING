#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        bool isOddPresent=false;
        int x=n;
        while (x!=0)
        {
            int r=x%10;
            if(r%2==1){
                isOddPresent=true;
                break;
            }
            x=x/10;
        }

        if(isOddPresent){
             int lastDigit=n%10;
                if(lastDigit%2==1){
                    cout<<0<<endl;
                }
                else{
                    cout<<1<<endl;
                }
            
        }
        else{
            if(n>=0&&n<=9){
               cout<<-1<<endl;
            }
            else{
                int lastDigit=n%10;
                bool isLastDigitGreater=true;

                int y=n;
                while (y!=0)
                {
                   
                    int r=y%10;
                    if(r>lastDigit){
                        isLastDigitGreater=false;
                        break;
                    }

                     y=y/10;
                   
                }

                

                if(isLastDigitGreater){
                    cout<<3<<endl;
                }
                else {
                    cout<<2<<endl;
                }
                

            }
        }
        
    }
    
    return 0;
}