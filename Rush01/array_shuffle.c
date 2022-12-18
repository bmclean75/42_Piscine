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
int		check_combination(void);

void	init_array(void)
{
	int	row;
	int	col;

	row = 0;
	while (row < g_array_dims)
	{
		col = 0;
		while (col < g_array_dims)
		{
			*idx(row, col) = col + 1;
			col++;
		}
		row++;
	}
}

void	swap(int *i, int *j)
{
	int	temp;

	temp = *i;
	*i = *j;
	*j = temp;
}

//recursive function to permutate the contents of the inner array
//this currently permutates the whole [g_array_dims * g_array_dims] array...
//it will be much more efficient if permutations are done row by row
//as rows are initialised 1,2,3,4...
void	run_combinations(int index, int *arr)
{
	int	n;
	int	i;

	check_combination();
	i = index;
	n = g_array_dims * g_array_dims;
	while (i < n)
	{
		swap (arr + index, arr + i);
		run_combinations (index + 1, arr);
		swap (arr + i, arr + index);
		i++;
	}
}
