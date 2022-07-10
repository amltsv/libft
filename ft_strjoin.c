/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teevee <teevee@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/27 16:38:23 by teevee            #+#    #+#             */
/*   Updated: 2020/05/29 22:22:41 by teevee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(const char *s1, const char *s2)
{
	char		*joinstr;
	size_t		sizes1;
	size_t		i;

	if (!(s1 && s1))
		return (NULL);
	if (!(joinstr = (char *)malloc(sizeof(char) \
	* ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		joinstr[i] = s1[i];
		i++;
	}
	sizes1 = ft_strlen(s1);
	while (s2[i - sizes1] != '\0')
	{
		joinstr[i] = s2[i - sizes1];
		i++;
	}
	joinstr[i] = '\0';
	return (joinstr);
}
