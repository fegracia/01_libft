/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 21:56:42 by fgracia           #+#    #+#             */
/*   Updated: 2023/06/09 00:50:33 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dst_size)
{
	size_t	i;

	i = 0;
	if (dst_size == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (i < dst_size -1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (i < dst_size)
		dst[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}
