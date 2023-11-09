/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghla <aaghla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 22:10:25 by aaghla            #+#    #+#             */
/*   Updated: 2023/11/07 12:51:32 by aaghla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (!n)
		return (0);
	while (--n && (*str1 || *str2) && *str1 == *str2)
	{
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}

// int	main()
// {
// 	const char s1[] = "Hello ther";
// 	const char s2[] = "Hello the";
// 	int n = 9;
// 	int i = ft_strncmp(s1, s2, n);
// 	int j = strncmp(s1, s2, n);
// 	printf("%d\n%d\n\n", i, j);
// 	printf("%d\n", ft_strncmp("test", "testss", 7));
// }