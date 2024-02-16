/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabilhassan <nabilhassan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 02:57:03 by nabilhassan       #+#    #+#             */
/*   Updated: 2024/01/15 03:06:48 by nabilhassan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	k;

	i = 0;
	while (dst[i] != '\0' && i < dstsize)
		i++;
	dst_len = i;
	if (dstsize == 0)
	{
		return (ft_strlen(src));
	}
	if (dst_len == dstsize)
		return (dstsize + ft_strlen(src));
	k = 0;
	while (src[k] != '\0' && i < (dstsize - 1))
	{
		dst[i] = src[k];
		i++;
		k++;
	}
	dst[i] = '\0';
	return (dst_len + ft_strlen(src));
}
