/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 17:22:29 by fgracia           #+#    #+#             */
/*   Updated: 2023/05/06 20:17:15 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "ft_isdigit.h"

int main(void)
{
	int	c;

	c = 0;
	printf("Caractere | ft_isdigit | isdigit\n");
	while (c <= 127)
	{
		printf("%9d | %10d | %9d\n", c, ft_isdigit(c), isdigit(c));
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

	printf("Digite um caractere qualquer: ");
	scanf("%c", &c);
	if (ft_isdigit(c))
		printf("%c é um digito.\n", c);
	else
		printf("%c não é um dígito.\n", c);
	return (0);
}
*/
