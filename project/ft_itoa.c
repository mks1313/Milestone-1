#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
static int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		sign;
	int		temp;

	len = 1;
	sign = (n < 0);
	temp = n;
	while (temp /= 10)
		len++;
	str = (char *)malloc(sizeof(char) * (len + 1 + sign));
	if (!str)
		return (NULL);
	str[len + sign] = '\0';
	while (len-- > 0)
	{
		str[len + sign] = ft_abs(n % 10) + '0';
		n /= 10;
	}
	if (sign)
		str[0] = '-';
	return (str);
}

int	main(void)
{
int	num = -54;
char	*result = ft_itoa(num);
if(result)
{
printf("resultado de conversion es: %s\n", result);
free(result);
}
else
{
printf("Error: Memoria insufuciente para convertit el numero.\n");
	}
return (0);
	}
