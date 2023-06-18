/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 14:33:26 by fgracia           #+#    #+#             */
/*   Updated: 2023/05/20 17:31:55 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "ft_memmove.h"

int	main()
{
	char str1[] = "abcdefghij";
	char str2[] = "abcdefghij";
	char str3[] = "abcdefghij";
	char str4[] = "abcdefghij";
	char str5[] = "abcdefghij";
	char str6[] = "abcdefghij";
	char str7[] = "abcdefghij";
	char str8[] = "abcdefghij";

	printf("Antes:\n");
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	printf("str3: %s\n", str3);
	printf("str4: %s\n", str4);
	printf("str5: %s\n", str5);
	printf("str6: %s\n", str6);
	printf("str7: %s\n", str7);
	printf("str8: %s\n", str8);

	ft_memmove(&str1[2], &str1[0], 4);
	memmove(&str2[2], &str2[0], 4);

	ft_memmove(&str3[0], &str3[2], 4);
	memmove(&str4[0], &str4[2], 4);

	ft_memmove(&str5[5], &str5[3], 4);
	memmove(&str6[5], &str6[3], 4);

	ft_memmove(&str7[3], &str7[5], 4);
	memmove(&str8[3], &str8[5], 4);

	printf("\nDepois:\n");

	// BLOCO 1 /////////////////////////////////////////////////////
	// NATIVA
	printf("memmove(&str2[2], &str2[0], 4)   : %s\n", str2);
	// FT_GRACIA
	printf("ft_memmove(&str1[2], &str1[0], 4): %s\n", str1);
	// COMPARA SE AS STRINGS GERADAS PELAS DUAS FUNÇÕES SÃO IGUAIS
	if (strcmp(str2, str1) == 0)
		printf("As duas trings estão IDENTICAS.\n\n");
	else
		printf("As duas trings estão DIFERENTES.\n\n");


	// BLOCO 2 /////////////////////////////////////////////////////
	// NATIVA
	printf("memmove(&str4[0], &str4[2], 4)   : %s\n", str4);
	// FT_GRACIA
	printf("ft_memmove(&str3[0], &str3[2], 4): %s\n", str3);
	// COMPARA SE AS STRINGS GERADAS PELAS DUAS FUNÇÕES SÃO IGUAIS
	if (strcmp(str4, str3) == 0)
		printf("As duas trings estão IDENTICAS.\n\n");
	else
		printf("As duas trings estão DIFERENTES.\n\n");


	// BLOCO 3 /////////////////////////////////////////////////////
	// NATIVA
	printf("memmove(&str6[5], &str6[3], 4)   : %s\n", str6);
	// FT_GRACIA
	printf("ft_memmove(&str5[5], &str5[3], 4): %s\n", str5);
	// COMPARA SE AS DUAS FUNÇÕES SÃO IGUAIS
	if (strcmp(str6, str5) == 0)
		printf("As duas trings estão IDENTICAS.\n\n");
	else
		printf("As duas trings estão DIFERENTES.\n\n");


	// BLOCO 4 /////////////////////////////////////////////////////
	// NATIVA
	printf("memmove(&str8[3], &str8[5], 4)   : %s\n", str8);
	// FT_GRACIA
	printf("ft_memmove(&str7[3], &str7[5], 4): %s\n", str7);
	// COMPARA SE AS DUAS FUNÇÕES SÃO IGUAIS
	if (strcmp(str8, str7) == 0)
		printf("As duas trings estão IDENTICAS.\n\n");
	else
		printf("As duas trings estão DIFERENTES.\n\n");

	return (0);
}
