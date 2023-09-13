/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sraparty <sraparty@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 20:40:05 by sraparty          #+#    #+#             */
/*   Updated: 2023/08/24 21:41:32 by sraparty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	i;

	i = 48;
	while (i <= 57)
	{
		write (1, &i, 1);
		i++;
	}
}
int	main(void)
{
	ft_print_numbers();
}
