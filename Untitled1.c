#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    int f;
    int b;

    printf("digite um n�mero inteiro: ");
    scanf("%d", &a);

    if(a==0){
        f =1;
    }
    else{
        if(a<0){
            printf("Erro: n�o existe fatorial de numero negativo");
        }
    }

    b = a;
    f = a;

    while(a>1)
    {
        a--;
        f = f*a;
    printf("%d\t%d\t%d\n", a, b,f);
    }

    printf("%d! = %d", b, f);
    return 0;
}
