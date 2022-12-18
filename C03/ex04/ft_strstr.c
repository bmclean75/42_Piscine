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

/*The C library function char *strstr(const char *haystack, const char *needle)
function finds the first occurrence of the substring needle in the string
haystack. The terminating '\0' characters are not compared.*/

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		n;
	char	*matchptr;

	i = 0;
	while (str[i] != '\0')
	{
		if (to_find[0] == str[i])
		{
			matchptr = &str[i];
			n = 0;
			while (to_find[n] != '\0')
			{
				if (to_find[n] != str[i + n])
				{
					matchptr = 0;
					break ;
				}
				n++;
			}
		}
		i++;
	}
	return (matchptr);
}
/*
#include <stdio.h>
int main () {
	char haystack[30] = "The same cat sat on the mat";
	char needle1[10] = "dog";
	char needle2[10] = "cat";
	char *ret;

	ret = ft_strstr(haystack, needle1);
	printf("The substring: %s\n", needle1);
	printf("The main string: %s\n", haystack);
	printf("The substring occurs at: %s\n\n", ret);

	ret = ft_strstr(haystack, needle2);
	printf("The substring: %s\n", needle2);
	printf("The main string: %s\n", haystack);
	printf("The substring occurs at: %s\n", ret);
}
*/