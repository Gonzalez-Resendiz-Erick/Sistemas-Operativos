#include <stdio.h>

int main(){
    int op;
    float n3, n1, n2;
    do
    {
        printf("\n  ***** MENU CALCULADORA *****");
        printf("\n\n  1. SUMA");
        printf("\n  2. RESTA");
        printf("\n  3. MULTIPLICACION");
        printf("\n  4. DIVISION");
        printf("\n  5. SALIR");
        do
        {
            printf("\n  Escribe una opcion\n"); 
            scanf("\n %d", &op);
        } while (op < 1 || op > 5 );

        switch (op)
        {
        case 1:
            
            break;
        case 2:
            
            break;
        case 3:
            
            break;
        case 4:
            printf("\n  Introduzca el dividendo\n");
            scanf("\n %f",&n1);
            printf("\n  Introduzca el divisor\n");
            scanf("\n   %f",&n2);
            if (n2 !=0)
            {
                n3= n1 / n2;
                printf("\n  El resultado es:");
                printf("\n  %.2f",n3);
            }else
            {
                printf("\n  No se puede dividir entre CERO");
            }
            
            
            break;
        }
        
    } while (op != 5);
    
}