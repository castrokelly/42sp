/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <harndt@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 21:58:54 by johmatos          #+#    #+#             */
/*   Updated: 2022/02/07 02:40:13 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char letter);

void	ft_print_header(int line)
{
	int	l_counter;

	l_counter = 1;
	while (l_counter <= line)
	{
		if (l_counter == 1)
		{
			ft_putchar('A');
			l_counter++;
		}
		else if (l_counter == line)
		{
			ft_putchar('C');
			l_counter++;
		}
		else
		{
			ft_putchar('B');
			l_counter++;
		}
	}
}

void	ft_print_body(int line, int column)
{
	int	l_counter;
	int	c_counter;

	l_counter = 1;
	c_counter = 1;
	column -= 2;
	while (c_counter <= column)
	{
		if (l_counter == 1 || l_counter == line)
		{
			ft_putchar('B');
			if (l_counter == line)
			{
				ft_putchar('\n');
				c_counter++;
				l_counter = 0;
			}
			l_counter++;
		}
		else
		{
			ft_putchar(' ');
			l_counter++;
		}
	}
}

void	ft_print_footer(int line)
{
	int	l_counter;

	l_counter = 1;
	while (l_counter <= line)
	{
		if (l_counter == 1)
		{
			ft_putchar('A');
			l_counter++;
		}
		else if (l_counter == line)
		{
			ft_putchar('C');
			l_counter++;
		}
		else
		{
			ft_putchar('B');
			l_counter++;
		}
	}
}

void	rush(int x, int y)
{
	if (x >= 1 && y >= 1)
	{
		ft_print_header(x);
		ft_putchar('\n');
		ft_print_body(x, y);
		if (y > 1)
		{
			ft_print_footer(x);
			ft_putchar('\n');
		}
	}
}
