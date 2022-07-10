/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teevee <teevee@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/27 21:51:19 by teevee            #+#    #+#             */
/*   Updated: 2020/05/29 22:22:27 by teevee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list			*head_lst;
	t_list			*tmp;

	if (!(lst && f))
		return (NULL);
	head_lst = NULL;
	while (lst != NULL)
	{
		if (!(tmp = ft_lstnew((*f)(lst->content))))
		{
			ft_lstclear(&head_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&head_lst, tmp);
		lst = lst->next;
	}
	return (head_lst);
}
