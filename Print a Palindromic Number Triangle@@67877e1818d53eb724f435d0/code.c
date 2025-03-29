#include <stdio.h>
int main(){
    int n = 5;
    for(int i = 0;i<5;i++){
        //spaces
        for(int j = n - i-1;j>0;j--){
            printf("*");
        }
        //number
        int sep = i;
        for(int j = 0;j<2*i+1;j++){
            printf("%d",j+1);
            if(j<=sep) j++;
            else j--;
        }




        printf("\n");
    }
    return 0;
}