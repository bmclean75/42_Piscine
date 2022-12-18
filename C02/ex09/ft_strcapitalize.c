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

//gcc -Wall -Wextra -Werror ft_strcapitalize.c
//#include <stdio.h> //for testing only

int	ft_is_lowercase(char letter)
{
	int	is_lc;

	is_lc = 1;
	if ((int)letter < 97 || (int)letter > 122)
	{
		is_lc = 0;
	}
	return (is_lc);
}

int	ft_is_uppercase(char letter)
{
	int	is_uc;

	is_uc = 1;
	if ((int)letter < 65 || (int)letter > 90)
	{
		is_uc = 0;
	}
	return (is_uc);
}

int	ft_is_printable(char letter)
{
	int	is_print;

	is_print = 1;
	if ((int)letter < 48 || ((int)letter > 57 && (int)letter < 65)
		|| (int)letter > 126 || (int)letter == 32)
	{
		is_print = 0;
	}
	return (is_print);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_firstletter;

	is_firstletter = 1;
	i = 0;
	while (str[i])
	{
		if (ft_is_uppercase(str[i]) == 1 && is_firstletter == 0)
			str[i] = str[i] + 32;
		if (ft_is_lowercase(str[i]) == 1 && is_firstletter == 1)
		{
			str[i] = str[i] - 32;
			is_firstletter = 0;
		}
		if (ft_is_printable(str[i]) == 1)
			is_firstletter = 0;
		if (str[i] == 32 || str[i] == 9 || str[i] == 10)
			is_firstletter = 1;
		i++;
	}
	return (str);
}

/*
int main(void)
{
	char str1[30] = "C PROGRAMMING IS FUN FOR ALL";
	char str2[30] = "c programming is fun for all";
	char str3[30] = "c 64ogra2ming is +un for all!";
	char str4[30] = "c 64ogram	ming is %un for all";
	
	printf("str1 (%s) returns ", str1);
	printf("%s\n", ft_strcapitalize(str1));
	printf("str2 (%s) returns ", str2);
	printf("%s\n", ft_strcapitalize(str2));
	printf("str3 (%s) returns ", str3);
	printf("%s\n", ft_strcapitalize(str3));
	printf("str4 (%s) returns ", str4);
	printf("%s\n", ft_strcapitalize(str4));
	
	return 0;
}*/