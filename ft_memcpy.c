/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teevee <teevee@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/26 21:28:13 by teevee            #+#    #+#             */
/*   Updated: 2020/05/30 12:35:10 by teevee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t byte)
{
	unsigned char			*d_str;
	const unsigned char		*s_str;
	size_t					i;

	if (!dst && !src)
		return (NULL);
	d_str = dst;
	s_str = src;
	i = 0;
	while (i < byte)
	{
		d_str[i] = s_str[i];
		i++;
	}
	return (dst);
}
