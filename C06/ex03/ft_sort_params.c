/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sraparty <sraparty@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 18:27:22 by sraparty          #+#    #+#             */
/*   Updated: 2023/09/10 18:27:24 by sraparty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

//strcmp code until there's some difference ascii value for a letter!!
int	ft_strcmp(char *str1, char *str2)
{
	while (*str1 != '\0' || *str2 != '\0')
	{
		if (*str1 != *str2)
		{
			return (*str1 - *str2);
		}
		str1++;
		str2++;
	}
}

//Bubble sort loop
void	ft_sort_params(int argc, char **argv)
{
	char	*temp;
	int		i;
	int		swapped;

	swapped = 1;
	while (swapped)
	{
		swapped = 0;
		i = 1;
		while (i < argc -1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = temp;
				swapped = 1;
			}
			i++;
		}
	}
}

//function to print the parameters
void	ft_print_params(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

//command line arg
int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	ft_sort_params(argc, argv);
	while (i < argc)
	{
		ft_print_params(argv[i]);
		i++;
	}
}
