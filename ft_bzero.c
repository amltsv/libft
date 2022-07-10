/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teevee <teevee@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/26 21:22:51 by teevee            #+#    #+#             */
/*   Updated: 2020/05/29 22:22:12 by teevee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t byte)
{
	unsigned char	*str;
	size_t			i;

	str = ptr;
	i = 0;
	while (i < byte)
	{
		str[i] = '\0';
		i++;
	}
}
