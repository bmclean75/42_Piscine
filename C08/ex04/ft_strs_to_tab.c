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
#include "ft_stock_str.h"

int	ft_str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_str_cp(char *src)
{
	int		i;
	char	*myptr;

	i = ft_str_len(src);
	myptr = malloc((i + 1) * sizeof(char));
	if (!myptr)
		return (NULL);
	i = 0;
	while (src[i])
	{
		myptr[i] = src[i];
		i++;
	}
	myptr[i] = '\0';
	return (myptr);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int				i;
	t_stock_str		*myptr;

	myptr = malloc((ac + 1) * sizeof(t_stock_str));
	if (!myptr)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		myptr[i].str = av[i];
		myptr[i].size = ft_str_len(av[i]);
		myptr[i].copy = ft_str_cp(av[i]);
		i++;
	}
	myptr[i].str = 0;
	return (myptr);
}

/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	t_stock_str	*tab;
	tab = ft_strs_to_tab(argc, argv);
	int i = 0;
	while (i < argc)
	{
		printf("%s | %d | %s\n", tab[i].str, tab[i].size, tab[i].copy);
		i++;
	}
	free(tab);
	return (0);
}
*/