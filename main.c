/******************************************************************************

HEX Calculator, still in progress

*******************************************************************************/
#include <stdio.h>
#include <stdbool.h>

int main()
{
    char hex[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    
    char result[8];
    
    int num = 460;
    bool check = true;
    int i = 7;
    
    while (num > 16){
       int rest = num % 16;
       result[i] =  hex[rest];
       i--;
       num = num /16;
       
       if (num < 16) {
           check = false;
       }
    }
    result[i] =  hex[num%16];
    for (int j = 0; j < 8; j++){
       printf("%c", result[j]); 
    }
    
    return 0;
}
