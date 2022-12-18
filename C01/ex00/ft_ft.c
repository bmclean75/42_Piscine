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
//#include <stdio.h> //for testing

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/*
int main(void)
{
	int mynbr;
	mynbr = 15;
	printf("my number is initially %d\n", mynbr);
	
	int *mynbrptr;
	mynbrptr = &mynbr;
	
	ft_ft(mynbrptr);
	printf("my number is now %d\n", mynbr);
	
	return (0);
}
*/