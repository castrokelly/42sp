/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kechrist <kechrist@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 11:02:19 by kechrist          #+#    #+#             */
/*   Updated: 2022/02/15 10:55:42 by kechrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char c)
{
	write(1, &c, 1);
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
			ft_print('0' + (a / 10));
			ft_print('0' + (a % 10));
			write(1, " ", 1);
			ft_print('0' + (b / 10));
			ft_print('0' + (b % 10));
			if (a != 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
