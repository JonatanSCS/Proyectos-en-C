/*Programa que recive Velocidad y angulo y devuelve Rango de alcance, Altura max, Tiempo de vuelo
               Jonatan Santa Cruz Soria 5IM4*/

#include <stdio.h>
//#include <conio.h>
#include <math.h>
//Variables
double gravedad, velocidad, angulo, rango, altura, tiempo, pi=3.14159265359;
int salir;

//Operación para tiempo de vuelo
double opetiempo (double);

//Operación para altura maxima
double opealtura (double);

//Operación de rango
double operango (double);


//Operación de cambio de grados a radianes
double opeangulo (double);

//Inicio de main
int main()
{
  int opcion =1;
  while (opcion !=0){

  printf("\nEste es un programa donde puedes calcular\ndatos de tiro parabolico ingresando \nvelocidad y angulo (en diferentes planetas)\n ");
  printf("\nSeleccione un planeta:");

  //Inicio de condicionales planetas
  int reiniciar =1;
  while (reiniciar != 0){
      
  printf("\n1-Mercurio\n2-Venus\n3-Tierra\n4-Marte\n5-Jupiter\n6-Saturno\n7-Urano\n8-Neptuno\n9-Pluton\n");
  scanf("%lf", &gravedad);
  
  if (gravedad==1) 
    
  {
    gravedad = 3.78;
    printf("\nOprima 0 para continuar o 1 para elegir otro planeta ");

    
  }
  else if (gravedad==2)
  {
    gravedad = 8.60;
    printf("\nOprima 0 para continuar o 1 para elegir otro planeta ");
    
    
  }
  else if (gravedad==3)
  {
    gravedad = 9.78;
    printf("\nOprima 0 para continuar o 1 para elegir otro planeta ");
    
    
  }
  else if (gravedad==4)
  {
    gravedad = 3.72;
    printf("\nOprima 0 para continuar o 1 para elegir otro planeta ");
    
    
  }
  else if (gravedad==5)
  {
    gravedad = 22.9;
    printf("\nOprima 0 para continuar o 1 para elegir otro planeta ");
    
    
  }
  else if (gravedad==6)
  {
    gravedad = 9.05;
    printf("\nOprima 0 para continuar o 1 para elegir otro planeta ");
    
    
  }
  else if (gravedad==7)
  {
    gravedad = 7.77;
    printf("\nOprima 0 para continuar o 1 para elegir otro planeta ");
    
    
  }
  else if (gravedad==8)
  {
    gravedad = 11.0;
    printf("\nOprima 0 para continuar o 1 para elegir otro planeta ");
    
    
  }
  else if (gravedad==9)
  {
    gravedad = .03;
    printf("\nOprima 0 para continuar o 1 para elegir otro planeta ");
    

  }
  else 
  {
    printf("\nNo escribiste un numero valido, oprime un numero para reelegir\n");  

    
  }
  scanf("%d", &reiniciar);

}
  //Fin de condicional

   //Se pide el dato de velocidad
    printf("\nIntroduzca Su velocidad: ");      
    scanf("%lf",&velocidad);
   //Se pide el dato de ángulo
    printf("\nIntroduzca Su angulo: ");      
    scanf("%lf",&angulo);
    

    //Se entrega el dato de Rango de alcance
    rango=operango(velocidad);
     printf("\nEl rango de alcance es de: ");
     printf("%lf", rango);
     printf(" metros" );

     //Se entrega el dato de altura maxima
    altura=opealtura(velocidad);
     printf("\nLa altura maxima es de: ");
     printf("%lf", altura);
     printf(" metros" );

     //Se entrega el dato de tiempo
    tiempo = opetiempo(velocidad);
     printf("\nEl tiempo de vuelo es: ");
     printf("%lf", tiempo);
     printf(" segundos" );

printf("\nPara realizar otro calculo precione 1, si desea salir presione 0\n");
scanf("%d", &opcion);
}



    //getch();
}//Fin de main

//Funcion del rango
 double operango (double rango)
 {
                
       double radian=((pi*angulo)/180);
       rango=  ((velocidad*velocidad)* (sin(2*radian)))/gravedad;
      return rango;
 }
//Funcion donde convierte de grados a radianes    
 double opeangulo (double radian)
 {
        radian = angulo+2;
        return radian;
 }
//Funcion de la altura
double opealtura (double altura)
{
      double radian=((pi*angulo)/180);
      altura = (velocidad*sin(radian))*(velocidad*sin(radian))/(2*gravedad);
        return altura;
}
//Funcion del tiempo
double opetiempo (double tiempo)
{
     double radian=((pi*angulo)/180);
     tiempo = ((2*velocidad)*(sin(radian)))/gravedad;
     
     return tiempo; 
}
