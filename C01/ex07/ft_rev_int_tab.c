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
//#include <stdio.h> //for testing only

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	value_a;
	int	value_b;

	i = 0;
	while (i < size / 2)
	{
		value_a = tab[i];
		value_b = tab[size - i - 1];
		tab[i] = value_b;
		tab[size - i - 1] = value_a;
		i++;
	}
}

/*
int main(void)
{
	int myints[10] = {0,4,6,8,3,4,5,3,9,7};
	for (int i=0; i < (int)(sizeof (myints) / sizeof (myints[0])); i++) {
		 printf("%i", myints[i]);
	}
	printf("\n");
	
	ft_rev_int_tab(myints,(int)(sizeof (myints) / sizeof (myints[0])));
	
	for (int i=0; i < (int)(sizeof (myints) / sizeof (myints[0])); i++) {
		 printf("%i", myints[i]);
	}
	
	return (0);
}*/