#include <stdio.h>
#include <stdlib.h>

int main()
{
    float N1,N2,N3,M;

    printf("Insira a sua primeira nota: "); //usuario está inserindo um valor//
    scanf("%f",&N1); //aqui o valor inserido pelo usario é atribuido a variavel//

    printf("Insira a sua segunda nota: ");//usuario está inserindo um valor//
    scanf("%f",&N2);//aqui o valor inserido pelo usario é atribuido a variavel//

    printf("Insira a sua segunda nota: ");//usuario está inserindo um valor//
    scanf("%f",&N3);//aqui o valor inserido pelo usario é atribuido a variavel//

    M=(N1+N2+N3)/3; //nesta linha a operação matematica é feita//

    printf("Valor da sua media: %.1f",M); //aqui o resultado é mostrado na tela//
    return 0;
}
