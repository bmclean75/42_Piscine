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

int	ft_str_is_printable(char *str)
{
	int	i;
	int	is_printable;

	i = 0;
	is_printable = 1;
	while (str[i])
	{
		if ((int)str[i] < 32 || (int)str[i] > 126)
		{
			is_printable = 0;
			break ;
		}
		i++;
	}
	return (is_printable);
}

/*
int main(void)
{
	char str1[24] = "kjbnAE{9u 9w4t 4qf[u90u";
	char str2[24] = "&(^%@#!#)%_0)*&&*&^%*&#";
	char str3[27] = "CPROGRAMMINGISFUN444ALL";
	str3[15] = -3; //unprintable
	str3[18] = 129; //unprintable
	char str4[1] = "";
	
	printf("str1 (%s) returns %d\n", str1, ft_str_is_printable(str1));
	printf("str2 (%s) returns %d\n", str2, ft_str_is_printable(str2));
	printf("str3 (%s) returns %d\n", str3, ft_str_is_printable(str3));
	printf("str4 (%s) returns %d\n", str4, ft_str_is_printable(str4));

	return 0;
}*/