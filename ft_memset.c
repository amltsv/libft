/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teevee <teevee@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/26 21:14:33 by teevee            #+#    #+#             */
/*   Updated: 2020/05/30 12:35:07 by teevee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t byte)
{
	unsigned char	*str;
	unsigned char	set_value;
	size_t			i;

	str = ptr;
	set_value = value;
	i = 0;
	while (i < byte)
	{
		str[i] = set_value;
		i++;
	}
	return (ptr);
}
