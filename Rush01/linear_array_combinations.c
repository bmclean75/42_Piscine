/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linear_array_combinations.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpawson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 15:32:06 by tpawson           #+#    #+#             */
/*   Updated: 2022/12/04 17:05:26 by tpawson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

//one global variable to contain array dimensions
extern int	g_array_dims;
//one global variable to contain number array
extern int	*g_numgrid;

//four global arrays to hold the boundary conditions
extern int	*g_up_array;
extern int	*g_down_array;
extern int	*g_left_array;
extern int	*g_right_array;

extern int	*g_up_array_calc;
extern int	*g_down_array_calc;
extern int	*g_left_array_calc;
extern int	*g_right_array_calc;

int		*idx(int row, int col);
void	exit_success(void);

int		count_dims(char string[]);
int		fill_boundary(char string[]);
int		fill_boundary_up(int s, char string[]);

void	calc_up(void);
void	calc_boundary_conditions(void);
int		check_boundary_conditions(void);
void	ft_putchar(int i);

void	output_grid(void)
{
	int	row;
	int	col;
	int	val;

	row = 0;
	col = 0;
	while (row < g_array_dims)
	{
		col = 0;
		while (col < g_array_dims)
		{
			val = *idx(row, col);
			ft_putchar(val + 48);
			if (col < g_array_dims - 1)
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}

int	check_rows_unique(void)
{
	int	r;
	int	i;
	int	j;

	r = 0;
	while (r < g_array_dims)
	{
		i = 0;
		while (i < g_array_dims)
		{
			j = 0;
			while (j < g_array_dims)
			{
				if (i != j)
				{
					if (*idx(r, i) == *idx(r, j))
						return (0);
				}
				j++;
			}
			i++;
		}
		r++;
	}
	return (1);
}

int	check_cols_unique(void)
{
	int	c;
	int	i;
	int	j;

	c = 0;
	while (c < g_array_dims)
	{
		i = 0;
		while (i < g_array_dims)
		{
			j = 0;
			while (j < g_array_dims)
			{
				if (i != j)
				{
					if (*idx(i, c) == *idx(j, c))
						return (0);
				}
				j++;
			}
			i++;
		}
		c++;
	}
	return (1);
}

int	check_combination(void)
{
	if (check_rows_unique() == 0)
		return (0);
	if (check_cols_unique() == 0)
		return (0);
	calc_boundary_conditions();
	if (check_boundary_conditions())
		exit_success();
	return (0);
}
