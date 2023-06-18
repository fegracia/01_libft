/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 15:15:23 by fgracia           #+#    #+#             */
/*   Updated: 2023/05/11 23:54:50 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_memset.h"
#include "ft_strlen.h"

int main()
{
	char str[40] = "Corinthians é o campeão brasileiro.";
	int	len;
	len = ft_strlen(str);
	printf("Frase original    : %s\n", str);
	printf("Qtd de caracteres : %i\n", len);

	// Preenche o array como 4 caracteres '*' começando do str[12]
	memset(str + 11, '*', len-22);
	printf("Com função NATIVA : %s\n", str);

	// Com função ft_memset
	ft_memset(str + 11, 0, len-22); // preenche o array com o caractere '*'
	printf("Com ft_memset() v1: %s\n", str); // imprime na tela

	// Com função ft_memset que preenche tudo com caractere '*'
    ft_memset(str, '*', len); // preenche todo o array com o caractere '*'
    printf("Com ft_memset() v2: %s\n", str); // imprime na tela

	return (0);
}
