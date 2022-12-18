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

//gcc -Wall -Wextra -Werror ft_strupcase.c
#include <unistd.h>
//#include <stdio.h> //for testing only

char	*ft_strupcase(char *str)
{
	int	i;
	int	delta;

	i = 0;
	delta = 97 - 65;
	while (str[i])
	{
		if ((int)str[i] > 96 && (int)str[i] < 123)
		{
			str[i] = str[i] - delta;
		}
		i++;
	}
	return (str);
}

/*
int main(void)
{
	char str1[24] = "CPROGRAMMINGISFUNFORALL";
	char str2[24] = "cprogrammingisfunforall";
	char str3[30] = "c programming is fun for all!";
	
	printf("str1 (%s) returns ", str1);
	printf("%s\n", ft_strupcase(str1));
	printf("str2 (%s) returns ", str2);
	printf("%s\n", ft_strupcase(str2));
	printf("str3 (%s) returns ", str3);
	printf("%s\n", ft_strupcase(str3));

	return 0;
}*/