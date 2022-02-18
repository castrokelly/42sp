/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kechrist <kechrist@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 22:12:43 by kechrist          #+#    #+#             */
/*   Updated: 2022/02/18 18:20:35 by kechrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)

{
	int	swap;
	int	i;

	swap = 0;
	i = 0;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[((size -1) - i)];
		tab[((size -1) - i)] = swap;
		i++;
	}
}
