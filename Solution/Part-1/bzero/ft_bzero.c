/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaghla <aaghla@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 21:21:07 by aaghla            #+#    #+#             */
/*   Updated: 2023/11/04 13:17:57 by aaghla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	ft_bzero(void *b, size_t n)
{
	unsigned char	*ch;

	ch = b;
	while (n > 0)
	{
		*ch = 0;
		ch++;
		n--;
	}
}

// int main() {
//     char str[11] = "helloThere";
//     int i = 0;

// printf("%s\n", str);
//     ft_bzero(str, 2 * sizeof(char));
//     while (i < 10) 
//     {
//         printf("%c", str[i++]);
//     }
//     printf("%s", str);
// }
// int main() {
//     int str[10];
//     int i = 0;

//     ft_bzero(str, 10 * sizeof(int));
//     while (i < 10) 
//     {
//         printf("%d", str[i++]);
//     }
// }