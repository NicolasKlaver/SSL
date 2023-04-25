#include <stdio.h>


int main() {
   FILE *archivo;
   archivo = fopen("output.txt", "w");
   
   if (archivo == NULL) {
      printf("Error al abrir el archivo.");
      return 1;
   }
   
   fprintf(archivo, "Hello world");
   fclose(archivo);
   
   return 0;
}
