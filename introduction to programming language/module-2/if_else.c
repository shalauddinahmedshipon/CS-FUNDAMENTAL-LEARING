#include <stdio.h>;

int main(){
    int tk ;
    double a=15/4;
    printf("%lf",a);
    scanf("%d",&tk);
    if(tk>=200){
        printf("biriyani khabo");
        printf("sotti");
    }
    else if(tk>=100){
        printf("burger khabo");
    }
    else if(tk>=50){
        printf("Juice khabo");
    }
    else{
        printf("kicui khabo na");
    }
    return 0;
}