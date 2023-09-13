/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sraparty <sraparty@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 20:03:37 by sraparty          #+#    #+#             */
/*   Updated: 2023/09/06 20:03:39 by sraparty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
#include<stdio.h>
int main()
{
    int num;
    printf("Enter no of elem : ");
    scanf("%d", &num); // taking user input
    
    for (int i = 0; i < num; i++)
    {
        printf("%d ", ft_fibonacci(i));
    }
}*/
