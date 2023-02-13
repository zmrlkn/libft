/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalkan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:12:52 by zalkan            #+#    #+#             */
/*   Updated: 2022/12/28 12:07:33 by zalkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*s;
	unsigned char		*d;

	if (!dest && !src)
		return (NULL);
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	if (s < d)
		while (n--)
			*(d + n) = *(s + n);
	else
		ft_memcpy(d, s, n);
	return (dest);
}

//#include <stdio.h>

//int main()
//{
//	char a[] = "sfflskdf";
//	char b[] = "fdhgd";
//	printf("%s\n", ft_memcpy(a, b, 5));
//	//printf("%s\n", (char *)ft_memcpy(a+2,a,5));//overlap durumu için
//	return(0);
//}

// Memcopy ile aynı işlevi yapar fakat 
// bellekte overlop olmaması için 39. satırda verilen durumda tersten kopyalar.