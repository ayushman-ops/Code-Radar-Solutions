[10:24 am, 10/02/2025] Vihaan Kashyap: }
[10:25 am, 10/02/2025] Vihaan Kashyap: #include <stdio.h>
int main() {
    unsigned int num;
    scanf("%u", &num);
    if (num & (1 << 31))  
        printf("Set\n");
    else
        printf("Not Set\n");
    return 0;
}