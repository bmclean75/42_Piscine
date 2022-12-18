/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   boundary_conditions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhe <nhe@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 12:40:10 by bmclean           #+#    #+#             */
/*   Updated: 2022/12/04 16:14:03 by nhe              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
int	*idx(int row, int col);

void	calc_up(void)
{
	int	col;
	int	row;
	int	max;
	int	sum;

	max = 0;
	col = 0;
	while (col < g_array_dims)
	{
		row = 0;
		sum = 1;
		max = *idx(row, col);
		while (row < g_array_dims)
		{
			if (*idx(row, col) > max)
			{
				sum++;
				max = *idx(row, col);
			}
			row++;
		}
		g_up_array_calc[col] = sum;
		col++;
	}
}

void	calc_down(void)
{
	int	col;
	int	row;
	int	max;
	int	sum;

	max = 0;
	col = 0;
	while (col < g_array_dims)
	{
		row = g_array_dims - 1;
		sum = 1;
		max = *idx(row, col);
		while (row >= 0)
		{
			if (*idx(row, col) > max)
			{
				sum++;
				max = *idx(row, col);
			}
			row--;
		}
		g_down_array_calc[col] = sum;
		col++;
	}
}

void	calc_left(void)
{
	int	col;
	int	row;
	int	max;
	int	sum;

	max = 0;
	row = 0;
	while (row < g_array_dims)
	{
		col = 0;
		sum = 1;
		max = *idx(row, col);
		while (col < g_array_dims)
		{
			if (*idx(row, col) > max)
			{
				sum++;
				max = *idx(row, col);
			}
			col++;
		}
		g_left_array_calc[row] = sum;
		row++;
	}
}

void	calc_right(void)
{
	int	col;
	int	row;
	int	max;
	int	sum;

	max = 0;
	row = 0;
	while (row < g_array_dims)
	{
		col = g_array_dims - 1;
		sum = 1;
		max = *idx(row, col);
		while (col >= 0)
		{
			if (*idx(row, col) > max)
			{
				sum++;
				max = *idx(row, col);
			}
			col--;
		}
		g_right_array_calc[row] = sum;
		row++;
	}
}
