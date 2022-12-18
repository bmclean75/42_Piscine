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

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	if (max <= min)
	{
		return (NULL);
	}
	arr = (int *)malloc((max - min) * sizeof(int));
	i = 0;
	while (i < max - min)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}

/*
#include<unistd.h>
int    main(void)
{
    int	*ptr;
    int	i;

    ptr = ft_range(65, 90);
	//range is ascii A-Z, should return A-Y (max is excluded)
    i = 0;
    while (ptr[i])
    {
        write(1, &ptr[i], 1);
        i++;
    }
    return (0);
}*/