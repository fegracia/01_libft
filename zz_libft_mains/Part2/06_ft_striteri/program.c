/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:00:58 by fgracia           #+#    #+#             */
/*   Updated: 2023/05/21 00:24:49 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_striteri.h"

void	uppercase(unsigned int index __attribute__((unused)), char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c -= ('a' - 'A');
}

int main(void)
{
	char str[] = "Hello, World!";
	printf("Original string: %s\n", str);
	ft_striteri(str, uppercase);
	printf("Modified string: %s\n", str);
	return (0);
}