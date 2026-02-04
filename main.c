#include <stdio.h>

int main()
{ 
    int op;
    int sect, disp, idlivro;
    int codigo = 0;
    printf("Biblioteca \n");
    printf("1) Cadastrar \n");
    printf("2) Decodificar \n");
    scanf("%d", &op);
    switch(op)
    {
        case 1:
            printf("Informe a seção: ");
            scanf("%d", &sect);
            printf("Informe a disponibilidade: ");
            scanf("%d", &disp);
            disp = disp & 1;
            printf("Informe o ID do livro: ");
            scanf("%d", &idlivro);
            codigo = codigo | (sect << 16);
            codigo = codigo | (disp << 15);
            codigo = codigo | idlivro;
            printf("%d", codigo);
        break;
        case 2:
        printf("digite o codigo: ");
        scanf("%d", &codigo);
        sect = codigo >> 16;
        disp = (codigo >> 15) & 1;
        idlivro = codigo & 32767;
        printf("%d %d %d", sect, disp, idlivro);
        break;
    }
    return 0;
}
