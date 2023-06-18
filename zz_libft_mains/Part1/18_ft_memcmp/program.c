/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 21:22:01 by fgracia           #+#    #+#             */
/*   Updated: 2023/05/13 21:26:10 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_memcmp.h"

int main(void)
{
    char str1[] = "Ola, mundo!";
    char str2[] = "Ola, mundo.";
    int result;
    size_t n = strlen(str1);

    result = ft_memcmp(str1, str2, n);

    if (result == 0)
        printf("As strings são iguais.\n");
    else if (result > 0)
        printf("A primeira string é maior que a segunda.\n");
    else
        printf("A segunda string é maior que a primeira.\n");

    return (0);
}