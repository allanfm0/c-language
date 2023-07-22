#include <stdio.h>

//incluindo a biblioteca
#include <time.h>

int main()
{
    //criando uma variavel do tipo primitivo time_t.
    time_t t;
    //funcao internal time() e pegando o endereco de t.
    time(&t);
    //Criando uma estrura, data esta apontando para a struc tm.
    struct tm *data;
    //Data e Hora local
    data = localtime(&t);

    // Pegando o DIA atual.
    int dia = data->tm_mday;
    // MÊS, somamos +1 porque dentro dessa biblioteca o Janeiro é considerado como o mês 0.
    int mes = data->tm_mon + 1;
    //ANO, somamos +1900 porque nessa bibliote o ano 0 é 1900.
    int ano = data->tm_year + 1900;
    //Pegando a hora atual.
    int hora = data->tm_hour;
    int min = data->tm_min;
    printf("Estamos no dia: %i do mes %i no ano de %i.", dia, mes, ano);
    printf("\nHORA ATUAL: %i:%i.", hora, min);
    return 0;
}