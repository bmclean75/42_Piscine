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

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	is_alpha;

	i = 0;
	is_alpha = 1;
	while (str[i])
	{
		if ((int)str[i] < 65 || ((int)str[i] > 90
				&& (int)str[i] < 97) || (int)str[i] > 122)
		{
			is_alpha = 0;
			break ;
		}
		i++;
	}
	return (is_alpha);
}

/*
int main(void)
{
	char str1[24] = "Cprogrammingisfunforall";
	char str2[24] = "Cprogrammingisfun444all";
	char str3[27] = "abCDEfghiJKLMnopqrsTUVwxyz";
	char str4[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char str5[1] = "";
	
	printf("str1 (%s) returns %d\n", str1, ft_str_is_alpha(str1));
	printf("str2 (%s) returns %d\n", str2, ft_str_is_alpha(str2));
	printf("str3 (%s) returns %d\n", str3, ft_str_is_alpha(str3));
	printf("str4 (%s) returns %d\n", str4, ft_str_is_alpha(str4));
	printf("str5 (%s) returns %d\n", str5, ft_str_is_alpha(str5));

	return 0;
}*/