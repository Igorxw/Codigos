#include <stdio.h>

int main() {
    float investimento, valorfinal;
    int meses, i;

    printf("coloque o valor inicial do investimento em Bitcoin: ");
    scanf("%f", &investimento);

    printf("coloque o numero de meses que deseja manter o investimento: ");
    scanf("%d", &meses);

    valorfinal = investimento;
    for (i = 0; i < meses; i++) {
        valorfinal *= 1.10;
    }

    printf("o valor final do investimento apos meses e: %.2f\n", meses, valorfinal);

    printf("valor do investimento mes a mes:\n");

    float mensal = investimento;
    for (i = 0; i < meses; i++) {
        printf("mes %d: %.2f\n", i + 1, mensal);
        mensal *= 1.10;
    }

    return 0;
}
