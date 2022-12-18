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

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
int main(void)
{
	int a;
	int b;
	a = 5;
	b = 7;
	printf("a,b is initially %d,%d\n", a, b);
	
	int *aptr;
	int *bptr;
	
	aptr = &a;
	bptr = &b;
	
	ft_swap(aptr,bptr);
	
	printf("a,b is now %d,%d\n", a, b);
	
	return (0);
}
*/