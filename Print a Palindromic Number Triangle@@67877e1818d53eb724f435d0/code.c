#include <stdio.h>
int main(){
    int n = 5;
    for(int i = 0;i<5;i++){
        //spaces
        for(int j = n - i-1;j>0;j--){
            printf("*");
        }
        //number
        for(int j = 0;j<2*i+1;j++){
            printf("%d",j+1);
        }




        printf("\n");
    }
    return 0;
}