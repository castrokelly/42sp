/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:56:02 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/02/17 23:15:46 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	lenght(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	size_dest;
	unsigned int	size_src;

	i = 0;
	size_dest = lenght(dest);
	size_src = lenght(src);
	if (size <= size_dest)
		return (size + size_src);
	while (src[i] && (size_dest + 1) < size)
	{
		dest[size_dest] = src[i];
		size_dest++;
		i++;
	}
	dest[size_dest] = '\0';
	return (lenght(dest) + lenght(&src[i]));
}
