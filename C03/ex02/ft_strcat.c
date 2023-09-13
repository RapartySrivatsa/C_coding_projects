/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sraparty <sraparty@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 13:49:18 by sraparty          #+#    #+#             */
/*   Updated: 2023/09/03 13:49:41 by sraparty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		dest_size;

	i = 0;
	dest_size = 0;
	while (dest[dest_size] != '\0')
		dest_size++;
	while (src[i])
	{
		dest[dest_size] = src[i];
		dest_size++;
		i++;
	}
	dest[dest_size] = '\0';
	return (dest);
}
/*
#include<stdio.h>
#include<string.h>
int main()
{
	char dest[30] ="You ";
	char src[30] = "are on top of the World";
	ft_strcat(dest, src);
	printf("obtained outcome: %s \n ", dest);
	
}
*/
