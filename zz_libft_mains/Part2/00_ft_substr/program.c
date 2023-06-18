/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:00:58 by fgracia           #+#    #+#             */
/*   Updated: 2023/05/20 21:02:17 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_substr.h"

int main(void)
{
    char *str = "Hello, world!";
    unsigned int start = 7;
    size_t len = 5;

    char *sub_str = ft_substr(str, start, len);
    if (sub_str != NULL)
    {
        printf("String Original: %s\n", str);
        printf("Substring: %s\n", sub_str);
        free(sub_str);
    }
    else
    {
        printf("Error: Failed to allocate memory.\n");
    }

    return 0;
}