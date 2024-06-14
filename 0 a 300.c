#include <stdio.h>
#include <math.h>

int main (){
    int cont, num;

    printf("Digite um numero de 2 a 9: ");
    scanf("%d", &num);

    for (cont=0; cont<=300; cont=cont+num){
    printf("%d\n", cont);
    }

    return 0;

}
