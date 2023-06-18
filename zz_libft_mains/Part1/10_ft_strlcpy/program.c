/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 21:56:42 by fgracia           #+#    #+#             */
/*   Updated: 2023/05/06 23:18:17 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_strlcpy.h"

int	main(void)
{
	char	src[15] = "ATOIZINHA";
	char	dest[4];

	size_t	len;
	len = ft_strlcpy(dest, src, sizeof(dest));

	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	printf("length: %zu\n", len);

	return (0);
}
