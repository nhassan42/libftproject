/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabilhassan <nabilhassan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 06:59:29 by nabilhassan       #+#    #+#             */
/*   Updated: 2024/02/16 13:16:45 by nabilhassan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_tochar(char *str, unsigned int number, long int len)
{
	while (number > 0)
	{
		str[len--] = (number % 10) + '0';
		number = number / 10;
	}
	return (str);
}

static long int	ft_intlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	int		number;
	char	*str;

	len = ft_intlen(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (n == 0)
		str[0] = '0';
	else if (n < 0)
	{
		number = -n;
		str[0] = '-';
	}
	else
		number = n;
	if (n != 0)
		str = ft_tochar(str, number, len);
	return (str);
}
