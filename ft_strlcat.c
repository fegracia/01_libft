/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 15:15:36 by fgracia           #+#    #+#             */
/*   Updated: 2023/06/08 21:42:27 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dst_size)
{
	size_t	len;
	size_t	i;

	if (!dst && dst_size == 0)
		return (0);
	len = 0;
	i = 0;
	while (dst[len] && len < dst_size)
		len++;
	i = len;
	while (src[len - i] && (len + 1) < dst_size)
	{
		dst[len] = src [len - i];
		len++;
	}
	if (i < dst_size)
		dst[len] = '\0';
	return (i + ft_strlen(src));
}
