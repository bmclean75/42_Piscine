/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headerfile.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmclean <bmclean@student.42adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 12:40:10 by bmclean           #+#    #+#             */
/*   Updated: 2022/12/13 16:05:21 by bmclean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*strconcat(char *dest, char *src, char *sep)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	j = 0;
	while (sep[j])
	{
		dest[i] = sep[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	sepstrlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	arraystrlen(int size, char **strs)
{
	int	s;
	int	i;
	int	lenstr;

	s = 0;
	lenstr = 0;
	while (s < size)
	{
		i = 0;
		while (strs[s][i])
		{
			lenstr++;
			i++;
		}
		s++;
	}
	return (lenstr);
}

int	findtotlen(int size, char **strs, char *sep)
{
	return (arraystrlen(size, strs) + (size - 1) * sepstrlen(sep));
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*rtnstr;
	int		len;
	int		i;

	if (size == 0)
	{
		rtnstr = (char *)malloc(sizeof(char));
		return (rtnstr);
	}
	len = arraystrlen(size, strs);
	rtnstr = (char *)malloc((len + (size - 1) * sepstrlen(sep))
			* sizeof(char *) + 1);
	if (!rtnstr)
		return (NULL);
	rtnstr[0] = '\0';
	i = 0;
	while (i < size)
	{
		if (i == size - 1)
			rtnstr = strconcat(rtnstr, strs[i], "\0");
		else
			rtnstr = strconcat(rtnstr, strs[i], sep);
		i++;
	}
	return (rtnstr);
}

/*
#include<unistd.h>
int    main(void)
{
    char    *strs[] = {"I", "don't", "give", "up."};
    char    sep[] = "---";

    write(1, ft_strjoin(4, strs, sep), 100);
    free(ft_strjoin(0, strs, sep));

	char    *strs2[] = {};
    char    sep2[] = {};

    write(1, ft_strjoin(0, strs2, sep2), 100);
    free(ft_strjoin(0, strs2, sep2));

    return (0);
}
*/
