#include <stdio.h>

double primero = (7+7+8+9+9+10+8+8+8+8+6)/11.0;
double segundo = (7+10+7+8+9+9+9+10+10+9+7)/11.0;
double tercero = (9+9+9+8+10+10+9+10+9+9+9)/11.0;
double cuarto  = (9+9+8+10+10+10+10+9+9+8+8)/11.0; //primer cuatrimestre nada mas

int main(void) {
  printf("\nPromedios:\n\nPrimer ano: %.2f\nSegundo ano: %.2f\nTercer ano: %.2f\nCuarto ano: %.2f\n", primero, segundo, tercero, cuarto);
  return 0;
}