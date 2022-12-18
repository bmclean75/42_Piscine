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

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*ptr;

	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	ptr = (int *)malloc((max - min) * sizeof(int));
	if (ptr == NULL)
		return (-1);
	i = 0;
	while (i < max - min)
	{
		ptr[i] = min + i;
		i++;
	}
	*range = ptr;
	return (i);
}

/*
#include<unistd.h>
int    main(void)
{
    int    *tmp = NULL;
    int    **range = &tmp;
    int    *ptr = NULL;
    int    i;
    int    n;

    n = ft_ultimate_range(range, 'A', 'Z');
    i = 0;
    ptr = *range;
    while (i < n)
    {
        write(1, &ptr[i], 1);
        i++;
    }
    return (0);
}*/