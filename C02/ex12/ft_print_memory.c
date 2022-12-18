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
#include <unistd.h>
//#include <stdio.h>

void	write_address_in_hex(char *a)
{
	char	buf[2];
	int		i;

	i = 0;
	while (i < 8)
	{
		buf[0] = "0123456789abcdef"[a[i] / 16];
		buf[1] = "0123456789abcdef"[a[i] % 16];
		write (1, buf, 2);
		i++;
	}
	write (1, ": ", 2);
}

void	write_char_in_hex_rangechecked(char *a, int index, int size)
{
	char	buf[2];

	if (index < size)
	{
		buf[0] = "0123456789abcdef"[*a / 16];
		buf[1] = "0123456789abcdef"[*a % 16];
		write (1, buf, 2);
	}
	else
	{
		write(1, "  ", 2);
	}
}

void	write_char_in_text_rangechecked(char *a, int index, int size)
{
	if (index < size && (*a >= 32 && *a <= 126))
	{
		write (1, a, 1);
	}
	else if (index >= size)
	{
		write (1, " ", 1);
	}
	else
	{
		write (1, ".", 1);
	}
}

void	print_text(char *str, int i, int size)
{
	int	j;

	j = 0;
	while (j < 16)
	{
		write_char_in_hex_rangechecked (&str[i + j], i + j, size);
		write_char_in_hex_rangechecked (&str[i + j + 1], i + j + 1, size);
		write (1, " ", 1);
		j = j + 2;
	}
	j = 0;
	while (j < 16)
	{
		write_char_in_text_rangechecked (&str[i + j], i + j, size);
		j++;
	}
	write (1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	char			*str;
	char			*temp;

	str = (char *)addr;
	i = 0;
	while (i < size)
	{
		temp = addr + i;
		write_address_in_hex(temp);
		print_text(str, i, size);
		i = i + 16;
	}
	return (addr);
}

/*
int	main(void)
{
	char s1[65] = "Abcdefghijkl mnopq rst uvwxyzabcdefghij klmnopqrs tuvwxyz";
	//insert a non-printables, should be replaced with "." in text...
	s1[5] = 10;
	s1[15] = 7;
	
	ft_print_memory(&s1, 58);
	return (1);
}
*/