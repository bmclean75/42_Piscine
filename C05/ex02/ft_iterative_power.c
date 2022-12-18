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

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	value;

	i = 0;
	value = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (i < power)
	{
		value = value * nb;
		i++;
	}
	return (value);
}
/*
#include <stdio.h>
int main(void)
{
	printf("4^2 = %i\n", ft_iterative_power(4, 2));
	printf("3^3 = %i\n", ft_iterative_power(3, 3));
	printf("2^4 = %i\n", ft_iterative_power(2, 4));
	printf("-2^5 = %i\n", ft_iterative_power(-2, 5));
	printf("2^0 = %i\n", ft_iterative_power(2, 0));
	printf("0^4 = %i\n", ft_iterative_power(0, 4));
	printf("5^-3 = %i\n", ft_iterative_power(5, -3));
}*/