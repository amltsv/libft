/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teevee <teevee@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/26 23:07:27 by teevee            #+#    #+#             */
/*   Updated: 2020/05/29 22:22:45 by teevee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t size)
{
	size_t			i;
	size_t			tofsize;

	i = 0;
	tofsize = ft_strlen(to_find);
	if (tofsize == 0)
		return ((char *)str);
	if (tofsize <= ft_strlen(str) && tofsize <= size)
		while (str[i] != '\0' && i <= size - tofsize)
		{
			if (str[i] == to_find[0]
					&& ft_strncmp(&(str[i]), to_find, tofsize) == 0)
				return ((char *)&(str[i]));
			i++;
		}
	return (NULL);
}
