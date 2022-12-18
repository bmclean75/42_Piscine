/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_boundary_conditions.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhe <nhe@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 16:14:45 by nhe               #+#    #+#             */
/*   Updated: 2022/12/04 16:14:46 by nhe              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern int	g_array_dims;
extern int	*g_up_array;
extern int	*g_down_array;
extern int	*g_left_array;
extern int	*g_right_array;
extern int	*g_up_array_calc;
extern int	*g_down_array_calc;
extern int	*g_left_array_calc;
extern int	*g_right_array_calc;

//declare functions found in boundary_conditions.c
void	calc_up(void);
void	calc_down(void);
void	calc_left(void);
void	calc_right(void);

void	calc_boundary_conditions(void)
{
	calc_down();
	calc_up();
	calc_left();
	calc_right();
}

int	check_boundary_conditions(void)
{
	int	i;

	i = 0;
	while (i < g_array_dims)
	{
		if (g_up_array_calc[i] != g_up_array[i])
			return (0);
		if (g_down_array_calc[i] != g_down_array[i])
			return (0);
		if (g_left_array_calc[i] != g_left_array[i])
			return (0);
		if (g_right_array_calc[i] != g_right_array[i])
			return (0);
		i++;
	}
	return (1);
}
