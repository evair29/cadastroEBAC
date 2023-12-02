#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<string.h>

int registra()
{
   char arquivo[40];
   char cpf[40];
   char nome[40];
   char sobrenome[40];
   char cargo[40];
   
   printf("Digite o cpf a ser cadastrado: ");
   scanf("%s", cpf);
	
   strcpy(arquivo, cpf);
   
   FILE *file;
   file = fopen(arquivo, "w");
   fprintf(file,cpf);
   fclose(file);
   
   file= fopen(arquivo, "a");
   fprintf(file,",");
   fclose(file);
   
   printf("Digite o nome a ser cadastrado: ");
   scanf("%s",nome);
   
   file = fopen(arquivo, "a");
   fprintf(file,",");
   fclose(file);
   
   printf("Digite o sobrenome a ser cadastrado: ");
   scanf("%s",sobrenome);
   
   file = fopen(arquivo, "a");
   fprintf(file,sobrenome);
   fclose(file);
   
   file = fopen(arquivo, "a");
   fprintf(file,",");
   fclose(file);
   
   printf("Digite o cargo a ser cadastrado:");
   scanf("%s",cargo);
   
   file = fopen(arquivo, "a");
   fprintf(file,cargo);
   fclose(file);
	
   system("pause");	
}
int consultar()
{
	setlocale(LC_ALL, "Portuguese");
	char cpf[40];
	char conteudo [200];
	
	printf("Digite o cpf a ser consultado: ");
	scanf("%s", cpf);
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("Nao foi possivel abri o arquivo, nao localizado!.\n ");
	}
	
	while(fgets(conteudo, 200, file) !=NULL)
	{
		printf("\nEssass sao as informaçoes do usuario: ");
		printf("%s",conteudo);
		printf("\n\n");
	}
	system("pause");
}
int deletar()
{
	char cpf[40];
	
	printf("Digite o cpf a ser deletado: ");
	scanf("%s",cpf);
	
	remove(cpf);
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
	printf("O usuario nao se encontra no sistema!.\n");
	
	system("pause");	
	}
}
int main()
    {
	int opcao=0;
	int x=1;
	
	for(x=1;x=1;)
	
	{
	  
	  system("cls"); 
    setlocale(LC_ALL, "Portuguese");
	
	printf("### cartório EBAC ###\n\n");
	printf("escolha a opção desejada no menu:\n\n");
	printf("\t1 - registra nomes\n");
	printf("\t2 - consultar nomes\n");
	printf("\t3 - deletar nomes \n\n");
	
	scanf("%d", &opcao);
	
	system("cls");
	switch(opcao)
	{
	case 1:
	registra();
	break;
	
	case 2:	
	consultar();
	break;
	
	case 3:
	deletar();
	break;	
	}
	if(opcao==1)
	{
		printf("você escolheu o registro de nomes!");
		system("pause");
	}
	if(opcao==2)
	{
		printf("você escolheu consulta os nomes!");
		system("pause");
	}
	if(opcao==3)
	{
		printf("você escolheu deletar nomes!");
		system("pause");
	}
	if(opcao >=4 || opcao<=0)
	{
		printf("Essa opçao nao esta disponivel!");
		system("pause");
	}

}
}

