#include <stdio.h>
#include <stdlib.h>

/**
 * \brief Solicita un número al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return El número ingresado por el usuario
 *
 */
float getFloat(char mensaje[])
{
    float auxiliar;
    printf("%s",mensaje);
    scanf("%f",&auxiliar);
    return auxiliar;
}
/**
 * \brief Muestra el pantalla el Menu de opciones para el usuario
 * \param 1er operando
 * \param 2do operando
 *
 */
void CargarMenu(float val1,float val2)
{
        system("cls");
        printf("1- Ingresar 1er operando (A = %.2f )\n",val1);
        printf("2- Ingresar 2do operando (B = %.2f )\n",val2);
        printf("3- Calcular la suma (%.2f + %.2f)\n",val1,val2);
        printf("4- Calcular la resta (%.2f - %.2f)\n",val1,val2);
        printf("5- Calcular la division (%.2f / %.2f)\n",val1,val2);
        printf("6- Calcular la multiplicacion (%.2f * %.2f)\n",val1,val2);
        printf("7- Calcular el factorial (%.2f!)\n",val1);
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");
}


/**
 * \brief Muestra el pantalla la descripcion del resultado de la operacion
 * \param mensaje Es el mensaje a ser mostrado
 * \param resultado de la operacion
 *
 */
void MostrarResultado(char mensaje[],float resultado)
{
    printf("%s %.2f\n\n",mensaje,resultado);
    system("PAUSE");
}

/**
 * \brief valido que el divisor no sea 0
 * \param valor operando 1
 * \param valor operando 2
 * \return Flat para seguir o no
 */
int ValidoCeros(float val)
{
    int result = 1;
    if(val <= 0)
    {
        printf("El sistema no opera con valores en cero\n\n");
        system("PAUSE");
        result = 0;
    }
    return result;
}



