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

/*The strlcat() function appends at most (dstsize-strlen(dst)-1) characters of 
src to dst (dstsize being the size of the string buffer dst). If the string 
pointed to by dst contains a null-terminated string that fits into dstsize bytes 
when strlcat() is called, the string pointed to by dst will be a null-terminated 
string that fits in dstsize bytes (including the terminating null character) 
when it completes, and the initial character of src will override the null 
character at the end of dst. If the string pointed to by dst is longer than 
dstsize bytes when strlcat() is called, the string pointed to by dst will not be
changed. The function returns min{dstsize,strlen(dst)}+ strlen(src). */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	i;

	len_dest = 0;
	i = 0;
	while (dest[len_dest] != '\0')
		len_dest++;
	while (src[i] != '\0' && i < size)
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	if (dest[len_dest + i])
	{
		dest[len_dest + i] = '\0';
	}
	return (len_dest + i);
}

/*
#include <stdio.h>
int main(void)
{
	char dest[50] = {"My dest string "};
	char src[50] = {"My src string"};
	int len = 0;
	
	printf("Destination string : %s\n", dest);
	printf("Source string to append : %s\n", src);
	len = ft_strlcat(dest, src, 11);
	printf("Final destination string : %s\n", dest);
	printf("Return value : %i\n", len);
   
   return(0);
}*/