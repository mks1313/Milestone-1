/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 13:41:16 by mmarinov          #+#    #+#             */
/*   Updated: 2024/08/09 13:45:13 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include <float.h>
#include "ft_printf.h"

void TEST(int num, int result_ft, int result_printf) {
    printf("TEST %d:\n", num);
    printf("ft_printf result: %d\n", result_ft);
    printf("printf result: %d\n", result_printf);
    printf("\n");
}

int main(void)
{
	char	*word;
	void	*nb;
	int	entero;
	unsigned int	unsign;
	unsigned int	num;
	int		total_format;
	int		total_verdadero;
	int		value;
	char	letter;
	double decimal;
	// Pruebas básicas de caracteres
	
	// checkear printf %% NO FTPRINTF
	ft_printf("Probando %%c con caracter básico:\n");
	letter = 'A';
	total_format = ft_printf("%c\n", letter);
	ft_printf("El size es: %d\n", total_format);
	total_verdadero = printf("%c\n", letter);
	printf("El size verdadero es: %d\n\n", total_verdadero);
	ft_printf("Probando %%c con caracter nulo:\n");
	letter = '\0';
	total_format = ft_printf("%c\n", letter);
	ft_printf("El size es: %d\n", total_format);
	total_verdadero = printf("%c\n", letter);
	printf("El size verdadero es: %d\n\n", total_verdadero);
	ft_printf("Probando %%c con caracteres especiales:\n");
	letter = '\n';
	total_format = ft_printf("%c\n", letter);
	ft_printf("El size es: %d\n", total_format);
	total_verdadero = printf("%c\n", letter);
	printf("El size verdadero es: %d\n\n", total_verdadero);
	
	// Pruebas de cadenas
	ft_printf("Probando %%s con cadena básica:\n");
	word = "Cadena";
	total_format = ft_printf("Hola %s\n", word);
	ft_printf("El size es: %d\n", total_format);
	total_verdadero = printf("Hola %s\n", word);
	printf("El size verdadero es: %d\n\n", total_verdadero);
	ft_printf("Probando %%s con cadena vacía:\n");
	word = "";
	total_format = ft_printf("Hola %s\n", word);
	ft_printf("El size es: %d\n", total_format);
	total_verdadero = printf("Hola %s\n", word);
	printf("El size verdadero es: %d\n\n", total_verdadero);
	ft_printf("Probando %%s con cadena larga:\n");
	word = "Esta es una cadena extremadamente larga para verificar el comportamiento del printf.";
	total_format = ft_printf("Hola %s\n", word);
	ft_printf("El size es: %d\n", total_format);
	total_verdadero = printf("Hola %s\n", word);
	printf("El size verdadero es: %d\n\n", total_verdadero);
	ft_printf("Probando %%s con caracteres especiales:\n");
	word = "\tHola\nMundo!";
	total_format = ft_printf("%s\n", word);
	ft_printf("El size es: %d\n", total_format);
	total_verdadero = printf("%s\n", word);
	printf("El size verdadero es: %d\n\n", total_verdadero);
	
	// Pruebas de punteros
	ft_printf("Probando %%p con dirección de variable:\n");
	value = 42;
	nb = &value;
	total_format = ft_printf("Hola %p\n", nb);
	ft_printf("El size es: %d\n", total_format);
	total_verdadero = printf("Hola %p\n", nb);
	printf("El size verdadero es: %d\n\n", total_verdadero);
	ft_printf("Probando %%p con NULL:\n");
	total_format = ft_printf("Hola %p\n", NULL);
	ft_printf("El size es: %d\n", total_format);
	total_verdadero = printf("Hola %p\n", NULL);
	printf("El size verdadero es: %d\n\n", total_verdadero);
	
	// Pruebas de enteros
	ft_printf("Probando %%d con entero positivo:\n");
	entero = 42;
	total_format = ft_printf("Hola %d\n", entero);
	ft_printf("El size es: %d\n", total_format);
	total_verdadero = printf("Hola %d\n", entero);
	printf("El size verdadero es: %d\n\n", total_verdadero);
	ft_printf("Probando %%d con entero negativo:\n");
	entero = -42;
	total_format = ft_printf("Hola %d\n", entero);
	ft_printf("El size es: %d\n", total_format);
	total_verdadero = printf("Hola %d\n", entero);
	printf("El size verdadero es: %d\n\n", total_verdadero);
	ft_printf("Probando %%d con valor extremo INT_MAX:\n");
	total_format = ft_printf("Hola %d\n", INT_MAX);
	ft_printf("El size es: %d\n", total_format);
	total_verdadero = printf("Hola %d\n", INT_MAX);
	printf("El size verdadero es: %d\n\n", total_verdadero);
	ft_printf("Probando %%d con valor extremo INT_MIN:\n");
	total_format = ft_printf("Hola %d\n", INT_MIN);
	ft_printf("El size es: %d\n", total_format);
	total_verdadero = printf("Hola %d\n", INT_MIN);
	printf("El size verdadero es: %d\n\n", total_verdadero);
	
	// Pruebas de enteros sin signo
	ft_printf("Probando %%u con entero sin signo positivo:\n");
	unsign = 42;
	total_format = ft_printf("Hola %u\n", unsign);
	ft_printf("El size es: %d\n", total_format);
	total_verdadero = printf("Hola %u\n", unsign);
	printf("El size verdadero es: %d\n\n", total_verdadero);
	ft_printf("Probando %%u con valor extremo UINT_MAX:\n");
	total_format = ft_printf("Hola %u\n", UINT_MAX);
	ft_printf("El size es: %d\n", total_format);
	total_verdadero = printf("Hola %u\n", UINT_MAX);
	printf("El size verdadero es: %d\n\n", total_verdadero);
	
	// Pruebas de hexadecimales
	ft_printf("Probando %%x con número positivo:\n");
	num = 42;
	total_format = ft_printf("Hola %x\n", num);
	ft_printf("El size es: %d\n", total_format);
	total_verdadero = printf("Hola %x\n", num);
	printf("El size verdadero es: %d\n\n", total_verdadero);
	ft_printf("Probando %%x con valor extremo UINT_MAX:\n");
	total_format = ft_printf("Hola %x\n", UINT_MAX);
	ft_printf("El size es: %d\n", total_format);
	total_verdadero = printf("Hola %x\n", UINT_MAX);
	printf("El size verdadero es: %d\n\n", total_verdadero);
	ft_printf("Probando %%X con número positivo:\n");
	total_format = ft_printf("Hola %X\n", num);
	ft_printf("El size es: %d\n", total_format);
	total_verdadero = printf("Hola %X\n", num);
	printf("El size verdadero es: %d\n\n", total_verdadero);
	ft_printf("Probando %%X con valor extremo UINT_MAX:\n");
	total_format = ft_printf("Hola %X\n", UINT_MAX);
	ft_printf("El size es: %d\n", total_format);
	total_verdadero = printf("Hola %X\n", UINT_MAX);
	printf("El size verdadero es: %d\n\n", total_verdadero);
	ft_printf("Probando %%x con valor 0:\n");
	total_format = ft_printf("Hola %x\n", 0);
	ft_printf("El size es: %d\n", total_format);
	total_verdadero = printf("Hola %x\n", 0);
	printf("El size verdadero es: %d\n\n", total_verdadero);
	ft_printf("Probando %%X con valor 0:\n");
	total_format = ft_printf("Hola %X\n", 0);
	ft_printf("El size es: %d\n", total_format);
	total_verdadero = printf("Hola %X\n", 0);
	printf("El size verdadero es: %d\n\n", total_verdadero);
	ft_printf("Probando %%i con valor 0:\n");
	total_format = ft_printf("Hola %i\n", 0);
	ft_printf("El size es: %d\n", total_format);
	total_verdadero = printf("Hola %i\n", 0);
	printf("El size verdadero es: %d\n\n", total_verdadero);
	ft_printf("Probando %%u con valor 0:\n");
	total_format = ft_printf("Hola %u\n", 0);
	ft_printf("El size es: %d\n", total_format);
	total_verdadero = printf("Hola %u\n", 0);
	printf("El size verdadero es: %d\n\n", total_verdadero);
	
	// Pruebas de valores NULL
	ft_printf("Probando NULL con p:\n");
	total_format = ft_printf("Hola %p\n", NULL);
	ft_printf("El size es: %d\n", total_format);
	total_verdadero = printf("Hola %p\n", NULL);
	printf("El size verdadero es: %d\n\n", total_verdadero);
	ft_printf("Probando NULL con s:\n");
	total_format = ft_printf("Hola %s\n", (char *)NULL);
	ft_printf("El size es: %d\n", total_format);
	total_verdadero = printf("Hola %s\n", (char *)NULL);
	printf("El size verdadero es: %d\n\n", total_verdadero);
	
	/*/ Pruebas de precisión
	ft_printf("Probando %.5d con precisión 5:\n");
	total_format = ft_printf("Hola %.5d\n", 42);
	ft_printf("El size es: %d\n", total_format);
	total_verdadero = printf("Hola %.5d\n", 42);
	printf("El size verdadero es: %d\n\n", total_verdadero);
	ft_printf("Probando %.2s con precisión 2:\n");
	total_format = ft_printf("Hola %.2s\n", "Patri");
	ft_printf("El size es: %d\n", total_format);
	total_verdadero = printf("Hola %.2s\n", "Patri");
	printf("El size verdadero es: %d\n\n", total_verdadero);
	
	// Pruebas de anchura
	ft_printf("Probando %5d con anchura 5:\n");
	total_format = ft_printf("Hola %5d\n", 42);
	ft_printf("El size es: %d\n", total_format);
	total_verdadero = printf("Hola %5d\n", 42);
	printf("El size verdadero es: %d\n\n", total_verdadero);
	ft_printf("Probando %10.5s con anchura 10 y precisión 5:\n");
	total_format = ft_printf("Hola %10.5s\n", "Patri");
	ft_printf("El size es: %d\n", total_format);
	total_verdadero = printf("Hola %10.5s\n", "Patri");
	printf("El size verdadero es: %d\n\n", total_verdadero);
	
	// Flotantes
	ft_printf("Probando %%f con flotante positivo:\n");
	decimal = 3.14159;
	total_format = ft_printf("Hola %f\n", decimal);
	ft_printf("El size es: %d\n", total_format);
	total_verdadero = printf("Hola %f\n", decimal);
	printf("El size verdadero es: %d\n\n", total_verdadero);
	ft_printf("Probando %.2f con precisión 2:\n");
	total_format = ft_printf("Hola %.2f\n", decimal);
	ft_printf("El size es: %d\n", total_format);
	total_verdadero = printf("Hola %.2f\n", decimal);
	printf("El size verdadero es: %d\n\n", total_verdadero);
	ft_printf("Probando %10.2f con anchura 10 y precisión 2:\n");
	total_format = ft_printf("Hola %10.2f\n", decimal);
	ft_printf("El size es: %d\n", total_format);
	total_verdadero = printf("Hola %10.2f\n", decimal);
	printf("El size verdadero es: %d\n\n", total_verdadero);

	// Caracteres especiales
	ft_printf("Probando caracteres especiales:\n");
	total_format = ft_printf("Hola \t Mundo\n");
	ft_printf("El size es: %d\n", total_format);
	total_verdadero = printf("Hola \t Mundo\n");
	printf("El size verdadero es: %d\n\n", total_verdadero);
	ft_printf("Probando caracteres de escape:\n");
	total_format = ft_printf("Hola \\n \\t \\r\n");
	ft_printf("El size es: %d\n", total_format);
	total_verdadero = printf("Hola \\n \\t \\r\n");
	printf("El size verdadero es: %d\n\n", total_verdadero);
	
	// Especificadores incorrectos
	ft_printf("Probando especificador incorrecto %%q:\n");
	total_format = ft_printf("Hola %q\n", 42);
	ft_printf("El size es: %d\n", total_format);
	total_verdadero = printf("Hola %q\n", 42);
	printf("El size verdadero es: %d\n\n", total_verdadero);*/

	// Combinaciones complejas
	ft_printf("Probando combinación compleja:\n");
	total_format = ft_printf("Número: %d, Cadena: %s, Hex: %x, \n", 42, "Texto", 255);
	ft_printf("El size es: %d\n", total_format);
	total_verdadero = printf("Número: %d, Cadena: %s, Hex: %x, \n", 42, "Texto", 255);
	printf("El size verdadero es: %d\n\n", total_verdadero);
	
	// Pruebas adicionales de memoria y límites
	ft_printf("Probando cadena larga y compleja:\n");
	word = "Esta es una prueba con una cadena extremadamente larga para verificar cómo maneja printf los casos de memoria y los límites de su implementación. Queremos asegurarnos de que no hay problemas con la gestión de memoria y que el comportamiento es consistente.";
	total_format = ft_printf("Resultado: %s\n", word);
	ft_printf("El size es: %d\n", total_format);
	total_verdadero = printf("Resultado: %s\n", word);
	printf("El size verdadero es: %d\n\n", total_verdadero);



	// Pruebas para %%
    total_format = ft_printf(" %% ");
    total_verdadero = printf(" %% ");
    TEST(1, total_format, total_verdadero);

    total_format = ft_printf(" %%%% ");
    total_verdadero = printf(" %%%% ");
    TEST(2, total_format, total_verdadero);

    total_format = ft_printf(" %% %% %% ");
    total_verdadero = printf(" %% %% %% ");
    TEST(3, total_format, total_verdadero);

    total_format = ft_printf(" %%  %%  %% ");
    total_verdadero = printf(" %%  %%  %% ");
    TEST(4, total_format, total_verdadero);

    total_format = ft_printf(" %%   %%   %% ");
    total_verdadero = printf(" %%   %%   %% ");
    TEST(5, total_format, total_verdadero);

    total_format = ft_printf("%%");
    total_verdadero = printf("%%");
    TEST(6, total_format, total_verdadero);

    total_format = ft_printf("%% %%");
    total_verdadero = printf("%% %%");
    TEST(7, total_format, total_verdadero);

	return (0);
}
