/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teevee <teevee@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/27 16:03:37 by teevee            #+#    #+#             */
/*   Updated: 2020/05/29 22:22:40 by teevee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	size_t		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ch)
			return ((char *)&str[i]);
		i++;
	}
	if (ch == '\0')
		return ((char *)&str[i]);
	return (NULL);
}
