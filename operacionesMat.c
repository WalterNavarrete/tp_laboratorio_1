#include <stdio.h>
#include <stdlib.h>

/**
 * \brief Realiza la suma de 2 numeros
 * \param valor1 a sumar
 * \param valor2 a sumar
 * \return El resultado de la suma de los parametros
 *
 */
float Sumar(float num1,float num2)
{
    float result = 0.0;
    result = num1 + num2;
    return (result);
}
/**
 * \brief Realiza la resta de 2 numeros
 * \param valor1 a sumar
 * \param valor2 a sumar
 * \return El resultado de la resta de los parametros
 *
 */
float Restar(float num1,float num2)
{
    float result = 0.0;
    result = num1 - num2;
    return (result);
}
/**
 * \brief Realiza la multiplicacion de 2 numeros
 * \param valor1 a multiplicar
 * \param valor2 a multiplicar
 * \return El resultado de la multiplicacion de los parametros
 *
 */
float Multiplicar(float num1,float num2)
{
    float result = 0.0;
    result = num1 * num2;
    return (result);
}
/**
 * \brief Realiza la division de 2 numeros
 * \param valor1 divisor
 * \param valor2 dividendo
 * \return El resultado de la division de los parametros
 *
 */
float Dividir(float num1,float num2)
{
    float result = 0.0;
    result = num1 / num2;
    return (result);
}

/**
 * \brief Realiza el factorial de un numero
 * \param valor a calcular
 * \return El factorial del parametro
 *
 */
float Factorial(float num)
{
    int i,fact =1,n;
    n = (int)num;
    for(i=1;i<=n;i++)
    {
        fact = fact * i;
    }

    return (float)fact;
}


