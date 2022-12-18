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

/*
keeps calling putnbr with nb/10 until the highest column is obtained,
then outputs with putchar.*/

#include <unistd.h>

void	ft_putchar(int i)
{
	write(1, &i, 1);
}

int	check_base_for_signs(char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	return (1);
}

int	check_base_for_repeats(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[i])
	{
		while (base[j])
		{
			if (i != j && base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	find_base_len(char *base)
{
	int	base_len;

	base_len = 0;
	while (base[base_len])
		base_len++;
	if (base_len == 0 || base_len == 1
		|| !check_base_for_signs(base) || !check_base_for_repeats(base))
		return (0);
	else
		return (base_len);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			base_len;
	long int	lnbr;

	base_len = find_base_len(base);
	lnbr = nbr;
	if (base_len != 0)
	{
		if (lnbr < 0)
		{
			ft_putchar('-');
			lnbr = -lnbr;
		}
		if (lnbr >= base_len)
		{
			ft_putnbr_base(lnbr / base_len, base);
			{
				lnbr = lnbr % base_len;
			}
		}
		if (lnbr < base_len)
			ft_putchar(base[lnbr]);
	}
}
/*
int main(void){

	ft_putnbr_base(-2147483648,"0123456789");
	write (1, "\n", 1);
	ft_putnbr_base(101010,"0123456789");
	write (1, "\n", 1);
	ft_putnbr_base(214767647,"01");
	write (1, "\n", 1);
	ft_putnbr_base(123456789,"qwerty");
	write (1, "\n", 1);
	ft_putnbr_base(0,"qwerty");
	write (1, "\n", 1);
	ft_putnbr_base(2147483647,"1");
	write (1, "\n", 1);
	ft_putnbr_base(2147483647,"-231");
	write (1, "\n", 1);
	ft_putnbr_base(123456789,"hslhjgfg");
	write (1, "\n", 1);

	return (1);
}
*/