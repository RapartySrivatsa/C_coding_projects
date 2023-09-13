/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sraparty <sraparty@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:15:15 by sraparty          #+#    #+#             */
/*   Updated: 2023/09/05 18:57:46 by sraparty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*temp;
	int		j;

	j = 0;
	temp = str;
	if (*to_find == '\0')
		return (str);
	while (*temp)
	{
		if (*temp == to_find[0])
		{
			while (temp[j] == to_find[j] && to_find[j])
				j++;
			if (to_find[j] == '\0')
				return (temp);
		}
		temp++;
	}
	return (0);
}
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char to_find[30] = "Bar";
	char str[30] = "Foo Bar Baz";
	printf("%s \n",ft_strstr(str, to_find));
}
*/
