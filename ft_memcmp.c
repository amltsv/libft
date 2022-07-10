/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teevee <teevee@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/26 22:28:27 by teevee            #+#    #+#             */
/*   Updated: 2020/05/29 22:22:33 by teevee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *ptr1, const void *ptr2, size_t byte)
{
	const unsigned char		*str1;
	const unsigned char		*str2;
	size_t					i;

	str1 = (const unsigned char *)ptr1;
	str2 = (const unsigned char *)ptr2;
	i = 0;
	if (byte == 0)
		return (0);
	while ((str1[i] == str2[i]) && (i < byte - 1))
		i++;
	return ((int)(str1[i] - str2[i]));
}
