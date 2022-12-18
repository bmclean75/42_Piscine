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

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb > 1)
		return (nb *= ft_recursive_factorial(nb - 1));
	else
		return (1);
}

/*
#include <stdio.h>
int main(void)
{
	printf("4! = %i\n", ft_recursive_factorial(4));
	printf("27! = %i\n", ft_recursive_factorial(27));
	printf("-3! = %i\n", ft_recursive_factorial(-3));
	printf("0! = %i\n", ft_recursive_factorial(0));
}*/