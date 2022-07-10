/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teevee <teevee@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/27 16:58:54 by teevee            #+#    #+#             */
/*   Updated: 2020/05/29 22:22:44 by teevee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*sreturn;
	size_t			i;

	if (!(s && f))
		return (NULL);
	if (!(sreturn = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		sreturn[i] = f(i, s[i]);
		i++;
	}
	sreturn[i] = '\0';
	return (sreturn);
}
