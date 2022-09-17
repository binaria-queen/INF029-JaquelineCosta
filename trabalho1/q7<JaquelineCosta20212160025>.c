//QUESTÃO 7
#include <stdio.h>
#include <stdlib.h>
int main(){
  
  // estrutura de dados
  int linha, coluna, l, c, jogador, ganhou, qtdjogadas, opcao;
  char jogo[3][3];
  do{
    jogador = 1;
    ganhou = 0;
    qtdjogadas = 0;
      //como inicializar a estrutura de dados
      for (linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 3; coluna ++){
          jogo[linha][coluna]= ' ';      
        }
      }
        do{
            //imprimir jogo
            printf("\n\n\t 0  1  2 \n\n");
            for(linha = 0; linha < 3; linha++){
              for(coluna = 0; coluna < 3; coluna++){
                if(coluna == 0)
                printf("\t");
                printf(" %c ", jogo[linha][coluna]);
                if(coluna < 2)
                  printf("|");
                if(coluna == 2)
                  printf("\t\t%d", linha);
                
              }
              if(linha < 2)
                printf("\n\t------------");
                printf("\n");
            } 
          //ler coordenadas
          do{
            printf("\nJOGADOR %d: Digite a linha e a coluna que deseja jogar: ", jogador);
            scanf("%d %d", &l, &c);
            }while(l < 0 || l > 2 || c < 0 || c > 2 || jogo[l][c] != ' ');
          
          //salvar coordenadas
          if (jogador == 1){
            jogo[l][c] = '0';
            jogador ++;
          }else{
            jogo[l][c] = 'X';
            jogador = 1;
          }
          qtdjogadas ++;
          //alguém ganhou por linha
          if(jogo[0][0] == '0' && jogo[0][1] == '0' && jogo[0][2] == '0' ||
             jogo[1][0] == '0' && jogo[1][1] == '0' && jogo[1][2] == '0' ||
             jogo[2][0] == '0' && jogo[2][1] == '0' && jogo[2][2] == '0'){
              printf("\nO jogador 1 venceu por linha! Parabéns!\n");
            ganhou = 1; }
          
          if(jogo[0][0] == 'X' && jogo[0][1] == 'X' && jogo[0][2] == 'X' ||
             jogo[1][0] == 'X' && jogo[1][1] == 'X' && jogo[1][2] == 'X' ||
             jogo[2][0] == 'X' && jogo[2][1] == 'X' && jogo[2][2] == 'X'){
              printf("\nO jogador 2 venceu venceu por linha!  Parabéns!\n");
                ganhou = 1;
             }
          
          //alguem ganhou por coluna 
          if(jogo[0][0] == '0' && jogo[1][0] == '0' && jogo[2][0] == '0' ||
             jogo[0][1] == '0' && jogo[1][1] == '0' && jogo[2][1] == '0' ||
             jogo[0][2] == '0' && jogo[1][2] == '0' && jogo[2][2] == '0' ){
                printf("\nO jogador 1 venceu por coluna! Parabéns!\n");
            ganhou = 1;}
          
          if(jogo[0][0] == 'X' && jogo[1][0] == 'X' && jogo[2][0] == 'X' ||
             jogo[0][1] == 'X' && jogo[1][1] == 'X' && jogo[2][1] == 'X' ||
             jogo[0][2] == 'X' && jogo[1][2] == 'X' && jogo[2][2] == 'X' ){
                printf("\nO jogador 2 venceu por coluna! Parabéns!\n");
            ganhou = 1;
            }
            
          //alguem ganhou por diagonal principal 
          if(jogo[0][0] == '0' && jogo[1][1] == '0' && jogo[2][2] == '0'){
              printf("\nO jogador 1 venceu por coluna! Parabéns!\n");
            ganhou = 1;}
            
          if(jogo[0][0] == 'X' && jogo[1][1] == 'X' && jogo[2][2] == 'X'){
              printf("\nO jogador 2 venceu por coluna! Parabéns!\n");
            ganhou = 1;}
          //alguem ganhou por diagonal secundaria 
            
          if(jogo[0][2] == '0' && jogo[1][1] == '0' && jogo[2][0] == '0'){
              printf("\nO jogador 1 venceu por coluna! Parabéns!\n");
            ganhou = 1;}
          if(jogo[0][2] == 'X' && jogo[1][1] == 'X' && jogo[2][0] == 'X'){
              printf("\nO jogador 2 venceu por coluna! Parabéns!\n");
            ganhou = 1;}
      }while(ganhou == 0 && qtdjogadas < 9);
    if(ganhou == 0)
      printf("\nJogo finalizado sem ganhadores\n");
    printf("\n Deseja jogar de novo? Digite 1 para começar \n");
    scanf("%d", &opcao);
    }while(opcao == 1);
    
  
return 0;
  
}

