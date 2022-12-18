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

/*The C library function int strcmp(const char *str1, const char *str2) compares
the string pointed to, by str1 to the string pointed to by str2.
If Return value < 0 then it indicates str1 is less than str2.
If Return value > 0 then it indicates str2 is less than str1.
If Return value = 0 then it indicates str1 is equal to str2.*/

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (1)
	{
		if (s1[i] && !s2[i])
			return (1);
		else if (!s1[i] && s2[i])
			return (-1);
		else if (!s1[i] && !s2[i])
			return (0);
		else if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
int main(void)
{
    char s1[] = {"abcd"};
    char s2[] = {"abcd"};
    printf("%s\n%s\n%i\n\n", s1, s2, ft_strcmp(s1,s2));
    char s3[] = {"abbd"};
    printf("%s\n%s\n%i\n\n", s1, s3, ft_strcmp(s1,s3));
    char s4[] = {"abdd"};
    printf("%s\n%s\n%i\n\n", s1, s4, ft_strcmp(s1,s4));
    char s5[] = {"abc"};
    printf("%s\n%s\n%i\n\n", s1, s5, ft_strcmp(s1,s5));
    printf("%s\n%s\n%i\n\n", s5, s1, ft_strcmp(s5,s1));
}
*/