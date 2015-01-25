
#include <stdio.h>
//#include <conio.h>
#include <stdlib.h>
#include <time.h>
int lanzarDados (void);

int Craps(void);
int main()
{
    int resultado;
    int saldo=10000;
    int apuesta=0;
    
       printf("\n Tu saldo :10000 ");
       while(saldo>0)
       { 
         
            printf("\n\nCuanto quieres apostar: ");
               scanf("%d",&apuesta);
                  if(apuesta>saldo)
                     printf("Que apostaste?, ingrese un valor menor a 10,000\n\n");
                  else

                          resultado= Craps();
             
                   if(resultado==1)
              {
                       saldo = saldo + apuesta; 
                          printf("\nTu saldo: %d", saldo);
                                                            }
              
                   else
             {
             saldo = saldo - apuesta;
             printf("\nTu saldo: %d", saldo);
             }
}//Fin while, mantiene corriendo el programa hasta que 
             if(saldo==0)
             {
             printf("\n\nYa no hay saldo");
             }
    //getch();
    return 0;
}

int Craps(void)
{
int estatusJuego, suma, miPunto;
    srand(time(NULL));    
    suma=lanzarDados();    //ejecutar un lanzamiento de dados
    switch(suma)
           {
             case 7: case 11:
                            estatusJuego=1;    //Gana en el primer tiro
                            break;
             case 2: case 3: case 12:
                                   estatusJuego=2;
                                             //Pierde en el primer tiro
                                   break;
             default:
                     estatusJuego=0;    //Guardar punto y seguir jugando
                     miPunto=suma;
                     printf("\nTu punto es: %d\n", miPunto);
                     break;
             }
             
     while(estatusJuego== 0)     //Seguir jugando
          {
           suma=lanzarDados();
           
           if (suma == miPunto)
               estatusJuego=1;         //El jugador Gana
           else
               if(suma == 7)
                  estatusJuego=2;     //El jugador pierde
          
          }
    
    if (estatusJuego == 1)
        printf("\nGanaste!");
    else
        printf("\nPerdiste");
        
    return estatusJuego;

}
int lanzarDados(void)       //Cuerpo de la función lanzarDados()
{
  int dado1,dado2, sumaTemp;
  
  dado1=1 + (rand()%6); /*Asignar a dado1 y dado2 un valor aleatorio 
                         entre 1 y 6   */
  dado2=1 + (rand()%6);
  
  sumaTemp= dado1 + dado2;    //calcular la suma de dado1 y dado2
  
  //imprimir valores obtenidos
  printf("\nEl jugador tira: %d + %d = %d\n", dado1,dado2,sumaTemp);
  //getch();
  
  return sumaTemp;   //Regresar el valor sumado
}



