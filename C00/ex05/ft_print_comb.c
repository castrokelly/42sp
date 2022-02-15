/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kechrist <kechrist@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 10:04:36 by kechrist          #+#    #+#             */
/*   Updated: 2022/02/10 18:05:01 by kechrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_result(char hundred, char decimal, char units);

void	ft_print_comb(void)
{
	char	units;
	char	decimal;
	char	hundred;

	units = '0';
	decimal = '0';
	hundred = '0';
	while (hundred <= '7')
	{
		decimal = hundred + 1;
		while (decimal <= '8')
		{
			units = decimal + 1;
			while (units <= '9')
			{
				ft_print_result (hundred, decimal, units);
				units++;
			}
			decimal++;
		}	
		hundred++;
	}
}

void	ft_print_result(char hundred, char decimal, char units)
{
	write (1, &hundred, 1);
	write (1, &decimal, 1);
	write (1, &units, 1);
	if (hundred != '7')
	{
		write (1, ", ", 2);
	}
}
