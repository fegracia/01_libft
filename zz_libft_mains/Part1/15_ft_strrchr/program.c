/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 18:31:02 by fgracia           #+#    #+#             */
/*   Updated: 2023/05/13 19:16:01 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_strrchr.h"
#include "ft_strchr.h"
#include "ft_strlen.h"

int main(void)
{
	char	str[] = "Batata";
	char	ch = 'a';
	char	*result1;
	char	*result2;
	char	*result3;
	char	*result4;

	result1 = ft_strchr(str, ch);
	result2 = strchr(str, ch);
	result3 = ft_strrchr(str, ch);
	result4 = strrchr(str, ch);

	if (result1 == NULL)
		printf("Caractere '%c' não encontrado na string '%s'- função GRACIA > ft_strchr\n", ch, str);
	else
		printf("Caractere '%c' encontrado na %ldª posição na string '%s'- função GRACIA > ft_strchr\n", ch, result1 - str, str);
	if (result2 == NULL)
		printf("Caractere '%c' não encontrado na string '%s'- função NATIVA > strchr\n\n", ch, str);
	else
		printf("Caractere '%c' encontrado na %ldª posição na string '%s'- função NATIVA > strchr\n\n", ch, result2 - str, str);


	if (result3 == NULL)
		printf("Caractere '%c' não encontrado na string '%s'- função GRACIA > ft_strrchr\n", ch, str);
	else
		printf("Caractere '%c' encontrado na %ldª posição na string '%s'- função GRACIA > ft_strrchr\n", ch, result3 - str, str);
	if (result4 == NULL)
		printf("Caractere '%c' não encontrado na string '%s'- função NATIVA > ft_strrchr\n\n", ch, str);
	else
		printf("Caractere '%c' encontrado na %ldª posição na string '%s'- função NATIVA > strrchr\n\n", ch, result4 - str, str);

	return (0);
}
















