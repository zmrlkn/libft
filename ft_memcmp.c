           /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalkan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:17:44 by zalkan            #+#    #+#             */
/*   Updated: 2022/12/28 17:22:45 by zalkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			i;

	i = 0;
	s1 = (unsigned char *)ptr1;
	s2 = (unsigned char *)ptr2;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

//#include <stdio.h>

//int main()
//{
//	char str1[] = "42 estanbul";
//	char str2[] = "42 icole";

//	printf("%d\n", ft_memcmp(str1, str2, 9));

//}

// iki stringin ilk farklı olduğu yeri yakalayıp ,
// farklı olan iki karakteri karşılaştırıyor.
//değerler aynı ise 0 farklı ise 