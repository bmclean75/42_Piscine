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

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
int main(void)
{
	char str1[28] = "C programming is fun for all";
	char str2[28]; //empty string
	char str3[40]; //empty string
	char str4[18]; //empty string

	printf("string 1 = ");
	printf(str1);
	printf("\n");
	
	printf("string 2 = ");
	printf(ft_strncpy(str2, str1,28));
	printf("\n");
	printf("string 3 = ");
	printf(ft_strncpy(str3, str1,18));
	printf("\n");
	printf("string 4 = ");
	printf(ft_strncpy(str4, str1,28));
	printf("\n");
	
	

	return 0;
}*/