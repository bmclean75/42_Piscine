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
#include <stdlib.h>
#include <unistd.h>

//one global variable to contain array dimensions
int	g_array_dims;

//one global variable to contain number array
int	*g_numgrid;

//four global arrays to hold the boundary conditions
int	*g_up_array;
int	*g_down_array;
int	*g_left_array;
int	*g_right_array;

//four global arrays to hold calculated boundary values
int	*g_up_array_calc;
int	*g_down_array_calc;
int	*g_left_array_calc;
int	*g_right_array_calc;

//functions from reading_argv2.c
int		count_dims(char string[]);
int		fill_boundary(char string[]);
int		fill_boundary_up(int s, char string[]);

//functions from boundary_conditions.c
void	calc_up(void);
void	calc_boundary_conditions(void);
int		check_boundary_conditions(void);

//functions from linear_array_combinations.c
void	output_grid(void);
void	run_combinations(int index, int *arr);
void	init_array(void);

//func for indexing number array by row and column
int	*idx(int row, int col)
{
	return (&g_numgrid[row * g_array_dims + col]);
}

void	exit_success(void)
{
	output_grid();
	exit (1);
}

void	exit_fail(void)
{
	write (1, "Error\n", 6);
	exit (0);
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
		exit_fail();
	g_array_dims = count_dims(argv[1]);
	g_up_array = malloc(g_array_dims * 4);
	g_down_array = malloc(g_array_dims * 4);
	g_left_array = malloc(g_array_dims * 4);
	g_right_array = malloc(g_array_dims * 4);
	g_up_array_calc = malloc(g_array_dims * 4);
	g_down_array_calc = malloc(g_array_dims * 4);
	g_left_array_calc = malloc(g_array_dims * 4);
	g_right_array_calc = malloc(g_array_dims * 4);
	fill_boundary(argv[1]);
	g_numgrid = malloc(g_array_dims * g_array_dims * sizeof(int));
	init_array();
	run_combinations(0, g_numgrid);
	exit_fail();
	return (1);
}
