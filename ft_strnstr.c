/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 15:16:03 by fgracia           #+#    #+#             */
/*   Updated: 2023/06/08 21:13:51 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big_str, const char *little_str, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little_str[0] == '\0')
		return ((char *)big_str);
	if (len == 0)
		return (NULL);
	while (big_str[i] != '\0' && i < len)
	{
		while ((big_str[i + j] == little_str[j]) && (i + j < len))
		{
			if (little_str[j + 1] == '\0')
				return ((char *)&big_str[i]);
			j++;
		}
		i++;
		j = 0;
	}
	return (NULL);
}
