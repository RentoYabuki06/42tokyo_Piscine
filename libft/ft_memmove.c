/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabukirento <yabukirento@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:53:55 by yabukirento       #+#    #+#             */
/*   Updated: 2024/04/19 16:14:32 by yabukirento      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *pdst;
	const unsigned char *psrc;
    size_t i;

    i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
    pdst = dst;
    psrc = src;
	if (dst > src && dst < src + len)
	{
		pdst += len - 1;
		psrc += len - 1;
		while (i < len)
		{
			*(pdst--) = *(psrc--);
            i++;
		}
	}
	else
    {
        while (i < len)
        {
            *(pdst++) = *(psrc++);
            i++;
        }
    }
    return dst;
}
