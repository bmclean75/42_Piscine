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

/*
keeps calling putnbr with nb/10 until the highest column is obtained,
then outputs with putchar.*/

#include <unistd.h>

void	ft_putchar(int i)
{
	write(1, &i, 1);
}

void	ft_putnbr(int nb)
{
	long int	lnb;

	lnb = nb;
	if (lnb < 0)
	{
		ft_putchar('-');
		lnb = -lnb;
	}
	if (lnb >= 10)
	{
		ft_putnbr(lnb / 10);
		lnb = lnb % 10;
	}
	if (lnb < 10)
		ft_putchar(lnb + 48);
}

/*
int main(void){

	ft_putnbr(2147483647);
	write (1, "\n", 1);
	ft_putnbr(-2147483648);
	write (1, "\n", 1);
	ft_putnbr(10);
	write (1, "\n", 1);
	ft_putnbr(1097069777);
	write (1, "\n", 1);
	return (1);
}
*/