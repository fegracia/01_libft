/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:00:58 by fgracia           #+#    #+#             */
/*   Updated: 2023/05/20 21:41:52 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_split.h"

int main()
{
    char *str = "Hello, world! Welcome to my FUCKING World!";
    char **result = ft_split(str, ' ');

    if (result != NULL)
    {
        printf("Original string: \"%s\"\n", str);
        printf("Split string:\n");
        for (int i = 0; result[i] != NULL; i++)
        {
            printf("- %s\n", result[i]);
            free(result[i]);
        }
        free(result);
    }
    else
    {
        printf("Error: Failed to allocate memory.\n");
    }

    return 0;
}