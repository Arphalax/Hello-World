#include <stdio.h>

#include <stdlib.h>

typedef struct cosa{
  int valorcito;
  char clave;
  struct cosa *next;
} cosita;

int main (int argc, char *argv[]){
  cosita algo;
  cosita *inicio;
  cosita *actual;
  cosita *temporal;

  cosita *recorre;
  int retorno;
  retorno = 0;

  //ejemplo variable simple:
  
  algo.valorcito = 1; 
  algo.clave = 'A';
  
  printf("values set as\nvalorcito is %d \nclave is %c\n", algo.valorcito, algo.clave);

  //ejemplo apuntadores:
  inicio = malloc( sizeof(cosita) );
  actual = malloc( sizeof(cosita) );
  
  if ( inicio != NULL ){
    inicio->valorcito = 90;
    inicio->clave = 'X';
    
    printf("Structure generated...\
     \nvalorcito is %d \nclave is %c\n", \
      inicio->valorcito, inicio->clave);
    actual->valorcito = 70;
    actual->clave = 'N';
    //aqui enlazamos el segundo elemento con el primero:
    inicio->next = actual;
    //creamos otro, pero guardamos un apuntador al elemento mas reciente:
    temporal = actual;
    actual = malloc( sizeof(cosita) );
    //ponemos valores:
    actual->valorcito = 300;
    actual->clave = 'Q';
    actual->next = NULL;
    temporal->next = actual;

    
    //asÃÃÃi pueden ir enlazando un nuºmero artrario de elementos
    //sin olvidar que cada uno ocupa memoria
    
    //solo necesitamos recordar el apuntador al primer elememt
    
    //imprimir todos los elememtos de la lista.
    //es un recorrido secuencial
    recorre = inicio; //tomamos el primer apuntador
    
    //imprimimos/leemos sus valores:
    printf ("el primer valorcito es : %d\n", recorre->valorcito);
    //para acceder al siguiente, reemplazamos apuntador:
    recorre = recorre->next;
    //ahora "recorre" apunta al segundo elemento 
    printf ("el segundo valorcito es : %d\n", recorre->valorcito);
    //reemplazam9s de nuevo:
    recorre = recorre->next;
    printf ("el tercer valorcito es : %d\n", recorre->valorcito);
    //debemos reflexionar que si recorremos la lista con un loop
    //la forma de saber que ya no hay mas elementos es revisar
    //que next es null, pero eso solo funciona
    //si cuamdo creamos cada elemento al final de la lista
    //som0s lo suficientemente disciplinados para inicializar
    //en next null. de lo contrario...
  }
  else{
    retorno = -3;

  }//fin else no hubo memoria

  //TAREA: ya viste como se recorre la lista.
  //cada elememto que pusimos en la lista tiene que
  //ser liberado aquui al final,
  //implementla la limoieza de la lista.
  //free(inicio);
  return retorno;



}//end main
