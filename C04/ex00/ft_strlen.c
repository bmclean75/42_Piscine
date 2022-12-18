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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/*
#include <stdio.h>
int main(void){

	char str1[] = "C programming";
	char str2[20]; //empty string

	printf("string 1 = %s\n", str1);
	printf("string 1 len = %i\n", ft_strlen(str1));
	printf("\n");
	
	printf("string 2 = %s\n", str2);
	printf("string 2 len = %i\n", ft_strlen(str2));
	printf("\n");

	return (1);
}*/