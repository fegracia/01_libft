/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 15:15:12 by fgracia           #+#    #+#             */
/*   Updated: 2023/05/06 20:24:54 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_isascii.h"

int	main(void)
{
	char	c;

	printf("Entre com um caractere: ");
	scanf(" %c", &c);
	if (ft_isascii(c))
		printf("%c é um caractere ASCII\n", c);
	else
		printf("%c não é um caractere ASCII\n", c);
	return (0);
}
