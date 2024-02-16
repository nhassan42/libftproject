/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabilhassan <nabilhassan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 18:56:47 by nabilhassan       #+#    #+#             */
/*   Updated: 2024/01/15 02:47:12 by nabilhassan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	slen;
	size_t	end;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	end = 0;
	if (slen > start)
		end = slen - start;
	if (end > len)
		end = len;
	new_str = (char *)malloc(sizeof(char) * len + 1);
	if (!new_str)
		return (NULL);
	ft_strlcpy(new_str, s + start, end + 1);
	return (new_str);
}
