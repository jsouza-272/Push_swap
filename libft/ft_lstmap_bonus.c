/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsouza <jsouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 14:45:17 by jsouza            #+#    #+#             */
/*   Updated: 2025/11/04 15:11:05 by jsouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief
/// @param lst
/// @param f
/// @param del
/// @return
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nhead;
	t_list	*nnode;
	void	*temp;

	nhead = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		temp = f(lst->content);
		if (!temp)
		{
			free(temp);
			return (NULL);
		}
		nnode = ft_lstnew(temp);
		if (!nnode)
		{
			ft_lstclear(&nhead, del);
			return (NULL);
		}
		ft_lstadd_back(&nhead, nnode);
		lst = lst->next;
	}
	return (nhead);
}
