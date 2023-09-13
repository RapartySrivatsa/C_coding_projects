/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sraparty <sraparty@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:18:19 by sraparty          #+#    #+#             */
/*   Updated: 2023/09/05 21:13:26 by sraparty         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	f;
	int	i;

	i = 1;
	f = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		f = f * i;
		i++;
	}
	return (f);
}
/*
#include <stdio.h>
int main() 
{
    int testCases[] = {-1, 0, 1, 5, 10};
    int numTestCases = sizeof(testCases) / sizeof(testCases[0]);

    for (int i = 0; i < numTestCases; i++) {
        int result = ft_iterative_factorial(testCases[i]);
        printf("Factorial of %d: %d\n", testCases[i], result);
    }

    return 0;
}
*/
