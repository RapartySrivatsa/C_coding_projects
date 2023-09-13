/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sraparty <sraparty@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:32:15 by sraparty          #+#    #+#             */
/*   Updated: 2023/09/07 13:32:17 by sraparty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
#include<stdio.h>
int main (void)
{
	int i;
	
	ft_is_prime(5);
	ft_is_prime(4);
	ft_is_prime(13);
	ft_is_prime(32);
	i=ft_is_prime(17);
    	printf ("%d",i);
}
*/
