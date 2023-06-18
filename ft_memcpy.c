/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 15:15:28 by fgracia           #+#    #+#             */
/*   Updated: 2023/06/04 19:06:37 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*aux_s;
	unsigned char	*aux_d;

	if (src == NULL && dst == NULL)
		return (dst);
	aux_s = (unsigned char *)src;
	aux_d = (unsigned char *)dst;
	while (n > 0)
	{
		n--;
		aux_d[n] = aux_s[n];
	}
	return ((void *)aux_d);
}
