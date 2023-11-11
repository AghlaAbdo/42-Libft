/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghla <aaghla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:57:40 by aaghla            #+#    #+#             */
/*   Updated: 2023/11/07 12:34:26 by aaghla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	len_src;
	size_t	len_dst;
	size_t	i;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	i = 0;
	if (size > len_dst)
		len = len_src + len_dst;
	else
		len = len_src + size;
	while (src[i] && (len_dst + 1) < size)
		dst[len_dst++] = src[i++];
	dst[len_dst] = '\0';
	return (len);
}

// int	main()
// {
// 	const char	src[] = "There !";
// 	char	dst[10] = "a";
// 	int		i = ft_strlcat(dst, "lorem ipsum dolor sit amet", 1);
// 	int		n = strlcat(dst, "lorem ipsum dolor sit amet", 1);

// 	printf("%s\n%d\n origin: %d", dst, i, n);
// }
