/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

     struct Post{
         int comments;
         int likes;
     };
   
int main()
{
    int opcao = -1;
    while(opcao!=0){
        printf("Aperte 0 para sair do loop\n");
        printf("Aperte 1 para ligar para a policia\n");
        printf("Aperte 2 para ligar para o bombeiro\n");
        printf("Aperte 3 para ligar para o SAMU\n");
        scanf("%d", &opcao);
        
        
        if(opcao == 1){
            printf("Ligando para a policia\n");
            printf("Aperte 0 para finalizar a ligação\n");
            scanf("%d", &opcao2);
            
        }else if(opcao == 2){
            printf("Ligando para o bombeiro\n");
            printf("Aperte 0 para finalizar a ligação\n");
            scanf("%d", &opcao2);
            
        }else if(opcao ==3){
            printf("Ligando para o SAMU\n");
            printf("Aperte 0 para finalizar a ligação\n");
            scanf("%d", &opcao2);
            
        }
        
        
        
    }

    return 0;
}