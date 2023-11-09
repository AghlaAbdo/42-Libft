/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghla <aaghla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:14:03 by aaghla            #+#    #+#             */
/*   Updated: 2023/11/09 11:18:35 by aaghla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	n;
	size_t	i;

	i = 0;
	n = ft_strlen(src);
	if (n < dstsize)
	{
		while (i <= n)
		{
			dst[i] = src[i];
			i++;
		}
	}
	else if (dstsize > 0)
	{
		while (src[i] != '\0' && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (n);
}

// int main()
// {
// 	char	*src = "Hello";
// 	char	dst[99];
// 	char	*src2 = "Hello";
// 	char	dst2[99];
// 	int		n = 0;
// 	int		i = ft_strlcpy(dst, src, n);
// 	int		j = strlcpy(dst2, src2, n);
// 	printf("ft_: %d\n%s\norigin: %d\n%s", i, dst, j, dst2);
// }