/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 21:28:55 by fgracia           #+#    #+#             */
/*   Updated: 2023/05/13 21:33:42 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ft_calloc.h"
#include "ft_memset.h"

int main(void)
{
    int *arr;
    size_t n = 5;
    size_t i = 0;

    arr = ft_calloc(n, sizeof(int));
    if (arr == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    printf("Antes da inicialização:\n");
    while (i < n) {
        printf("%d ", arr[i]);
        i++;
    }

    memset(arr, 1, n * sizeof(int));

    printf("\nDepois da inicialização:\n");
    i = 0;
    while (i < n) {
        printf("%d ", arr[i]);
        i++;
    }
    free(arr);
    return (0);
}
