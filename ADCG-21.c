/* ARTHUR DA COSTA GUEDES - RA: 0026988 */

#include <stdio.h>

int main() {
float n;
printf("Digite um numero: ");
scanf("%f",&n);
if(n>0)
 printf("Positivo");
else if(n<0)
 printf("Negativo");
else
 printf("Zero");
return 0;
}
