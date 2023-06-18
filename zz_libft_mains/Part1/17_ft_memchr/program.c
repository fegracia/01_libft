/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 21:14:43 by fgracia           #+#    #+#             */
/*   Updated: 2023/05/20 17:20:35 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_memchr.h"

int main(void)
{
    char str[] = "Ola, mundo!";
    char *result;
	char *result2;
    int c = 'm';
    size_t n = strlen(str);

    result = ft_memchr(str, c, n);
	result2 = memchr(str, c, n);

    if (result != NULL)
        printf("'%c' foi encontrado em '%s' na posição %ld - vGRACIA.\n", c, str, result - str);
    else
        printf("'%c' não foi encontrado em '%s' - vGRACIA.\n", c, str);

	//if (result2 != NULL)
    //    printf("'%c' foi encontrado em '%s' na posição %ld - vNATIVA.\n", c, str, result2 - str);
    //else
    //    printf("'%c' não foi encontrado em '%s' - vNATIVA.\n", c, str);


    return (0);
}