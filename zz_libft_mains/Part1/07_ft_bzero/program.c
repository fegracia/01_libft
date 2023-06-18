/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 13:55:22 by fgracia           #+#    #+#             */
/*   Updated: 2023/05/13 14:10:43 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>
#include "ft_bzero.h"

int main()
{
	char str[11] = "Corinthians";
	// FRASE A SER TESTADA
	printf("Antes           : %s\n", str);
	// FUNÇÃO NATIVA
	bzero(str, sizeof(str));
	printf("Depois NATIVO   : %s\n", str);
	// MINHA FUNÇÃO
	ft_bzero(str, sizeof(str));
	printf("Depois ft_bzero : %s\n", str);

	return (0);
}
