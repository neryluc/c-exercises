#include <stdio.h>

int main(){
    int diaEncerrado = 0, opcao;
    float totalCompraAtual = 0;
    int qnt1 = 0, qnt2 = 0, qnt3 = 0, qnt4 = 0, qnt5 = 0;
    
    while(!diaEncerrado){
        printf("\nMenu");
        printf("\n1 – Cachorro quente     R$ 3,00");
        printf("\n2 – Hamburguer          R$ 4,50");
        printf("\n3 – Americano           R$ 6,00");
        printf("\n4 – Refrigerante        R$ 2,50");
        printf("\n5 – Batata frita        R$ 6,00");
        
        printf("\n\n");
        
        while(opcao != 0){ 
           printf("\nDigite uma opcao: ");
           scanf("%d", &opcao);
           switch(opcao){
               case 1:
                    qnt1++;
                    printf("\nItem 1 - Qt: %d - Preço Unitario: R$ 3,00\n", qnt1);
                    totalCompraAtual += 3.0;
               break;
               case 2:
                    qnt2++;
                    printf("\nItem 2 - Qt: %d - Preço Unitario: R$ 4,50\n", qnt2);
                    totalCompraAtual += 4.5;
               break;
               case 3:
                    qnt3++;
                    printf("\nItem 3 - Qt: %d - Preço Unitario: R$ 6,00\n", qnt3);
                    totalCompraAtual += 6.0;
               break;
               case 4:
                    qnt4++;
                    printf("\nItem 4 - Qt: %d - Preço Unitario: R$ 2,50\n", qnt4);
                    totalCompraAtual += 2.5;
               break;
               case 5:
                    qnt5++;
                    printf("\nItem 5 - Qt: %d - Preço Unitario: R$ 6,00\n", qnt5);
                    totalCompraAtual += 6.0;
               break;
               case 0:
                    printf("\nTotal do pedido: R$ %f.2\n", totalCompraAtual);
               break;
               case 9:
                    diaEncerrado = 1;
               default:
                    printf("\nOpcao invalida.");
           }
           
           
        }
    }
    
    return 0;
}