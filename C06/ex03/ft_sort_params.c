/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headerfile.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmclean <bmclean@student.42adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 12:40:10 by bmclean           #+#    #+#             */
/*   Updated: 2022/12/08 15:36:27 by bmclean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_params(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	check_order(char *argv[], int i, int j)
{
	char	*temp;

	if (!argv[i][j] && argv[i + 1][j])
		return (0);
	else if (argv[i][j] && !argv[i + 1][j])
	{
		temp = argv[i];
		argv[i] = argv[i + 1];
		argv[i + 1] = temp;
		return (1);
	}
	else if (argv[i][j] > argv[i + 1][j])
	{
		temp = argv[i];
		argv[i] = argv[i + 1];
		argv[i + 1] = temp;
		return (1);
	}
	else
	{
		return (0);
	}
}

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	int		madechange;

	madechange = 1;
	while (madechange == 1)
	{
		madechange = 0;
		i = 1;
		while (i < argc - 1)
		{
			j = 0;
			while (argv[i][j] || argv[i + 1][j])
			{
				madechange = check_order(argv, i, j);
				j++;
			}
			i++;
		}
	}
	ft_print_params(argc, argv);
	return (0);
}
