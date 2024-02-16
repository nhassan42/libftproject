/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabilhassan <nabilhassan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 18:05:07 by nabilhassan       #+#    #+#             */
/*   Updated: 2024/01/15 02:40:00 by nabilhassan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*ptr;

	len = ft_strlen(s1);
	ptr = (char *)malloc(len * sizeof(char) + 1);
	if (ptr == NULL)
		return (NULL);
	ft_memcpy(ptr, s1, len);
	ptr[len] = '\0';
	return (ptr);
}
