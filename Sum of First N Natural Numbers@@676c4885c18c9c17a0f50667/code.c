#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int s=0;
    for (int i=1;i<=n;i++){
        s+=i;
    }
    printf("%d",s);
    return 0;
}