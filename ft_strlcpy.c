/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvan-str <nvan-str@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 10:51:39 by nvan-str      #+#    #+#                 */
/*   Updated: 2022/10/18 11:54:20 by nvan-str      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t srclen;
	
	i = 0;
	srclen = ft_strlen(src);
	while (i < dstsize && i < ft_strlen(dst))
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize > 0)
	{
		dst[i - 1] = '\0';
	}
	return (srclen);
}