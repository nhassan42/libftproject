/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabilhassan <nabilhassan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 02:29:07 by nabilhassan       #+#    #+#             */
/*   Updated: 2024/01/15 03:04:38 by nabilhassan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*destination;
	const char	*source;
	size_t		i;

	destination = (char *)dst;
	source = (const char *)src;
	if (dst < src)
	{
		i = 0;
		while (i < len)
		{
			destination[i] = source[i];
			i++;
		}
	}
	else
	{
		i = len;
		while (i > 0)
		{
			destination[i - 1] = source[i - 1];
			i--;
		}
	}
	return (dst);
}
