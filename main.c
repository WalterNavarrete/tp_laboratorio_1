#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#include "operacionesMat.h"

/*Variables globales*/
float val1 = 0.0;
float val2 = 0.0;
float resultado = 0.0;

/*Funciones*/
void LimpiarValores();
void OperarTodo(float,float);

/*Main*/
int main()
{
    char seguir='s';
    int opcion=0;

    while(seguir=='s')
    {
        if (resultado > 0.0)
        {
            LimpiarValores();
        }
        /*Cargo el Menu*/
        CargarMenu(val1,val2);

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                system("cls");
                 val1 = getFloat("Ingrese 1er operando: ");
                break;
            case 2:
                system("cls");
                val2 = getFloat("Ingrese 2do operando: ");
                break;
            case 3:
                MostrarResultado("-La suma es ",Sumar(val1,val2));
                LimpiarValores();
                break;
            case 4:
                MostrarResultado("-La resta es ",Restar(val1,val2));
                LimpiarValores();
                break;
            case 5:
                if(ValidoCeros(val2)>0);
                {
                    MostrarResultado("-La division es ",Dividir(val1,val2));
                }
                LimpiarValores();
                break;
            case 6:
                 MostrarResultado("-La multiplicacion es ",Multiplicar(val1,val2));
                 LimpiarValores();
                break;
            case 7:
                MostrarResultado("-El Factorial es ",Factorial(val1));
                LimpiarValores();
                break;
            case 8:
                if(ValidoCeros(val2)>0)
                {
                    OperarTodo(val1,val2);
                }
                LimpiarValores();
                break;
            case 9:
                seguir = 'n';
                break;
            default:
                printf("Opcion incorecta....");
                system("PAUSE");
                break;
        }
    }

    return 0;
}


/**
 * \brief Limpia las variables globales para seguir operando
 *
 */
void LimpiarValores()
{
     val1=0.0;
     val1=0.0;
     resultado = 0.0;
}

void OperarTodo(float val1,float val2)
{
    int i = 0;
    float vecResult[4];
    char NombresOp[4][20];

    char strS[20]  = "-La suma";
    char strR[20]  = "-La resta";
    char strD[20]  = "-La division";
    char strM[20]  = "-La multiplicacion";
    char strF[20]  = "-El factorial";
    /*Cargo array de Nombres de Operaciones*/
    strcpy(NombresOp[0],strS);
    strcpy(NombresOp[1],strR);
    strcpy(NombresOp[2],strD);
    strcpy(NombresOp[3],strM);
    strcpy(NombresOp[4],strF);
    /*Cargo array de Resultados de Operaciones*/
    vecResult[0] = Sumar(val1,val2);
    vecResult[1] = Restar(val1,val2);
    vecResult[2] = Dividir(val1,val2);
    vecResult[3] = Multiplicar(val1,val2);
    vecResult[4] = Factorial(val1);
    /*Muestro Resultado de Operaciones*/
    for(i=0; i<5;i++)
    {
        printf("%s es %.2f \n",NombresOp[i],vecResult[i]);
    }
    system("PAUSE");

}
