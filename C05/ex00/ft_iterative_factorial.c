/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headerfile.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmclean <bmclean@student.42adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 12:40:10 by bmclean           #+#    #+#             */
/*   Updated: 2022/11/29 12:49:08 by bmclean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	if (nb < 0)
		return (0);
	factorial = 1;
	while (nb > 0)
	{
		factorial = factorial * nb;
		nb --;
	}
	return (factorial);
}

/*
#include <stdio.h>
int main(void)
{
	printf("4! = %i\n", ft_iterative_factorial(4));
	printf("27! = %i\n", ft_iterative_factorial(27));
	printf("-3! = %i\n", ft_iterative_factorial(-3));
	printf("0! = %i\n", ft_iterative_factorial(0));
}*/