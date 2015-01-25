
/*Prgrama para test de 10 preguntas con 4 opciones de respuesta multiple y arrojar un resultado
          Jonatan Santa Cruz Soria 5IM4 Code Combat*/
           #include <stdio.h>
           
           
           int main()
           {
               int respuesta;
               int resa=0, resb=0, resc=0, resd=0;
               
                    printf("\nIntroduzca el numero correspondiente \nEl test tiene una compatibilidad muy baja\nPero hazlo de todos modos (click para continuar)");
                    getch();
                 printf("\n1-¿Cuando te sientes mejor?");
                 printf("\n1- Por la manana");
                 printf("\n2- Por la tarde");
                 printf("\n3- De noche");
                 printf("\n4- Me da igual");
                 printf("\nMi espuesta es:  "); 
                                     scanf("%i",&respuesta);


                   if(respuesta == 1)
                  {
                    resa++;
                  }
                  else if(respuesta==2)
                  {
                   resb++;
                  }
                  else if(respuesta==3)
                  {
                   resc++;
                  }
                   else if(respuesta==4)
                  {
                      resd++;           
                  }
                  else
                  {
                      printf("\nNumero incorrecto");
                  }
                            
                 
                 printf("\n2-¿Por lo general caminas");
                 printf("\n1- Lento");
                 printf("\n2- Rapido");
                 printf("\n3- Muy Rapido");
                 printf("\n4- Ni camino");
                 printf("\n Mi respuesta es:  ");
                 scanf("%i",&respuesta);
                 
                 switch (respuesta)
                 {
                        case 1:
                             resa++;
                             break;
                        case 2: 
                             resb++;
                             break;
                        case 3:
                             resc++;
                             break;
                        case 4:
                             resd++;
                             break;
                        default:
                                printf("\nNumero invalido");
                        
                 }
                        
                
                            
                  
                 printf("\n3-Cuando hablas con personas, tu");
                 printf("\n1-Tienes los brazos cruzados");
                 printf("\n2-Tienes las manos juntas");
                 printf("\n3-Manos en cadera");
                 printf("\n4-Ni te fijas");
                  printf("\nMi espuesta es:  ");
                                      scanf("%i",&respuesta);
                 
                 switch (respuesta)
                 {
                        case 1:
                             resa++;
                             break;
                        case 2: 
                             resb++;
                             break;
                        case 3:
                             resc++;
                             break;
                        case 4:
                             resd++;
                             break;
                        default:
                                printf("\nNumero invalido");
                        
                 }
                            
                  
                  
                 printf("\n4-Cuando te relajas");
                 printf("\n1-Doblas las rodillas");
                 printf("\n2-Piernas cruzadas");
                 printf("\n3-Piernas extendidas");
                 printf("\n4-Te desparramas en donde sea");
                  printf("\nMi espuesta es:  ");
                                      scanf("%i",&respuesta);
                 
                 switch (respuesta)
                 {
                        case 1:
                             resa++;
                             break;
                        case 2: 
                             resb++;
                             break;
                        case 3:
                             resc++;
                             break;
                        case 4:
                             resd++;
                             break;
                        default:
                                printf("\nNumero invalido");
                        
                 }
                  
                  
                  
                
                 printf("\n5- Cuando algo te divierte");
                 printf("\n1-Me carcajeo");
                 printf("\n2-Pequeña risa");
                 printf("\n3-Sonrio");
                 printf("\n4-Nada me divierte");
                  printf("\nMi espuesta es:  ");
                                      scanf("%i",&respuesta);
                 
                 switch (respuesta)
                 {
                        case 1:
                             resa++;
                             break;
                        case 2: 
                             resb++;
                             break;
                        case 3:
                             resc++;
                             break;
                        case 4:
                             resd++;
                             break;
                        default:
                                printf("\nNumero invalido");
                        
                 }
                  
                 
                  
                   printf("\n6- Cuando vas a una fiesta haces");
                 printf("\n1-Entrada riudosa");
                 printf("\n2-Entrada discreta");
                 printf("\n3-Solo llegas a sentarte");
                 printf("\n4-Ni te invitan a fiestas");
                  printf("\nMi espuesta es:  ");
                                      scanf("%i",&respuesta);
                 
                 switch (respuesta)
                 {
                        case 1:
                             resa++;
                             break;
                        case 2: 
                             resb++;
                             break;
                        case 3:
                             resc++;
                             break;
                        case 4:
                             resd++;
                             break;
                        default:
                                printf("\nNumero invalido");
                        
                 }
                  
                  
                   printf("\n7- Si te interrumpen a trabajar tu");
                 printf("\n1-Lo agredo");
                 printf("\n2-Me enojo bastante");
                 printf("\n3-Solo le digo que hizo mal");
                 printf("\n4-Me da igual");
                  printf("\nMi espuesta es:  ");
                                      scanf("%i",&respuesta);
                 
                 switch (respuesta)
                 {
                        case 1:
                             resa++;
                             break;
                        case 2: 
                             resb++;
                             break;
                        case 3:
                             resc++;
                             break;
                        case 4:
                             resd++;
                             break;
                        default:
                                printf("\nNumero invalido");
                        
                 }
                 
                 
                   printf("\n8- Que color te gusta mas?");
                 printf("\n1-Rojo");
                 printf("\n2-Azul");
                 printf("\n3-Otro");
                 printf("\n4-Me da exactamente lo mismo");
                  printf("\nMi espuesta es:  ");
                                      scanf("%i",&respuesta);
                 
                 switch (respuesta)
                 {
                        case 1:
                             resa++;
                             break;
                        case 2: 
                             resb++;
                             break;
                        case 3:
                             resc++;
                             break;
                        case 4:
                             resd++;
                             break;
                        default:
                                printf("\nNumero invalido");
                        
                 }
                  
                  
                  
                  
                   printf("\n9- De que forma duermes");
                 printf("\n1-Boca arriba");
                 printf("\n2-Boca abajo");
                 printf("\n3-De lado");
                 printf("\n4-Como sea");
                  printf("\nMi espuesta es:  ");
                                      scanf("%i",&respuesta);
                 
                 switch (respuesta)
                 {
                        case 1:
                             resa++;
                             break;
                        case 2: 
                             resb++;
                             break;
                        case 3:
                             resc++;
                             break;
                        case 4:
                             resd++;
                             break;
                        default:
                                printf("\nNumero invalido");
                        
                 }
                  
                  
                  
                  
                   printf("\n10- Sueñas mas que estas");
                 printf("\n1-Cayendo");
                 printf("\n2-Luchando");
                 printf("\n3-Volando");
                 printf("\n4-Ni me acuerdo");
                  printf("\nMi espuesta es:  ");
                                      scanf("%i",&respuesta);
                 
                 switch (respuesta)
                 {
                        case 1:
                             resa++;
                             break;
                        case 2: 
                             resb++;
                             break;
                        case 3:
                             resc++;
                             break;
                        case 4:
                             resd++;
                             break;
                        default:
                                printf("\nNumero invalido");
                        
                 }
                  printf("\nClick para continuar");
                  getch();
                   printf("\n10: %i", resa);
                 printf("\n10: %i", resb);
                 printf("\n10: %i", resc);
                 printf("\n10: %i", resd);
                 
                 if (resa>resb && resa>resc && resa>resd)
                 {
                               printf("\nA es mayor");
                               printf("Pretende hacer lo correcto y se esfuerza por mejorar las cosas. Es idealista, perfeccionista, crítico, disciplinado y ordenado.");
                 }
                 else if (resb>resa && resb>resc && resb>resd)
                 {
                          printf("\nBusca crear y rodearse de cosas bellas, suele sentir lo contrario que el grupo (individualista). Es romántico, creativo, temperamental, sensible y compasivo, tiene la profunda necesidad de conmover. Busca un salvador.");
                 }
                 else if (resc>resa && resc>resb && resc>resd)
                 {
                          printf("\nAmbiciona tener el control de las situaciones, probar su fuerza y resistir la debilidad. Es autoritario, dominante, vengativo, rebelde, apasionado, decidido y autónomo.");
                 }
                 else if (resd>resa && resd>resc && resb>resb)
                 {
                          printf("\nD Literalmente, te vale la vida");
                 }
                 else
                 {
                     printf("\nAmbiciona tener el control de las situaciones, probar su fuerza y resistir la debilidad. Es autoritario, dominante, vengativo, rebelde, apasionado, decidido y autónomo.");
                 }
               getch();
           }//Fin de main
          

