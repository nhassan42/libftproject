/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabilhassan <nabilhassan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 10:18:45 by nabilhassan       #+#    #+#             */
/*   Updated: 2024/01/18 13:20:55 by nabilhassan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newelm;

	newelm = (t_list *)malloc(sizeof(t_list));
	if (!newelm)
		return (NULL);
	newelm->content = content;
	newelm->next = NULL;
	return (newelm);
}
