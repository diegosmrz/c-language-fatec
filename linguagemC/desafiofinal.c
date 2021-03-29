/*
1 - Escreva um programa que tem a estrutura de dados abaixo. O programa tem as seguintes opções de menu:
   1 – entra dados.
   2 – lista dados na tela.
   3 – pesquisar um registro por nome.
   4 – pesquisar pela 1. letra do nome.
   5 – pesquisar os aniversariantes de um determinado mês.
   6 – pesquisa por cep.
   7 – altera dados.
   8 – exclui dados.
   9 - saída
Todas as operações devem ser feitas direto no arquivo. (utilize a funcao fseek).
Estrutura: nome, endereço, data de nascimento, cidade, estado e cep.
Obs.: a estrutura de dados deve ser variável local na função main().
Obs.: o programa deve ser finalizado pelo usuário.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct dados {
              char nome [20];
              char endereco [30];
              char cidade [20];
              char estado [20];
              int dia;
              int mes;
              int ano;
              char cep[10];
            };

void inclui();
void lista();
char pesquisaNome();
char pesquisaLetra();
char pesquisaMes();
char pesquisaCep();
void altera();
void exclui();

void clrscr(){
    system("@cls||clear");
}

void intro(){
    printf("================================\n");
    printf("         DESAFIO C \n");
    printf("  Santos-SP - Fatec Rubens Lara\n");
    printf("================================\n");
}


int main()
{       setlocale(LC_ALL, "Portuguese");
        struct dados info;
        struct dados *p;
        int op;
        int i;
        int tam;

        p = & info;
        tam = sizeof(info);

        intro();
        for(i=0;i<sizeof(info);i++) {
            info.nome[i]=0;
           }
        while(1){
        system("pause");
        clrscr();
        printf("================================\n");
        printf(" 1 Inserir novo registro  \n");
        printf(" 2 Listar registros  \n");
        printf(" 3 Pesquisar por nome  \n");
        printf(" 4 Pesquisar pela inicial do nome \n");
        printf(" 5 Pesquisar aniversariantes do mês  \n");
        printf(" 6 Pesquisar por CEP  \n");
        printf(" 7 Alterar registro existente  \n");
        printf(" 8 Excluir registros  \n");
        printf(" 9 Sair\n");
        printf("================================\n");
        printf(" Escolha uma opção: ");
        scanf("%d", &op);
        getchar();


    switch(op)
                {
                case 1 : inclui(p, tam);
                break;
                case 2: lista(p, tam);
                break;
                case 3: pesquisaNome(p, tam);
                break;
                case 4: pesquisaLetra(p, tam);
                break;
                case 5: pesquisaMes(p, tam);
                break;
                case 6: pesquisaCep(p, tam);
                break;
                case 7: altera(p, tam);
                break;
                case 8: exclui(p, tam);
                break;
                case 9: exit(0);
                break;
                default: printf("\n opção inválida\n");
                }
    };

}

void inclui(struct dados *ps, int tam)
{
    FILE *p, *p1;
    int cont = 0;
    int i;

    p1 = fopen("contador.txt", "r");
    fscanf(p1,"%d",&cont);
    fclose(p1);

    for(i=0;i<tam;i++)
    {
        ps -> nome[i]=0;
    }

    p = fopen("desafio.txt", "a");

    if( p == NULL){
        printf("\nERRO");
        exit(1);
    }
    printf("Digite um nome: ");
    gets(ps->nome);
    printf("Digite um aniversário, Ex:30/12/1989, : ");
    scanf("%d/%d/%d", &ps->dia,&ps->mes,&ps->ano);
    getchar();
    printf("Digite um endereço: ");
    gets(ps->endereco);
    printf("Digite uma cidade: ");
    gets(ps->cidade);
    printf("Digite um estado: ");
    gets(ps->estado);
    printf("Digite um cep : ");
    gets(ps->cep);
    printf("\n\n");

    fwrite(ps, tam,1,p);
    fclose(p);

    cont++;

    p1 = fopen("contador.txt", "w");
    fprintf(p1,"%d",cont);
    printf("contador depois %d\n",cont);
    fclose(p1);
}

void lista(struct dados *ps, int tam)
{
    FILE *p, *p1;
    struct dados info;
    int i;
    int cont,comp;

    p1 = fopen("contador.txt", "r");
    fscanf(p1,"%d",&cont);
    fclose(p1);

    p = fopen("desafio.txt", "r");

    if(p == NULL)
        {
        puts("\nERRO\n");
        exit(1);
    }else{
        printf("\n================================\n");
        printf("Registros encontrados\n");
        printf("================================\n");
        while(fread(ps,sizeof(info),1,p)==1){
            printf("Nome: %s \n", ps->nome);
            printf("Data de nascimento: %d/%02d/%d \n", ps->dia,ps->mes,ps->ano);
            printf("Endereco: %s \n", ps->endereco);
            printf("Cidade: %s \n", ps->cidade);
            printf("Estado: %s \n", ps->estado);
            printf("CEP: %s \n", ps->cep);
            printf("\n\n");
        }

    }
    fclose(p);
}

char pesquisaNome(struct dados *ps, int tam)
{
    FILE *p;
    FILE *a;

    char nome1[20];
    int i, x;
    int cont;

    printf("Informe o nome: ");
    gets(nome1);

    p = fopen("desafio.txt", "r");
    a = fopen("contador.txt", "r");
    fscanf(a,"%d",&cont);
    fclose(a);

    printf("\n================================\n");
    printf("Registros encontrados\n");
    printf("================================\n");
    for(i=0;i<cont;i++)
    {
        fread(ps,tam,1,p);
        for(x = 0; nome1[x] != '\0';x++){
            if(nome1[x] != ps -> nome[x]){
                break;
            }
        }

    if(nome1[x] == '\0' && ps -> nome[x] == '\0')
    {
        printf("Nome: %s \n", ps->nome);
        printf("Data de nascimento: %d/%02d/%d \n", ps->dia,ps->mes,ps->ano);
        printf("Endereço: %s \n", ps->endereco);
        printf("Cidade: %s \n", ps->cidade);
        printf("Estado: %s \n", ps->estado);
        printf("CEP: %s \n", ps->cep);
        printf("\n\n");
        return i;
    }
    }
    printf("\nregistro não existe\n\n");
    return -1;
}

char pesquisaLetra(struct dados *ps, int tam)
{
    FILE *p;
    FILE *a;

    char letra;
    int i, x;
    int cont;

    printf("Informe uma letra para pesquisa: ");
    scanf("%c", &letra);

    p = fopen("desafio.txt", "r");
    a = fopen("contador.txt", "r");
    fscanf(a,"%d",&cont);
    fclose(a);

    printf("\n================================\n");
    printf("Registros encontrados\n");
    printf("================================\n");
    for(i=0;i<cont;i++)
    {
        fread(ps,tam,1,p);
        for(x = 0;x<cont;x++){
            if(letra != ps -> nome[0]){
                break;
            }
        }

    if(letra == ps -> nome[0])
    {
        printf("Nome: %s \n", ps->nome);
        printf("Data de nascimento: %d/%02d/%d \n", ps->dia,ps->mes,ps->ano);
        printf("Endereço: %s \n", ps->endereco);
        printf("Cidade: %s \n", ps->cidade);
        printf("Estado: %s \n", ps->estado);
        printf("CEP: %s \n", ps->cep);
        printf("\n\n");
        return i;
    }
    }
    printf("\nregistro não existe\n\n");
    return -1;
}

char pesquisaMes(struct dados *ps, int tam)
{
    FILE *p;
    FILE *a;

    int mes1;
    int i, x;
    int cont;

    printf("Informe um mês para pesquisa, Ex: 02: ");
    scanf("%d", &mes1);
    p = fopen("desafio.txt", "r");
    a = fopen("contador.txt", "r");
    fscanf(a,"%d",&cont);
    fclose(a);
    printf("%d\n",cont);

    printf("\n================================\n");
    printf("Registros encontrados\n");
    printf("================================\n");
    for(i=0;i<cont;i++)
    {
        fread(ps,tam,1,p);
        for(x = 0; x<cont;x++){
            if(mes1 != ps -> mes){
                break;
            }
        }

    if(mes1 == ps -> mes)
    {
        printf("Nome: %s \n", ps->nome);
        printf("Data de nascimento: %d/%02d/%d \n", ps->dia,ps->mes,ps->ano);
        printf("Endereço: %s \n", ps->endereco);
        printf("Cidade: %s \n", ps->cidade);
        printf("Estado: %s \n", ps->estado);
        printf("CEP: %s \n", ps->cep);
        printf("\n\n");
        return i;
    }
    }
    printf("\nregistro não existe\n\n");
    return -1;
}

char pesquisaCep(struct dados *ps, int tam)
{
    FILE *p;
    FILE *a;

    char cep1[10];
    int i, x;
    int cont;

    printf("Informe um cep para pesquisa: ");
    gets(cep1);

    p = fopen("desafio.txt", "r");
    a = fopen("contador.txt", "r");
    fscanf(a,"%d",&cont);
    fclose(a);
    printf("%d\n",cont);

    printf("\n================================\n");
    printf("Registros encontrados\n");
    printf("================================\n");
    for(i=0;i<cont;i++)
    {
        fread(ps,tam,1,p);
        for(x = 0; cep1[x] != '\0';x++){
            if(cep1[x] != ps -> cep[x]){
                break;
            }
        }
    if(cep1[x] == '\0' && ps -> cep[x] == '\0')
    {
        printf("Nome: %s \n", ps->nome);
        printf("Data de nascimento: %d/%02d/%d \n", ps->dia,ps->mes,ps->ano);
        printf("Endereço: %s \n", ps->endereco);
        printf("Cidade: %s \n", ps->cidade);
        printf("Estado: %s \n", ps->estado);
        printf("CEP: %s \n", ps->cep);
        printf("\n\n");
        return i;
    }
    }
    printf("\nregistro nao existe\n\n");
    return -1;
}


void altera(struct dados *ps, int tam)
{
    FILE *p;
    int n_reg;;
    int n_bytes;
    n_reg = pesquisaNome(ps, tam);     //pesquisa o registro no arquivo
    printf("altera registro: %d\n",n_reg);
    if(n_reg == -1){
         return;
    }
    n_bytes = tam * n_reg;
    p = fopen("desafio.txt", "r+");

    fseek(p,n_bytes,0);
    fread(ps, tam, 1, p );
    printf("Recebe dados para alteração: \n");
    printf("Digite um nome: ");
    gets(ps->nome);
    printf("Digite um aniversário, : ");
    scanf("%d/%d/%d", &ps->dia,&ps->mes,&ps->ano);
    getchar();
    printf("Digite um endereço: ");
    gets(ps->endereco);
    printf("Digite uma cidade: ");
    gets(ps->cidade);
    printf("Digite um estado: ");
    gets(ps->estado);
    printf("Digite um cep, : ");
    gets(ps->cep);
    printf("\n\n");
    fseek(p,n_bytes,0);
    fwrite(ps, tam,1,p);
    fclose(p);
}

void exclui(struct dados *ps, int tam)
{
    FILE *p;
    int n_reg;
    int n_bytes;
    n_reg = pesquisaNome(ps, tam);
    if(n_reg == -1){
         return;
    }
    p = fopen("desafio.txt", "r+");
    n_bytes = tam * n_reg;

    fseek(p,n_bytes,0);
    fread(ps, tam, 1, p );
    ps -> nome[0] = '*';

    fseek(p,n_bytes,0);
    fwrite(ps,tam,1,p);

    fclose(p);

}
