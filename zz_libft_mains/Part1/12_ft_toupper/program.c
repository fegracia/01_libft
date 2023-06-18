/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 15:13:34 by fgracia           #+#    #+#             */
/*   Updated: 2023/05/13 15:32:39 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "ft_toupper.h"

int main()
{
    char c;

    printf("Digite um caractere: ");
    scanf("%c", &c);

    printf("Resultado NATIVO: %c\n", toupper(c));
	printf("Resultado: %c\n", ft_toupper(c));

    return (0);
}
