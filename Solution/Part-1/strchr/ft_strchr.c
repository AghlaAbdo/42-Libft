/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghla <aaghla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 21:19:13 by aaghla            #+#    #+#             */
/*   Updated: 2023/11/06 21:51:16 by aaghla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}

// int	main()
// {
// 	const char s[] = "Hello there";
// 	char c = ';';
// 	char *ch = ft_strchr(s, c);
// 	char *sh = strchr(s, c);
// 	printf("%s\n%s", ch, sh);
// }