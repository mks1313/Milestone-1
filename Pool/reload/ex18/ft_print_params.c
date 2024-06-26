/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 12:15:10 by mmarinov          #+#    #+#             */
/*   Updated: 2024/06/11 12:53:50 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	if (argc == 0)
	{
		return (0);
	}
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != 0)
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
