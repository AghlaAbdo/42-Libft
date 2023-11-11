/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghla <aaghla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 08:29:46 by aaghla            #+#    #+#             */
/*   Updated: 2023/11/07 12:54:37 by aaghla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	if (!n)
		return (0);
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (--n && *str1 == *str2)
	{
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}

// int	main()
// {
// 	char *s1 = "Hello 4here";
// 	char s2[] = "Hello there";
// 	int n = 8;
// 	int i = ft_memcmp(s1, s2, n);
// 	int j = memcmp(s1, s2, n);
// 	printf("%d\n%d", i, j);
// }