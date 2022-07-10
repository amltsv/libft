/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teevee <teevee@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/26 21:44:16 by teevee            #+#    #+#             */
/*   Updated: 2020/05/29 22:22:34 by teevee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*d_str;
	const unsigned char	*s_str;
	size_t				i;

	d_str = (unsigned char *)dst;
	s_str = (const unsigned char *)src;
	i = 1;
	if (src < dst)
	{
		while (i <= n)
		{
			d_str[n - i] = s_str[n - i];
			i++;
		}
	}
	else if (src > dst)
	{
		while (n--)
			*d_str++ = *s_str++;
	}
	else
		return (dst);
	return (dst);
}
