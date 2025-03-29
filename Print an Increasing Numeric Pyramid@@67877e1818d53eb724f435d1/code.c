#include <stdio.h>
int main()
{   
    int n = 6;
    // scanf("%d",n);
    for (int i = 0; i < n; i++){
        for(int j = n - i;j>=0;j--){
            printf("^");
        }
        for(int j = 0;j <n;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}