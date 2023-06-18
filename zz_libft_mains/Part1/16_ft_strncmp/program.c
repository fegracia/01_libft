/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 20:21:22 by fgracia           #+#    #+#             */
/*   Updated: 2023/05/13 20:31:12 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_strncmp.h"

int main(void)
{
	char str1[] = "Hihih";
	char str2[] = "Hahaha";
	int result;

	// Comparação das primeiras 5 letras de str1 e str2
	result = ft_strncmp(str1, str2, 5);

	if (result > 0)
		printf("'%s' vem antes de '%s'\n", str2, str1);
	else if (result < 0)
		printf("'%s' vem antes de '%s'\n", str1, str2);
	else
		printf("'%s' é igual a '%s'\n", str1, str2);
	return (0);
}
