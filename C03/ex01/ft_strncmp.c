/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sraparty <sraparty@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 12:43:32 by sraparty          #+#    #+#             */
/*   Updated: 2023/09/01 12:46:02 by sraparty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0') && (s1[i] == s2[i]) && i < (n - 1))
	{
		i++;
	}
	if (n == 0)
	{
		return (0);
	}
	else
	{
		return (s1[i] - s2[i]);
	}
}
/*
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20] = "ABO";
    	char str2[20] = "ABZ";
	printf("Obtained outcome: %d \n", ft_strncmp(str1,str2, 3));
	printf("expected outcome: %d", strncmp(str1,str2,3));
}
*/
