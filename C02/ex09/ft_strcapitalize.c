/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sraparty <sraparty@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 18:25:10 by sraparty          #+#    #+#             */
/*   Updated: 2023/08/31 18:26:40 by sraparty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	if ((str[0] >= 'a') && (str[0] <= 'z'))
	{
		str[i] -= 32;
	}
	while (str[i] != '\0')
	{
		if (str[i - 1] == 32 || str[i - 1] >= 33 && str[i - 1] <= 47)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int		main(void)
{
	char	str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s\n", ft_strcapitalize(str));
}
*/
