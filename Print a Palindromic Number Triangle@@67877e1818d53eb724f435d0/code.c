#include <stdio.h>
int main(){
    int n ;
    scanf("%d",&n);
    for(int i = 0;i<5;i++){
        //spaces
        for(int j = n - i-1;j>0;j--){
            printf(" ");
        }
        //number
        int r = 1;
        int sep = i;
        for(int j = 1;j<=2*i+1;j++){
            printf("%d",r);
            if(j<=sep) r++;
            else r--;
        }




        printf("\n");
    }
    return 0;
}