/* ARTHUR DA COSTA GUEDES - RA: 0026988 */

#include <stdio.h>
int main() {
int n,i=2,primo=1; scanf("%d",&n); while(i<n){ if(n%i==0) primo=0; i++; } if(primo) printf("Primo"); else printf("Nao primo");
return 0;
}
