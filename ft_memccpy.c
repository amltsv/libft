/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teevee <teevee@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/26 21:33:49 by teevee            #+#    #+#             */
/*   Updated: 2020/05/30 12:22:57 by teevee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int ch, size_t byte)
{
	unsigned char			*d_str;
	const unsigned char		*s_str;
	unsigned char			c;
	size_t					i;

	d_str = dst;
	s_str = src;
	c = ch;
	i = 0;
	while (i < byte)
	{
		d_str[i] = s_str[i];
		if (s_str[i] == c)
			return ((void *)&(dst[i + 1]));
		i++;
	}
	return (NULL);
}
