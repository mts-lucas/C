#include <stdio.h>

int meses[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int dataValida(int, int, int);
int bissexto(int);

int main(void)
{
    int dia, mes, ano, dataOk;

    printf("Validação de datas\n");
    printf("Informe o dia: ");
    scanf("%d", &dia);
    printf("Informe o mes: ");
    scanf("%d", &mes);
    printf("Informe o ano: ");
    scanf("%d", &ano);

    while (!dataValida(dia, mes, ano))
    {
        printf("Data invalida!\n");
        printf("Informe nova data\n");
        printf("Informe o dia: ");
        scanf("%d", &dia);
        printf("Informe o mes: ");
        scanf("%d", &mes);
        printf("Informe o ano: ");
        scanf("%d", &ano);

    }
    return 0;
}
int bissexto(int aa)
{
    if ((aa % 4 == 0) && (aa % 100 != 0))
    {
        return 1;
    }
    else if (aa % 400 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int dataValida(int dd, int mm, int aa)
{
    int maiorDia;
    if (aa < 0 || mm < 1 || mm > 12 || dd < 1)
    {
        return 0;
    }
    if (mm == 2)
    {
        if (bissexto(aa))
        {
            maiorDia = 29;
        }
        else
        {
            maiorDia = 28;
        }
    }
    else if (mm == 4 || mm == 6 || mm == 9 || mm == 11)
    {
        maiorDia = meses[mm - 1];
    }
    else
    {
        maiorDia = meses[mm - 1];
    }
    if (dd > maiorDia)
    {
        return 0;
    }
    return 1;
}