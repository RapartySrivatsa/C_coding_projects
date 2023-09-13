/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sraparty <sraparty@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 20:41:08 by sraparty          #+#    #+#             */
/*   Updated: 2023/08/29 20:41:10 by sraparty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdbool.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	start; 
	int	end;
	int	count;
	bool	swapped;

	start = 0;
	swapped = true;
	end = size - 1;
	while (swapped)
	{
		swapped = false;
		while (start < end)
		{
			count = 0;
			while (start < end - count)
			{
				if (tab[count] > tab[count + 1])
				{
					temp = tab[count];
					tab[count] = tab[count + 1];
					tab[count + 1] = temp;
					swapped = true;
				}
				count++;
			}
			start++;
		}
	}
}

/*
int main()
{
	int tab[] = {1,2,3,4,5};
	int size =5;
	ft_sort_int_tab(tab, size);
	printf("%d %d %d %d %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
}*/
