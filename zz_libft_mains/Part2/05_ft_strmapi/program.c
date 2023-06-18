/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:00:58 by fgracia           #+#    #+#             */
/*   Updated: 2023/05/21 00:13:16 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_strmapi.h"
#include "ft_strdup.h"
#include "ft_strlen.h"

char uppercase_mapping(unsigned int index __attribute__((unused)), char c)
{
    if (c >= 'a' && c <= 'z')
        return c - ('a' - 'A');
    else
        return c;
}

int main(void)
{
    const char *str = "Hello, World!";
    char *result = ft_strmapi(str, uppercase_mapping);

    printf("Original string: %s\n", str);
    printf("Mapped string: %s\n", result);

    free(result);
    return (0);
}
