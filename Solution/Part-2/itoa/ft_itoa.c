/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghla <aaghla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:27:35 by aaghla            #+#    #+#             */
/*   Updated: 2023/11/07 21:42:26 by aaghla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

void	swap(char *s, unsigned int num, int sign)
{
	char	temp;
	int		start;
	int		end;

	start = 0;
	if (sign < 0)
		s[start++] = '-';
	while (num > 0)
	{
		s[start++] = num % 10 + 48;
		num /= 10;
	}
	s[start] = '\0';
	start = 0;
	end = ft_strlen(s) - 1;
	if (sign < 0)
		start++;
	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}

char	*minint(char *s, int n)
{
	unsigned int	num;
	int				i;

	i = 0;
	num = (unsigned int)n;
	s = (char *)malloc(12);
	if (!s)
		return (NULL);
	swap(s, num, -1);
	return (s);
}

int	sizeofn(int n)
{
	int	i;

	if (n < 0)
		n = -n;
	i = 0;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*iszero(char *s)
{
	int	i;

	i = 0;
	s = (char *)malloc(2);
	if (!s)
		return (NULL);
	s[i++] = '0';
	s[i] = '\0';
	return (s);
}

char	*ft_itoa(int n)
{
	char	*number;
	int		i;
	int		sign;

	sign = 1;
	number = NULL;
	i = 0;
	if (n == -2147483648)
		return (minint(number, n));
	if (n == 0)
		return (iszero(number));
	i = sizeofn(n);
	if (n < 0)
	{
		n = -n;
		sign = -sign;
		i++;
	}
	number = (char *)malloc(i + 1);
	if (!number)
		return (NULL);
	swap(number, n, sign);
	return (number);
}

// int main()
// {
// 	char *num = ft_itoa(1254);
// 	printf("%s", num);
// }