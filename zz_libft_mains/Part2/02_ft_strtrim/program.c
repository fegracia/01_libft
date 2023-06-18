/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:00:58 by fgracia           #+#    #+#             */
/*   Updated: 2023/05/20 21:25:54 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_strtrim.h"
#include "ft_strchr.h"
#include "ft_substr.h"

int main()
{
    char *str = "   Hello, world!   ";
    char *set = " ";
    char *trimmed_str = ft_strtrim(str, set);

    if (trimmed_str != NULL)
    {
        printf("Original string: \"%s\"\n", str);
        printf("Trimmed string: \"%s\"\n", trimmed_str);
        free(trimmed_str);
    }
    else
    {
        printf("Error: Failed to allocate memory.\n");
    }

    return 0;
}