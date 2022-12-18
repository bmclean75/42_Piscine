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

int	ft_sqrt(int nb)
{
	long int	i;
	long int	lnb;

	i = 1;
	lnb = nb;
	if (lnb < 0)
		return (0);
	while (i * i < lnb)
	{
		i++;
	}
	if (i * i == lnb)
	{
		return (i);
	}
	return (0);
}

/*
#include <stdio.h>
int main(void)
{
	printf("sqrt of %d is %d\n", -1307, ft_sqrt(-1307));
        printf("sqrt of %d is %d\n", 0, ft_sqrt(0));
        printf("sqrt of %d is %d\n", 1, ft_sqrt(1));
        printf("sqrt of %d is %d\n", 2, ft_sqrt(2));
        printf("sqrt of %d is %d\n", 1640045925, ft_sqrt(1640045925));
        printf("sqrt of %d is %d\n", 2147395600, ft_sqrt(2147395600));
        printf("sqrt of %d is %d\n", 2147483646, ft_sqrt(2147483646));
        printf("sqrt of %d is %d\n", 423412929, ft_sqrt(423412929));
        printf("sqrt of %d is %d\n", 1837612549, ft_sqrt(1837612549));
        printf("sqrt of %d is %d\n", 280462009, ft_sqrt(280462009));
        printf("sqrt of %d is %d\n", 1796957842, ft_sqrt(1796957842));
        printf("sqrt of %d is %d\n", 415996816, ft_sqrt(415996816));
        printf("sqrt of %d is %d\n", 1302641356, ft_sqrt(1302641356));
        printf("sqrt of %d is %d\n", 742780516, ft_sqrt(742780516));
        printf("sqrt of %d is %d\n", 1524054754, ft_sqrt(1524054754));
        printf("sqrt of %d is %d\n", 419143729, ft_sqrt(419143729));
        printf("sqrt of %d is %d\n", 2042935327, ft_sqrt(2042935327));
	return (0);
}
*/
