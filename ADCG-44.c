/* ARTHUR DA COSTA GUEDES - RA: 0026988 */

#include <stdio.h>
int main() {
int n,cont=0; scanf("%d",&n); while(n>0){ cont++; n/=10; } printf("Digitos=%d",cont);
return 0;
}
