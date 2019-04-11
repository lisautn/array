#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CANTIDAD_ALUMNOS 4


 /*array en paralelos
son matrices
atributo de elemento (nombre (cadena de caracteres char), edad (int entero) ,
                       nota , apellido) de alumno es el elemento
regla elemento con los datos cargado
          nombre =2
 alumno   apellido
          edad
*/
void getString  (char mensaje [] , char input []);
int  getString  (char mensaje [] , char input []);
int  getString  (char mensaje [] , char input []);

int main()
{
  char nombre  [CANTIDAD_ALUMNOS][50]={"jose"  ,"camila" ,"martin" , "lucio" };
  char apellido[CANTIDAD_ALUMNOS][50]=("candia","lopez"  ,"gimenez" ,"peña" );
  int edad     [CANTIDAD_ALUMNOS]    =(17 , 20, 60, 51);
  int nota     [CANTIDAD_ALUMNOS]    = (1 ,  7,  8,   9);

  int i;
  for(i=0; i<CANTIDAD_ALUMNOS ;i++)
   {
      if (nombre[i]  != -1)
      {
          printf("\n nombre : %s apellido : %s ", nombre [i], apellido [i]);
      }
   }


    return 0;
}





