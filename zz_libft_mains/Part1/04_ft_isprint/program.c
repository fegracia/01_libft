/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 15:15:16 by fgracia           #+#    #+#             */
/*   Updated: 2023/05/06 20:27:04 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "ft_isprint.h"

int main(void)
{
	char	c;
	c = ' '; // imprimível (deveria retornar 1)
	printf("Função nativa: %d\n", isprint(c));
	printf("Função libft : %d\n\n", ft_isprint(c));

	c = 'S'; // imprimível (deveria retornar 1)
	printf("Função nativa: %d\n", isprint(c));
	printf("Função libft : %d\n\n", ft_isprint(c));

	c = '*'; // imprimível (deveria retornar 1)
	printf("Função nativa: %d\n", isprint(c));
	printf("Função libft : %d\n\n", ft_isprint(c));

	c = '\n'; // não imprimível (deveria retornar 0)
	printf("Função nativa: %d\n", isprint(c));
	printf("Função libft : %d\n\n", ft_isprint(c));

	return (0);
}
