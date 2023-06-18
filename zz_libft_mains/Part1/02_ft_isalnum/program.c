/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 15:15:09 by fgracia           #+#    #+#             */
/*   Updated: 2023/05/06 20:17:01 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "ft_isalnum.h"

int main(void)
{
	int	c;

	c = 0;
	printf("Caractere | ft_isalnum | isalnum\n");
	while (c <= 127)
	{
		printf("%9d | %10d | %9d\n", c, ft_isalnum(c), isalnum(c));
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
	char	c;

	printf("Entre com o caractere desejado: ");
	scanf(" %c", &c);
	if (ft_isalnum(c))
		printf("%c é um caractere alfanumérico.\n", c);
	else
		printf("%c não é um caractere alfanumérico.\n", c);
	return (0);
}
*/
