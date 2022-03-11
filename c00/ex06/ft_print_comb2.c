/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikharbac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 11:51:47 by ikharbac          #+#    #+#             */
/*   Updated: 2021/08/08 13:55:13 by ikharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_left_right(int a)
{
	ft_putchar(a / 10 + '0');
	ft_putchar(a % 10 + '0');
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print_left_right(a);
			ft_putchar(' ');
			ft_print_left_right(b);
			if (a != 98)
			{
				ft_putchar(' ');
				ft_putchar(',');
			}
			b++;
		}
		a++;
	}
}
