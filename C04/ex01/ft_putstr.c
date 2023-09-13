/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sraparty <sraparty@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:01:10 by sraparty          #+#    #+#             */
/*   Updated: 2023/09/09 14:58:03 by sraparty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	write(1, str, i);
}
/*
#include <stdio.h>
int main(void)
{
    char test1[] = "";
    ft_putstr(test1);  

    char test2[] = "Hello, world!";
    ft_putstr(test2);
    
    char test4[] = "()-+$%^&";
    ft_putstr(test4);
    
    return 0;
}
*/
