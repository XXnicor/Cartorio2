#include <stdlib.h>//biblioteca de alocação de espaço em memoria
#include <locale.h>//biblioteca de alocaçoes de texto por regioes
#include <stdio.h>//biblioteca de comunicação com o usuario
#include <string.h>//biblioteca responsavel por cuidar das string

int registro()//função responsavel por cadastrar os usuariso no sistema
{
  //inicio criação de variaveis/string
  char arquivo[40];
  char cpf[40];
  char nome[40];
  char sobrenome[40];
  char cargo[40];
  //final da criação de variaveis/string
  
  printf("digite o cpf a ser cadastrado: ");
  scanf("%s",cpf);//%s refere-se a salvar a string
  
  strcpy(arquivo, cpf);//responavel por copiar os valores das strings
  
  FILE*file;//cria o arquivo
  file=fopen(arquivo, "w"); //cria o arquivo e o "w" signfica escrever
  fprintf(file,cpf);//salvo o valor da variavel
  fclose(file);//fecha o arquivo
  
  file = fopen(arquivo, "a");
  fprintf(file,",");
  fclose(file);
  
  printf("digite o nome a ser cadastrado: ");
  scanf("%s" ,nome);
  
  file = fopen(arquivo, "a");
  fprintf(file,nome);
  fclose(file);
  
  file = fopen(arquivo, "a");
  fprintf(file,",");
  fclose(file);
  
  printf("digite o sobrenome a ser cadastrado: ");
  scanf("%s" ,sobrenome);
  	
  file = fopen(arquivo, "a");
  fprintf(file,sobrenome);
  fclose(file);
  
  file = fopen(arquivo, "a");
  fprintf(file,",");
  fclose(file);
  
  printf("digite o cargo a ser cadastrado: ");
  scanf("%s" ,cargo);
  
  file = fopen(arquivo, "a");
  fprintf(file,cargo);
  fclose(file);
  
  system("pause");
  system("cls");//responsavel por limpar a tela
   
}

int consulta()
{
	setlocale(LC_ALL,"portuguese");//Definindo linguagem
	 char cpf[40];
	 char conteudo[200];
	 
	 printf("digite o cpf a ser consultado: ");
	 scanf("%s", cpf);
	 
	 FILE*file;
	 file =fopen(cpf,"r");
	 
	 if(file==NULL)
	 {
	   printf("Não foi possivel abrir o arquivo, não localizado.\n");	
	 }
	 
	 while(fgets(conteudo,200, file) !=NULL)
	 {
	 	 printf("\nEssas são as informações do usuario: ");
	 	 printf("%s", conteudo);
	 	 printf("\n\n");
	 }
	 
	 system("pause");
	    
	    
	 
}
 


int deletar()
{
  char cpf[40];
   
   printf("Digite o CPF do usuario ser Deletado: ");
   scanf("%s", cpf);
   
   remove(cpf);
   
    FILE *file;
    file = fopen(cpf, "r");
    
    if(file== NULL)
    {
      printf("o usuario não se encontra no sistema!.\n");
      system("pause");
      
	}
}

int main()
    {
	int opcao=0;
	int laco=1;//repetiçao
	
	for(laco=1;laco=1;)//repetiçao
	{
	  system("cls");
	  
     setlocale(LC_ALL,"portuguese");//definindo variaveis
	
	  printf("##cartorio ebac###\n\n");//inicio do menu
	  printf("Escolha a opção desejada no menu\n");
 	  printf("\t1 - registrar nomes\n");
	  printf("\t2 - consultar nomes\n");
	  printf("\t3 - Deletar os nomes\n");
	  printf("\t4 - sair do sistema\n");
	  printf("opcao:");//final do menu
	
	  scanf("%d", &opcao);//armazenando a escolha do usuario
	
	  system("cls");//informaçao para o sistema
	
	
		switch(opcao)//inicio da seleção do menu
		{
    		case 1:
    		registro();//chamada de funções
    		break;
    		
    		case 2:
    	    consulta();
    		break;
    		
    		case 3:
    	    deletar();
    		break;
    		
    		case 4:
    		printf("Obrigado por utilizar o sistema!\n");
    		return 0;
    		break;
    		
            default:
            printf("");
            system("pause");
            break;
            system("cls");
		}
	  
 	 
	 
	
	  
	  }//fim da selecao
	
	}

	

