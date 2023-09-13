/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sraparty <sraparty@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:53:15 by sraparty          #+#    #+#             */
/*   Updated: 2023/09/04 15:53:18 by sraparty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
#include <stdio.h>
int main()
{
	int len1 = ft_strlen("helloworld");
	int len2 = ft_strlen("Check_length1234");

	printf("%d\n", len1);
	printf("%d\n", len2);
}
*/
