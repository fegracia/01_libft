/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:00:58 by fgracia           #+#    #+#             */
/*   Updated: 2023/05/20 23:06:25 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_itoa.h"

int main()
{
    int num = -12345;
    char *str = ft_itoa(num);

    if (str != NULL)
    {
        printf("Numero: %d\n", num);
        printf("Numero em String: %s\n", str);
        free(str);
    }
    else
    {
        printf("Error: Failed to allocate memory.\n");
    }
    return (0);
}
