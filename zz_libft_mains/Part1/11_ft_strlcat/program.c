/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 15:15:36 by fgracia           #+#    #+#             */
/*   Updated: 2023/05/20 17:57:41 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_strlcat.h"
#include "ft_strlen.h"

int	main()
{
	char dst[20] = "Hello, ";
	const char *src = "world!";
	size_t dstsize = sizeof(dst);

	size_t result = ft_strlcat(dst, src, dstsize);

	printf("String concatenada: %s\n", dst);
	printf("Resultado: %zu\n", result);

	return (0);
}

