#include <stdio.h>
    int main(){
        int hora_i=0, hora_f=0, min_i=0, min_f=0;
        scanf("%i %i %i %i", &hora_i, &min_i, &hora_f, &min_f);
        int x=0, y=0, tempo=0;
        x = ( hora_i * 60) + min_i;
        y = ( hora_f * 60) + min_f;
        if( x <= y){
            tempo = (x - y) * (-1);
        }
        else{
            tempo = (x - y);
        }
        x = tempo / 60;
        y = tempo % 60;
        printf(" %i:%i", x, y);
        return 0;
    }
