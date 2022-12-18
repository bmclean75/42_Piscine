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

#include <unistd.h>

int	is_space(char *ptr)
{
	if (*ptr == ' ' || *ptr == '\n' || *ptr == '\t'
		|| *ptr == '\v' || *ptr == '\f' || *ptr == '\r')
		return (1);
	else
		return (0);
}

int	power(int base, int pow)
{
	int	i;
	int	value;

	i = 1;
	value = base;
	while (i < pow)
	{
		value = value * base;
		i++;
	}
	return (value);
}

int	ft_chararray_to_int(int n_minus, int numlen, char *array)
{
	int	num;
	int	i;

	num = 0;
	i = 0;
	while (i < numlen - 1)
	{
		num += (array[i] - 48) * power(10, numlen - i - 1);
		i++;
	}
	num += array[i] - 48;
	if (n_minus % 2 == 1)
		num = -num;
	return (num);
}

int	ft_atoi(char *str)
{
	int		n_minus;
	int		numlen;
	char	array[500];

	n_minus = 0;
	numlen = 0;
	while (is_space(str))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			n_minus++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		array[numlen] = *str;
		str++;
		numlen++;
	}
	if (numlen == 0)
		return (0);
	else
		return (ft_chararray_to_int(n_minus, numlen, array));
}

/*
#include <stdio.h>
int main(void)
{
	char *str = "   -A--+--1234ab567";
	printf("string is: %s\n", str);
	printf("atoi = %i\n", ft_atoi(str));

	char *str2 = " 	  -+--+--1234ab567";
	printf("string is: %s\n", str2);
	printf("atoi = %i\n", ft_atoi(str2));

	char *str3 = " 	  -+--+-10101010ab567";
	printf("string is: %s\n", str3);
	printf("atoi = %i\n", ft_atoi(str3));

}*/