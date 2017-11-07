#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Introduceti valoarea lui a=");
    scanf("%d", &a);
    printf("Introduceti val lui b=");
    scanf("%d", &b);
    printf("Introduceti valoarea lui c=");
    scanf("%d", &c);
    if(a>b &&b>c)
        printf("Numarul mai mare este %d" , a);
    else
        if(a<b &&b<c)
            printf("Numarul mai mare este %d", c);
        else
            if(a<b &&c<b)
                printf("Numerul mai mare este %d", b);
            else
                if(a>b &&b<c)
                    printf("Numarul mai mare este %d", a);
    return 0;
}
