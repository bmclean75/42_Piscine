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

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	is_lc;

	i = 0;
	is_lc = 1;
	while (str[i])
	{
		if ((int)str[i] < 97 || (int)str[i] > 122)
		{
			is_lc = 0;
			break ;
		}
		i++;
	}
	return (is_lc);
}

/*
int main(void)
{
	char str1[24] = "Cprogrammingisfunforall";
	char str2[24] = "cprogrammingisfunforall";
	char str3[27] = "cprogrammingisfun444all";
	char str4[1] = "";
	
	printf("str1 (%s) returns %d\n", str1, ft_str_is_lowercase(str1));
	printf("str2 (%s) returns %d\n", str2, ft_str_is_lowercase(str2));
	printf("str3 (%s) returns %d\n", str3, ft_str_is_lowercase(str3));
	printf("str4 (%s) returns %d\n", str4, ft_str_is_lowercase(str4));

	return 0;
}*/