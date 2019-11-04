#include <stdio.h>
    int main(){
        int cedula[7]={100, 50, 20, 10, 5, 2, 1}, grana=0;
        int i=0, j=0, valor=0, cont=0;
        scanf("%i", &grana);
        for ( i = 0; i < 7; i++)
        {
           if( grana >= cedula[i]){
               do{
                   if( cedula[i] > grana){
					   break;
                   }
                   grana = grana - cedula[i];
                   cont++;
               }while (grana != 0);
           }
           printf("%i nota(s) de R$ %i\n", cont, cedula[i]);
           cont = 0;
        }
     return 0;   
    }
    
    
    
