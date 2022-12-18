/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reading_argv2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhe <nhe@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 12:40:10 by bmclean           #+#    #+#             */
/*   Updated: 2022/12/04 16:21:40 by nhe              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

extern int	g_array_dims;
extern int	*g_numgrid;
extern int	*g_up_array;
extern int	*g_down_array;
extern int	*g_left_array;
extern int	*g_right_array;

extern int	*g_up_array_calc;
extern int	*g_down_array_calc;
extern int	*g_left_array_calc;
extern int	*g_right_array_calc;

void	exit_fail(void);

int	count_dims(char string[])
{
	int	i;
	int	s;
	int	dim;

	i = 0;
	s = 0;
	while (string[s])
	{
		if (string[s] != ' ')
		{
			i++;
		}
		s++;
	}
	if (i % 4 != 0)
	{
		exit_fail();
	}
	dim = i / 4;
	return (dim);
}

int	fill_boundary_array(int s, char string[], int array[])
{
	int	i;

	i = 0;
	while (string[s] && i < g_array_dims)
	{
		if (string[s] != ' ')
		{
			array[i] = string[s] - 48;
			if (array[i] < 1 || array[i] > g_array_dims)
				exit_fail();
			i++;
		}
		s++;
	}
	return (s);
}

void	fill_boundary(char string[])
{
	int	i;
	int	s;

	i = 0;
	s = 0;
	s = fill_boundary_array(s, string, g_up_array);
	s = fill_boundary_array(s, string, g_down_array);
	s = fill_boundary_array(s, string, g_left_array);
	s = fill_boundary_array(s, string, g_right_array);
}
