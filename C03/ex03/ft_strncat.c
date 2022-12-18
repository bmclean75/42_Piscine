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

/*The C library function char *strncat(char *dest, const char *src, size_t n)
appends the string pointed to by src to the end of the string pointed to by dest
up to n characters long.*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	len_dest;
	unsigned int	i;

	len_dest = 0;
	i = 0;
	while (dest[len_dest] != '\0')
		len_dest++;
	while (src[i] != '\0' && i < nb)
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int main(void)
{
	char dest[50] = {"My dest string "};
	char src[50] = {"My src string"};
	
	printf("Destination string : %s\n", dest);
	printf("Source string to append : %s\n", src);
	ft_strncat(dest, src, 11);
	printf("Final destination string : %s\n", dest);
   
   return(0);
}*/