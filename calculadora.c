#include <stdio.h>
#include <math.h>

int main()
{
    char op;
    int a,b,bin,tip,res;
    float c,d;

    do
    {
        printf("Bienvenido a la calculadora, desea operar con flotantes (1) o enteros (0)?\n");
        scanf("%d",&tip);
        fflush(stdin);

        printf("Que operacion desea hacer? Suma(+), Resta(-), Multiplicacion(x), Division(/), Potencia(^), Modulo(%%), Raiz Cuadrada(r)\n");
        printf("NOTA: Tanto la resta, division, modulo y potencia se hacen en orden, ej: numero 1 ^ numero 2, numero 1 / numero 2\n");
        scanf("%c",&op);
        fflush(stdin);

        if(tip == 0)
        {
            printf("Numero 1: \n");
            scanf("%d",&a);

            printf("Numero 2: \n");
            scanf("%d",&b);

            switch(op)
            {
            case '+':
                printf("El resultado de la suma es: %d\n",a+b);
                break;
            case '-':
                printf("El resultado de la resta es: %d\n",a-b);
                break;
            case 'x':
                printf("El resultado de la multiplicacion es: %d\n",a*b);
                break;
            case '/':
                printf("El resultado de la division es: %d\n",a/b);
                break;
            case '^':
                printf("El resultado de la potencia es: %lf0\n", pow(a,b));
                break;
            case '%':
                printf("El resultado del modulo es: %d\n",a%b);
                break;
            case 'r':
                printf("El resultado de la raiz cuadrada es: %lf y %lf\n",sqrt(a),sqrt(b));
                break;
            }
        }else
        {
            printf("Numero 1: \n");
            scanf("%f",&c);

            printf("Numero 2: \n");
            scanf("%f",&d);

            switch(op)
            {
            case '+':
                printf("El resultado de la suma es: %f\n",c+d);
                break;
            case '-':
                printf("El resultado de la resta es: %f\n",c-d);
                break;
            case 'x':
                printf("El resultado de la multiplicacion es: %f\n",c*d);
                break;
            case '/':
                printf("El resultado de la division es: %f\n",c/d);
                break;
            case '^':
                printf("El resultado de la potencia es: %lf0\n", pow(c,d));
                break;
            case '%':
                printf("Es incompatible una operacion binaria con variables flotantes\n");
                break;
            case 'r':
                printf("El resultado de la raiz cuadrada es: %lf y %lf\n",sqrt(c),sqrt(d));
                break;
            }
        }
    printf("Quiere volver a usar la calculadora? Si(0),No(1)\n");
    scanf("%d",&bin);

    }while(bin==0);
    printf("Gracias :D");

    return 0;
}
