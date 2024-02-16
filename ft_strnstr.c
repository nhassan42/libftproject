/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabilhassan <nabilhassan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 12:20:21 by nabilhassan       #+#    #+#             */
/*   Updated: 2024/01/15 02:44:53 by nabilhassan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (*needle == '\0')
		return ((char *) haystack);
	while (i < len && haystack[i] != '\0')
	{
		if (haystack[i] == *needle)
		{
			return ((char *)(haystack + i));
		}
		i++;
	}
	return (0);
}
