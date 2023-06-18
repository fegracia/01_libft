/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:00:58 by fgracia           #+#    #+#             */
/*   Updated: 2023/05/20 21:14:41 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_strjoin.h"

int main()
{
    char *str1 = "Hello, ";
    char *str2 = "world!";
    char *result = ft_strjoin(str1, str2);

    if (result != NULL)
    {
        printf("String 1: %s\n", str1);
        printf("String 2: %s\n", str2);
        printf("Concatenated string: %s\n", result);
        free(result);
    }
    else
    {
        printf("Error: Failed to allocate memory.\n");
    }

    return (0);
}
