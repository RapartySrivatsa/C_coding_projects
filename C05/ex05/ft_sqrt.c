/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sraparty <sraparty@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:09:24 by sraparty          #+#    #+#             */
/*   Updated: 2023/09/07 12:09:26 by sraparty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i * i <= nb && i <= 46340)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/*
#include<stdio.h>
int main()
{
    printf("%d\n", ft_sqrt(-10));	
    printf("%d\n", ft_sqrt(0));
    printf("%d\n", ft_sqrt(1));
    printf("%d\n", ft_sqrt(10000));
    printf("%d\n", ft_sqrt(256));
    printf("%d\n", ft_sqrt(10));
}
*/
