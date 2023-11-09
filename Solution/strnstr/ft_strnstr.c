/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghla <aaghla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 09:13:11 by aaghla            #+#    #+#             */
/*   Updated: 2023/11/08 20:00:12 by aaghla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;
	int	n;

	i = 0;
	if ((!len && !*needle) || (!*haystack && !*needle))
		return ((char *)haystack);
	while (haystack[i] && len--)
	{
		j = 0;
		n = len +1;
		while (needle[j] && needle[j] == haystack[i] && n)
		{
			i++;
			j++;
			n--;
		}
		if (needle[j] == '\0')
			return ((char *)&haystack[i - j]);
		i -= j;
		i++;
	}
	return (NULL);
}

// int	main()
// {
// 	char *s = "";
// 	char *need = "test";
// 	int n = 1;
// 	char *found = ft_strnstr(s, need, n);
// 	char *f = strnstr(s, need, n);
// 	printf("%s\n%s", found, f);
// }