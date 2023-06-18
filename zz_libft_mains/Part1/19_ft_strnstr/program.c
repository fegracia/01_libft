/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 20:33:12 by fgracia           #+#    #+#             */
/*   Updated: 2023/05/20 18:26:41 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_strnstr.h"

int main(void)
{
	char	haystack[] = "Entre os grandes, Timão é o maior!";
	char	needle[] = "Timão";
	size_t	len = strlen(haystack);
	char	*result;

	result = ft_strnstr(haystack, needle, len);

	if (result != NULL)
		printf("'%s' foi encontrado em '%s'\n", needle, haystack);
	else
		printf("'%s' não foi encontrado em '%s'\n", needle, haystack);
    return (0);
}
