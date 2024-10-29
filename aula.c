#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>  
#include <time.h>

typedef struct {
    int nivel_bateria;      
    int sms_recebidos;     
    int ligacoes_recebidas;
    int ligacoes_realizadas; 
    int operadora;          
    float creditos;         
} Smartphone;

void atualizar_estado(Smartphone *phone) {
    phone->nivel_bateria -= rand() % 5 + 1; // Diminui de 1 a 5%
    phone->creditos -= (float)(rand() % 200 + 50) / 100; // Diminui de 0.5 a 1.5 reais
    phone->sms_recebidos += rand() % 4; // Recebe de 0 a 3 SMS
    phone->ligacoes_recebidas += rand() % 2; // Recebe de 0 a 1 ligação
    phone->ligacoes_realizadas += rand() % 2; // Realiza de 0 a 1 ligação

    // Garantindo que os valores não fiquem abaixo de zero
    if (phone->nivel_bateria < 0) phone->nivel_bateria = 0;
    if (phone->creditos < 0) phone->creditos = 0.0;
}

void mostrar_estado(Smartphone phone) {
    const char *operadoras[] = {"", "Tim", "Claro", "Vivo"};
    printf("Operadora: %s\n", operadoras[phone.operadora]);
    printf("Nível de Bateria: %d%%\n", phone.nivel_bateria);
    printf("SMS Recebidos: %d\n", phone.sms_recebidos);
    printf("Ligações Recebidas: %d\n", phone.ligacoes_recebidas);
    printf("Ligações Realizadas: %d\n", phone.ligacoes_realizadas);
    printf("Créditos: R$ %.2f\n", phone.creditos);
    printf("------------------------------\n");
}

int main() {
    Smartphone smartphone;
    smartphone.nivel_bateria = 100;
    smartphone.sms_recebidos = 0;
    smartphone.ligacoes_recebidas = 0;
    smartphone.ligacoes_realizadas = 0;
    smartphone.creditos = 50.0;

    printf("Escolha a operadora (1 - Tim, 2 - Claro, 3 - Vivo): ");
    scanf("%d", &smartphone.operadora);

    // Inicializando o gerador de números aleatórios
    srand(time(NULL));

    while (smartphone.nivel_bateria > 0 && smartphone.creditos > 0) {
        atualizar_estado(&smartphone);
        mostrar_estado(smartphone);
        usleep(5000000); // Aguardar 5 segundos (5000000 microsegundos)
    }

    printf("Simulação encerrada.\n");
    return 0;
}