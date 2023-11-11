/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghla <aaghla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:47:47 by aaghla            #+#    #+#             */
/*   Updated: 2023/11/06 21:53:49 by aaghla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
#include <string.h>

int	isthere(char const *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (1);
		s++;
	}
	return (0);
}

int	skipstart(char const *s, char const *set)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (isthere(set, s[i]))
			i++;
		else
			break ;
	}
	if (!s[i])
		return (-1);
	return (i);
}

int	skipend(char const *s, char const *set)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	i--;
	while (i >= 0)
	{
		if (isthere(set, s[i]))
			i--;
		else
			break ;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		j;
	int		n;

	n = 0;
	i = skipstart(s1, set);
	if (i < 0)
	{
		str = (char *)malloc(1);
		if (!str)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	j = skipend(s1, set);
	str = (char *)malloc(j - i + 2);
	if (!str)
		return (NULL);
	while (i <= j)
		str[n++] = s1[i++];
	str[n] = '\0';
	return (str);
}
