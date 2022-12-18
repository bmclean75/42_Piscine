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

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	is_uc;

	i = 0;
	is_uc = 1;
	while (str[i])
	{
		if ((int)str[i] < 65 || (int)str[i] > 90)
		{
			is_uc = 0;
			break ;
		}
		i++;
	}
	return (is_uc);
}

/*
int main(void)
{
	char str1[24] = "Cprogrammingisfunforall";
	char str2[24] = "CPROGRAMMINGISFUNFORALL";
	char str3[27] = "CPROGRAMMINGISFUN444ALL";
	char str4[1] = "";
	
	printf("str1 (%s) returns %d\n", str1, ft_str_is_uppercase(str1));
	printf("str2 (%s) returns %d\n", str2, ft_str_is_uppercase(str2));
	printf("str3 (%s) returns %d\n", str3, ft_str_is_uppercase(str3));
	printf("str4 (%s) returns %d\n", str4, ft_str_is_uppercase(str4));

	return 0;
}*/