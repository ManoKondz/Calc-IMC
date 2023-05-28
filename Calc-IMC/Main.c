#include <stdio.h>

int main(void) {
    float p, h ,IMC;
    printf("Digite o peso em kg e a altura em metros, separados por um espaço: ");
scanf("%f %f", &p, &h);

    IMC = p / (h * h);
    if (IMC < 18.5)
        printf("\n %f Seu IMC está na categoria magreza\n", IMC);
    else if (IMC < 25.0)
        printf("\n %f Seu IMC está na categoria normal\n", IMC);
    else if (IMC < 30.0)
        printf("\n %f Seu IMC está na categoria sobrepeso\n", IMC);
    else if (IMC < 35)
        printf("\n %f Seu IMC está na categoria obesidade grau 1\n", IMC);
    else if (IMC < 40)
        printf("\n %f Seu IMC está na categoria obesidade grau 2\n", IMC);
    else
        printf("\n %f Seu IMC está na categoria obesidade grau 3\n", IMC);
    return 0;
}
