/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sraparty <sraparty@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 12:18:04 by sraparty          #+#    #+#             */
/*   Updated: 2023/09/05 13:27:03 by sraparty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include<stdio.h>
int main()
{
	char str1[20] = "ABCA";
    	char str2[20] = "ABCAD";
	printf("Obtained outcome: %d \n", ft_strcmp(str1,str2));
}
*/
