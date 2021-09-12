#include <stdio.h>

void cicloFor(int un, int dos);
void cicloDoWhile(int un, int dos);
void cicloWhile(int un, int dos);

int main()
{
    int x,y;

    printf("Numero 1: ");
    scanf("%d", &x);
    fflush(stdin);

    printf("Numero 2: ");
    scanf("%d", &y);
    fflush(stdin);

    cicloWhile(x,y);

    return 0;
}

void cicloFor(int un, int dos)
{
    int x;
    x == un;

    for(x;x<dos;x++)
    {
        if(x>un && x<dos)
        {
            printf("%d\n",x);
        }
    }
}

void cicloDoWhile(int un, int dos)
{
    int x;
    x == un;

    do
    {
        if(x>un)
        {
            printf("%d\n",x);
        }
        x++;
    }while(x<dos);
}

void cicloWhile(int un, int dos)
{
    int x;
    x == un;
    while(x<dos)
    {
        if(x>un)
        {
            printf("%d",x);
        }
        x++;
    }
}
