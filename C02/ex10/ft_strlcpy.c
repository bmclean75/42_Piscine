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

//gcc -Wall -Wextra -Werror ft_strlcpy.c
//#include <stdio.h> //printf

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}

/*
int main (void)
{
	char src[22] = "the rains are falling";
	char dest1[22];
	char dest2[25];
	char dest3[15];
	
	printf("src = %s\n", src);
	ft_strlcpy(dest1,src,22);
	printf("d1 src = %s, rtn %i\n", dest1, ft_strlcpy(dest1,src,22));
	ft_strlcpy(dest2,src,22);
	printf("d2 src = %s, rtn %i\n", dest2, ft_strlcpy(dest2,src,22));
	ft_strlcpy(dest3,src,22);
	printf("d3 src = %s, rtn %i\n", dest3, ft_strlcpy(dest3,src,22));
	
	ft_strlcpy(dest1,src,25);
	printf("d1 src = %s, rtn %i\n", dest1, ft_strlcpy(dest1,src,25));
	ft_strlcpy(dest2,src,25);
	printf("d2 src = %s, rtn %i\n", dest2, ft_strlcpy(dest2,src,25));
	ft_strlcpy(dest3,src,25);
	printf("d3 src = %s, rtn %i\n", dest3, ft_strlcpy(dest3,src,25));
	
	ft_strlcpy(dest1,src,15);
	printf("d1 src = %s, rtn %i\n", dest1, ft_strlcpy(dest1,src,15));
	ft_strlcpy(dest2,src,15);
	printf("d2 src = %s, rtn %i\n", dest2, ft_strlcpy(dest2,src,15));
	ft_strlcpy(dest3,src,15);
	printf("d3 src = %s, rtn %i\n", dest3, ft_strlcpy(dest3,src,15));
	
	return (1);
	
}*/