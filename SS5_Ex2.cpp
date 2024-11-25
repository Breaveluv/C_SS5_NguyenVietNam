#include <stdio.h>

int main() {
    int num;
    do{
        printf("hay nhap mot so ");
        scanf("%d", &num);
        if(num<30){
            printf("nho hon roi\n");
        }else if(num>30){
            printf("lon hon roi\n");
        }
    }while(num !=30);
    printf("ðúng r?i hehe\n");
    return 0;
}
