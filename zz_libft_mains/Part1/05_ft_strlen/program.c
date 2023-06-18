/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 15:15:19 by fgracia           #+#    #+#             */
/*   Updated: 2023/05/20 18:20:45 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_strlen.h"

int	main(void)
{
	char	str[] = "Hello, world!";
	size_t		size;
	size_t		size2;

	size = ft_strlen(str);
	size2 = strlen(str);
	printf("Tamanho da string pelo strlen   : %zu\n", size2);
	printf("Tamanho da string pelo ft_strlen: %zu\n", size);
	return (0);
}
