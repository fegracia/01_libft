/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 15:22:11 by fgracia           #+#    #+#             */
/*   Updated: 2023/05/13 15:31:39 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "ft_tolower.h"

int main()
{
    char c;

    printf("Digite um caractere: ");
    scanf("%c", &c);

    printf("Resultado NATIVO: %c\n", tolower(c));
	printf("Resultado GRACIA: %c\n", ft_tolower(c));

    return (0);
}
