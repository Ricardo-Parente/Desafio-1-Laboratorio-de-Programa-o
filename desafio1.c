#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned char posicao,i,x = '0';
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
            x = x | (0x01 << (rand() % 8));
            printf("Armario ocupado:%#x\n",x);
            break;
        case '2':
            getchar();
            puts("posicao que vai ocupar:");
            scanf("%hhu",&posicao);
            if (posicao >= 0 && posicao <= 8)
            {
            x = x ^ (0x01 << posicao);
            printf("Armario desocupado:%#x\n",x);
            break;
            }
        }
    }
    puts("Programa finalizado.");
}
