/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sraparty <sraparty@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:13:09 by sraparty          #+#    #+#             */
/*   Updated: 2023/08/31 14:13:48 by sraparty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>
int    main(void)
{
    int is_alpha;
    char a[] = "jhsdfhd45kfhk";
    is_alpha = ft_str_is_lowercase(a);
    printf("%d\n", is_alpha);
}*/
