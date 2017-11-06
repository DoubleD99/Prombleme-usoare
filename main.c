#include<stdio.h>
int main()
{
    int a, b;
    printf("Introduceti valoarea lui a=");
    scanf("%d", &a);
    printf("Introduceti val lui b=");
    scanf("%d", &b);
    if(a>b)
        printf("Numarul mai mare este %d" , a);
    else
        if(a<b)
        printf("Numarul mai mare este %d", b);
    else
    printf("Numerele sunt egale");
    return 0;
}
