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

//gcc -Wall -Wextra -Werror ft_putstr_non_printable.c
#include<unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	buf[3];

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			write (1, &str[i], 1);
		}
		else
		{
			buf[0] = '\\';
			buf[1] = "0123456789abcdef"[str[i] / 16];
			buf[2] = "0123456789abcdef"[str[i] % 16];
			write (1, &buf, 3);
		}
		i++;
	}
}

/*
int	main(void)
{
	char s1[10] = "abcdefghi";
	char s2[10] = "abcde\nghi";
	//s2[5] = 10; //insert a non-printable line feed
	
	ft_putstr_non_printable(s1);
	write(1,"\n",1);
	ft_putstr_non_printable(s2);
	
	return (1);
}
*/