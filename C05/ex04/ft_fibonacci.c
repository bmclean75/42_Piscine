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

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*
#include <stdio.h>
int main(void)
{
	printf("f0 = %i\n", ft_fibonacci(0));
	printf("f1 = %i\n", ft_fibonacci(1));
	printf("f2 = %i\n", ft_fibonacci(2));
	printf("f3 = %i\n", ft_fibonacci(3));
	printf("f4 = %i\n", ft_fibonacci(4));
	printf("f5 = %i\n", ft_fibonacci(5));
	printf("f-7 = %i\n", ft_fibonacci(-7));
	return (1);
}*/