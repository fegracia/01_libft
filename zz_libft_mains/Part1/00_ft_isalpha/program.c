/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 15:17:28 by fgracia           #+#    #+#             */
/*   Updated: 2023/05/06 20:16:28 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "ft_isalpha.h"

int main(void)
{
	int	c;

	c = 0;
	printf("Caractere | ft_isalpha | isalpha\n");
    while (c <= 127)
	{
		printf("%9d | %10d | %d\n", c, ft_isalpha(c), isalpha(c));
		c++;
	}
    return 0;
}

/* ******************************** */
/* OUTRO MODELO DE MAIN PARA TESTAR */
/* ******************************** */

/*
int	main(void)
{
	printf("Digite algum caractere: ");
	scanf(" %c", &c);
	if (ft_isalpha(c))
		printf("%c é uma letra do alfabeto.\n", c);
	else
		printf("%c não é uma letra do alfabeto.\n", c);
	return (0);
*/
