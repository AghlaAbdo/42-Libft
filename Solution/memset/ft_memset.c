/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghla <aaghla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 21:18:32 by aaghla            #+#    #+#             */
/*   Updated: 2023/11/06 21:50:58 by aaghla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*ch;

	ch = (char *)b;
	while (len > 0)
	{
		*ch = c;
		ch++;
		len--;
	}
	return (b);
}

// int main() {
// 	char str[10];
// 	int i = 0;

// 	ft_memset(str, '0', 5 * sizeof(char));
// 	while (str[i]) 
// 	{
// 		printf("%c", str[i++]);
// 	}
// }

// int main() {
//     int str[10];
//     int i = 0;

//     ft_memset(str, 0, 9 * sizeof(int));
//     while (i < 10) 
//     {
//         printf("%d", str[i++]);
//     }
// }
