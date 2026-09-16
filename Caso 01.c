#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
     char esp[50], nome[50];
     int ida, opc;

     printf("Solicitação de agendamento\n");
     printf("Digite seu nome completo:\n");
     scanf ("%s", &nome);
     printf("Qual sua idade? ");
     scanf("%i",&ida);
     printf("Qual o tipo de clinico você deseja ser atendido?\n");
     scanf("%s", &esp);
     printf("vc deseja agenadar um horario? (1- sim, 2- não)\n");
     scanf("%d", &opc);


     if (opc==1) {
        printf("\nOK! Siga a tabela de horarios abaixo:\n\n");

        printf("=====================================\n");
        printf("|        HORARIOS DA CLINICA        |\n");
        printf("=====================================\n");
        printf("| 1 | 08:00 - 08:30 | Disponivel    |\n");
        printf("| 2 | 08:30 - 09:00 | Disponivel    |\n");
        printf("| 3 | 09:00 - 09:30 | Disponivel    |\n");
        printf("| 4 | 09:30 - 10:00 | Disponivel    |\n");
        printf("| 5 | 10:00 - 10:30 | Disponivel    |\n");
        printf("| 6 | 10:30 - 11:00 | Disponivel    |\n");
        printf("| 7 | 14:00 - 14:30 | Disponivel    |\n");
        printf("| 8 | 14:30 - 15:00 | Disponivel    |\n");
        printf("| 9 | 15:00 - 15:30 | Disponivel    |\n");
        printf("|10 | 15:30 - 16:00 | Disponivel    |\n");
        printf("=====================================\n");

    } else if (opc == 2) {

        printf("\nAgendamento cancelado.\n");

    } else {

        printf("\nOpcao invalida!\n");
    }

    return 0;
}

 
