/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghla <aaghla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 22:19:03 by aaghla            #+#    #+#             */
/*   Updated: 2023/11/04 13:11:36 by aaghla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*from;
	char	*to;
	size_t	n;

	from = (char *)src;
	to = (char *)dst;
	n = len;
	if (from == to || len == 0)
		return (dst);
	if (from < to && to < from + len)
	{
		from += len - 1;
		to += len - 1;
		while (len-- > 0)
			*to-- = *from--;
	}
	else
	{
		while (n-- > 0)
			*to++ = *from++;
	}
	return (dst);
}

// int main() {
//     char str[] = "Hello, World!";
//     char buffer[20];

//     printf("Original: %s\n", str);

//     // Using ft_memmove to move a substring within the string
//     ft_memmove(str + 4, str + 1, 7);

//     printf("After ft_memmove: %s\n", str);

//     // Using ft_memmove to copy data to a buffer
//     ft_memmove(buffer, str, 10);

//     printf("Buffer: %s\n", buffer);

//     return 0;
// }