/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 15:34:17 by fgracia           #+#    #+#             */
/*   Updated: 2023/06/03 00:14:39 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "ft_strchr.h"

int main(void)
{
	char str[] = "Corinthians";
	char ch = 'o';
	char *result;
	char *result2;

	result = ft_strchr(str, ch);
	result2 = strchr(str, ch);

	if (result == NULL)
		printf("Caractere '%c' não encontrado na string '%s'- função GRACIA\n\n", ch, str);
	else
		printf("Caractere '%c' encontrado na %ldª posição na string '%s'- função GRACIA\n\n", ch, result - str, str);

	if (result2 == NULL)
		printf("Caractere '%c' não encontrado na string '%s'- função NATIVA\n\n", ch, str);
	else
		printf("Caractere '%c' encontrado na %ldª posição na string '%s'- função NATIVA\n\n", ch, result - str, str);

	return (0);
}
