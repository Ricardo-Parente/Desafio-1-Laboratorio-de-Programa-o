#include <stdio.h>
#include <stdlib.h>

int main(){
    char posicao,y,i,x = '0';
    puts("1. Ocupar armario");
    puts("2. Desocupar armario");
    puts("3. Sair");
    while (i != '3')
    {
        puts("Valor da variavel de controle:");
        scanf("%c",&i);
        switch (i)
        {
        case '1':
            y = (rand() % 3);
            x = x | y;
            printf("Armario ocupado:%c\n",x);
            break;
        case '2':
            getchar();
            puts("posicao que vai ocupar:");
            scanf("%c",&posicao);
            x = x & posicao;
            printf("Armario desocupado:%c\n",x);
            x = posicao;
            printf("Armario ocupado:%c\n",x);
            break;
        }
    }
    puts("Programa finalizado.");
    
}