/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghla <aaghla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 21:29:11 by aaghla            #+#    #+#             */
/*   Updated: 2023/11/08 21:21:45 by aaghla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const unsigned char	*from;
	unsigned char		*to;

	if (!dst && !src && n)
		return (NULL);
	from = src;
	to = dst;
	while (n > 0)
	{
		*to = *from;
		to++;
		from++;
		n--;
	}
	return (dst);
}

// int	main()
// {
// 	char *src = NULL;
// 	char	*dst = NULL;
// 	char *src2 = NULL;
// 	char *dst2 = NULL;
// 	int n = 1;
// 	// printf("src: %s\n", src);
// 	memcpy(dst, src, n);
// 	ft_memcpy(dst2, src2, n);
// 	printf("%s\n%s", dst, dst2);
// }

// int	main()
// {
// 	int src = 2147483647;
// 	int	dst;
// 	printf("src: %d\n", src);
// 	ft_memcpy(&dst, &src, 5);
// 	printf("%d", dst);
// }