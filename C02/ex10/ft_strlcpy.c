/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sraparty <sraparty@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 19:54:04 by sraparty          #+#    #+#             */
/*   Updated: 2023/08/31 19:54:06 by sraparty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	index;

	count = 0;
	index = 0;
	while (src[count] != '\0')
		count++;
	while (src[index] != '\0' && index < size)
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (count);
}
/*
#include<stdio.h>
int main(void)
{
    char s[] = "KSNJKG SaHJ";
    char d[5];
    int a;
    a = ft_strlcpy(d, s, 5);
    printf("%s", d);
    printf("\n");
  return 0;
}
*/
