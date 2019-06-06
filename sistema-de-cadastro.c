#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void)
{

      int confirm;

   struct cadastro{
      int  idade;
      int  telefone;
      char nome[50];
      char subnome[50];
      char cidade[50];
     
     //ATUALIZAÇÃO DO CADASTRO
      int  nvidade;
      int  nvtelefone;
      char nvnome[50];
      char nvsubnome[50];
      char nvcidade[50];
   
   }p;

   

   
   //CADASTRO - DADOS DE ENTRADA
   printf("Name: ");          gets(p.nome); 
         printf("\n");
   printf("Last name: ");     gets(p.subnome);
         printf("\n");
   printf("City: ");          gets(p.cidade);
         printf("\n");
   printf("Age: ");           scanf("%d",&p.idade);
         printf("\n");
   printf("Telephone: ");     scanf("%d",&p.telefone);


   //CADASTRO - DADOS DE SAIDA

   system("clear");

   printf("Name: ");               puts(p.nome);
         printf("\n");
   printf("Last name: ");          puts( p.subnome);
         printf("\n");
   printf("City: ");               puts(p.cidade);
         printf("\n");
   printf("Telephone: %d",p.telefone);
         printf("\n");
   printf("Idade: %d",p.idade); 

            //CONFIRMAÇÃO DOS DADOS
   system("clear");
   
   printf("\n\nAre your data correct ? Digite '1' para confirma ou '2' para atualizar:   ");    scanf("%d",&confirm);
      

      if(confirm == 1){

         printf("Data registered\n\n");

         printf("Nome Completo: ");        puts(strcat(p.nome, p.subnome));
               printf("\n");
         printf("Cidade: ");               puts(p.cidade);
               printf("\n");
         printf("Idade: %d anos",p.idade);           
               printf("\n");
         printf("Telefone: %d",p.telefone);
      }
      else{

   system("clear");

   printf("Name: ");            gets(p.nome);             //strcpy(p.nvnome,p.nome);
   printf("Last name: ");       gets(p.subnome);          //strcpy(p.nvsubnome,p.subnome);
   printf("City: ");            gets(p.cidade);           //strcpy(p.nvcidade,p.cidade);
   printf("Age: ");             scanf("%d",&p.idade);  
   printf("Telephone: ");       scanf("%d",&p.telefone);

      }

      system("clear");


         //DADOS ATUALIZADOS

         printf("Data updated successfully!\n\n");

         printf("Nome Completo: ");        puts(strcat(p.nvnome, p.nvsubnome));
               printf("\n");
         printf("Cidade: ");               puts(p.nvcidade);
               printf("\n");
         printf("Idade: %d anos",p.idade);           
               printf("\n");
         printf("Telefone: %d",p.telefone);


   /*DEPOIS DE ARRUMAR O BUG DE CIMA E O CADASTRO TIVER ATUALIZADO
    FAZER UM CADASTRO DE LOGIN E SENHA
   
      CRIAR SENHA E CONFIRMAR SENHA 
         ENQUANTO O CONFIRMAR SENHA NAO ESTIVER IGUAL AO PRIMEIRO CONTINUA TENTANDO.

         DEPOIS QUE ESTIVER CERTO, CRIAR UM PARTE DE ACESSO PARA LOGAR E VER O CADASTRO.
    
    */ 

   

}