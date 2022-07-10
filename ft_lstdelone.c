/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teevee <teevee@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/27 21:44:08 by teevee            #+#    #+#             */
/*   Updated: 2020/05/29 22:22:26 by teevee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!(lst && del))
		return ;
	(*del)(lst->content);
	free(lst);
	lst = NULL;
}
