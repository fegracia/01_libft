/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 21:37:03 by fgracia           #+#    #+#             */
/*   Updated: 2023/05/20 17:42:08 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ft_strdup.h"


int main(void)
{
    char str1[] = "Hello world!";
    char *str2;

    str2 = ft_strdup(str1);

    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);

    free(str2);
    // Lembre-se de liberar a memória alocada com malloc

    return (0);
}