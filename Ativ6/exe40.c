// Nome: Gabriel Silva Della Vedova
// Turma: 2A
// 40.Use instruções if..else para gerar algum texto dependendo da hora.

#include <stdio.h>
#include <time.h>
int main() {
    struct tm *data_hora_atual;
    //variável do tipo time_t para armazenar o tempo em segundos  
    time_t segundos;
  
  //obtendo o tempo em segundos  
    time(&segundos);   
  
  //para converter de segundos para o tempo local  
  //utilizamos a função localtime  
    data_hora_atual = localtime(&segundos);  
    printf("Hora: %d\n", data_hora_atual->tm_hour);

    switch (data_hora_atual->tm_hour)
    {
    case 0:
        printf("Já acabou o dia!! Vai dormir que é bom!\n");
        break;
    case 1:
        printf("Mano 1h da manhã! Pode ir dormir agora porque eu sei que você quer madrugar...\n");
        break;
    case 2:
        printf("De novo, vai dormir! Não é saudável ficar acordado a essa hora.\n");
        break;
    case 3:
        printf("Desisto cara! Faz o que você quiser, já que não faz diferença pra mim mesmo o que você faz!!!\n");
        break;
    case 4:
        printf("Ainda acordado?!?!\n");
        break;
    case 5:
        printf("Bom dia trabalhador! Já tava na hora de acordar o galo!\n");
        break;
    case 6:
        printf("Esse galo incomoda mesmo né para continuar com o soninho bom?!\n");
        break;
    case 7:
        printf("Mano já tá na hora de ir trabalhar não acha não? TU acha que a vida é um mar de flores?\n");
        break;
    case 8:
        printf("Vou te deixar em paz agora porque sei que tá trabalhando.\n");
        break;
    case 9:
        printf("Sim meu amigo vai comer alguma coisa!!!\n");
        break;
    case 10:
        printf("Para de enrolação e trabalha!\n");
        break;
    case 11:
        printf("Sei que está com fome, mas aguenta as pontas aí porque falta pouco!\n");
        break;
    case 12:
        printf("Vai ser feliz aí almoçando depois eu volto a te infernizar de novo.\n");
        break;
    case 13:
        printf("Larga o celular e vai trabalhar! Já acabou o intervalo do almoço!\n");
        break;
    case 14:
        printf("Que sono bom bateu agora, né?\n");
        break;
    case 15:
        printf("Hora mais entediante do dia...\n");
        break;
    case 16:
        printf("Tá essa é a hora mais chata mesmo.\n");
        break;
    case 17:
        printf("Falta pouco pra chegar em casa! Falta pouco!\n");
        break;
    case 18:
        printf("Mano você agora está livre, mas irá enfrentar um trânsito infernal. Boa sorte!\n");
        break;
    case 19:
        printf("Ainda está preso no ônibus, né?\n");
        break;
    case 20:
        printf("Agora você pode comer o seu pão com mortadela e assistir Gray's Anatomy.\n");
        break;
    case 21:
        printf("Pode dormir agora ou assistir TV só mais um pouquinho...\n");
        break;
    case 22:
        printf("Bom agora é bom você dormir agora...\n");
        break;
    case 23:
        printf("Mano se você dormir agora terá uma noite de sono legal...\n");
        break;
    
    default:
        break;
    } 
}

