/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabilhassan <nabilhassan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 03:58:25 by nabilhassan       #+#    #+#             */
/*   Updated: 2024/01/15 03:02:55 by nabilhassan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checkset(const char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	size;

	if (!s1 || !set)
		return (NULL);
	while (s1)
	{
		if (ft_checkset((char)*s1, set) == 1)
			s1++;
		else
			break ;
	}
	size = ft_strlen(s1);
	while (size != 0)
	{
		if (ft_checkset(s1[size - 1], set) == 1)
			size--;
		else
			break ;
	}
	str = (char *)malloc(sizeof(char) * size + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, (char *)s1, size + 1);
	return (str);
}
