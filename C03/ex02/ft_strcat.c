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

/*The strcat() function appends the src string to the dest string, overwriting 
the terminating null byte ('\0') at the end of dest, and then adds a terminating
null byte.*/

char	*ft_strcat(char *dest, char *src)
{
	int	len_dest;
	int	i;

	len_dest = 0;
	i = 0;
	while (dest[len_dest] != '\0')
		len_dest++;
	while (src[i] != '\0')
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	if (dest[len_dest + i])
	{
		dest[len_dest + i] = '\0';
	}
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
	ft_strcat(dest, src);
	printf("Final destination string : %s\n", dest);
   
   return(0);
}*/