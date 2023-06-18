/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 14:12:05 by fgracia           #+#    #+#             */
/*   Updated: 2023/05/13 14:41:38 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_memcpy.h"

int		main(void)
{
	char src[] = "Salve o Corinthians!";
	char dest1[20], dest2[20];

	// FUNÇÃO NATIVA
	memcpy(dest2, src, strlen(src)+1);
	printf("Usando a NATIVA   : %s\n", dest2);

	// MINHA FUNÇÃO
	ft_memcpy(dest1, src, strlen(src)+1);
	printf("Usando a ft_memcpy: %s\n", dest1);

	// COMPARA SE AS DUAS FUNÇÕES SÃO IGUAIS
	if (strcmp(dest1, dest2) == 0)
		printf("As duas trings estão  IDENTICAS.\n");
	else
		printf("As duas trings estão DIFERENTES.\n");

	return (0);
}