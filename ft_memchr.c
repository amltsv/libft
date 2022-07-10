/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teevee <teevee@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/26 21:54:36 by teevee            #+#    #+#             */
/*   Updated: 2020/05/30 12:34:21 by teevee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int ch, size_t byte)
{
	const unsigned char		*str;
	unsigned char			c;
	size_t					i;

	str = ptr;
	c = ch;
	i = 0;
	while (i < byte)
	{
		if (str[i] == c)
			return ((void *)&ptr[i]);
		i++;
	}
	return (NULL);
}
