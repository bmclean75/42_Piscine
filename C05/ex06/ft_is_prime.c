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

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>
int main(void)
{
	printf("0 = %i\n", ft_is_prime(0));
	printf("1 = %i\n", ft_is_prime(1));
	printf("2 = %i\n", ft_is_prime(2));
	printf("3 = %i\n", ft_is_prime(3));
	printf("4 = %i\n", ft_is_prime(4));
	printf("5 = %i\n", ft_is_prime(5));
	printf("6 = %i\n", ft_is_prime(6));
	printf("7 = %i\n", ft_is_prime(7));
	printf("8 = %i\n", ft_is_prime(8));
	printf("9 = %i\n", ft_is_prime(9));
	printf("10 = %i\n", ft_is_prime(10));
	printf("11 = %i\n", ft_is_prime(11));
	printf("12 = %i\n", ft_is_prime(12));
	printf("-4 = %i\n", ft_is_prime(-4));
}*/