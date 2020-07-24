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
    /*
    #include <iostream>
#define size 12

using namespace std;

int main()
{
    double cash = 0;
    int x = 0;
    float value[size] = {0.01, 0.05, 0.10, 0.25, 0.50, 1.00, 2, 5, 10, 20, 50, 100};
    
    cin >> cash;

    cout << "NOTAS:" << endl;
    for (int i = 0; i < size; i++)
    {
        if ( cash >= value[size -1 -i])
        {
            x = cash / value[size -1 -i];
            cash -= x * value[size -1 -i];
        }
        cout << fixed;
        cout.precision(2);
        if ( value[size -1 -i] > 1 )
        {
            cout << x << " nota(s) de R$ " << value[size -1 -i] << endl;
        }
        if (value[size -1 -i] == 1)
        {
            cout << "NOTAS:" << endl;
        }
        
        if ( value[size -1 -i] <= 1)
        {
            cout << x << " moeda(s) de R$ " << value[size -1 -i] << endl;
        }
        x = 0;
    }
    

    return 0;
}
    
    */
