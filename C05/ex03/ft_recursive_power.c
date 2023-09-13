/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sraparty <sraparty@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 19:20:23 by sraparty          #+#    #+#             */
/*   Updated: 2023/09/06 19:20:25 by sraparty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else if (power > 0)
		nb = nb * ft_recursive_power(nb, power - 1);
	return (nb);
}
/*
#include <stdio.h>
int main() 
{
	int	i;
	i = ft_recursive_power(2,3);
        printf("%d\n",i);
}
*/
