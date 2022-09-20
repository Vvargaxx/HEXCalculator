/******************************************************************************

HEX Calculator, still in progress

*******************************************************************************/
#include <stdio.h>
#include <stdbool.h>

int main()
{
    char hex[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    char result[8];
    
    printf("********************************************* \n\
**Bienvenido a la calculadora Hexadecimal****\n\
********************************************* \n\
Introduce el número decimal que quieres convertir: ");
    
    int num;
    scanf("%d", &num);
    bool check = true;
    int i = 7;
    
    while (check){
       int rest = num % 16;
       result[i] =  hex[rest];
       i--;
       num = num /16;
       
       if (num < 16) {
           check = false;
       }
    }
    result[i] =  hex[num%16];
    printf("El resultado es: "); 
    for (int j = 0; j < 8; j++){
        if (result[j] < '0' || result[j] > 'F'){
            continue;
        } else {
            printf("%c", result[j]);      
        }       
    }
    printf("\n");
    return 0;
}
