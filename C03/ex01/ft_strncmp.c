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

/*The C library function int strncmp(const char *str1, const char *str2,
size_t n) compares at most the first n bytes of str1 and str2.
If Return value < 0 then it indicates str1 is less than str2.
If Return value > 0 then it indicates str2 is less than str1.
If Return value = 0 then it indicates str1 is equal to str2.*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
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
    printf("%s n=3\n%s\n%i\n\n", s1, s2, ft_strncmp(s1,s2,3));
    char s3[] = {"abbd"};
    printf("%s n=2\n%s\n%i\n\n", s1, s3, ft_strncmp(s1,s3,2));
    char s4[] = {"abdd"};
    printf("%s n=2\n%s\n%i\n\n", s1, s4, ft_strncmp(s1,s4,2));
    char s5[] = {"abc"};
    printf("%s n=3\n%s\n%i\n\n", s1, s5, ft_strncmp(s1,s5,3));
    printf("%s n=3\n%s\n%i\n\n", s5, s1, ft_strncmp(s5,s1,3));
}
*/
