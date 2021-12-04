#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int dia;
    int mes;
    int ano;
}Data;

//#define finalizar false //ver se esse define tá certo
int main() { 

    //Declaração de vetores, variaveis e se precisar constantes;
    bool finalizar = false;//esse é o auxiliar para determinar se devemos ou não terminar o programa
    int opcao;//essa é a variável inteira que determinar se iremos pro case 1, 2 ou 3, respecticamente sendo o 
    //cadastro, consulta ou alteração de dados de produtos

    While(finalizar!=true)//Nesse While garantimos que o Switch fique rodando enquanto o usuário desejar realizar alguma função no sistema
    {
        printf("Digite 1 para realizar o cadastro, 2 para realizar a consulta de um produto e 3 para realizar
        a alteração dos dados de um produto:\n");
        scanf("%d",&opcao);//Aqui lemos o valor de opcao para determinar o que o usuario deseja fazer

        switch (opcao)//o switch 
        {
            case 1:
            cadastro();
            printf("Deseja continuar cadastrando ou deseja consultar(2) ou alterar um produto?")
            scanf("%d",&opcao);
            break;

            case 2:
            consulta();
            break;

            case 3:
            alterarProduto();
            break;
        }
    }
//Abaixo se encontram as funções que realizam cada tareda possível no código
    public void cadastro()
    {
        printf()
    }
     public void consulta()
    {
        
    }
     public void alterarProduto()
    {
        
    }

   
    return 0;
}