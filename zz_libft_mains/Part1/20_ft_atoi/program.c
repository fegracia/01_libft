/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 15:16:06 by fgracia           #+#    #+#             */
/*   Updated: 2023/05/11 23:26:51 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_atoi.h"

int	main()
{
	int num;
	int num2;
	num = atoi("+1513513");
	num2 = ft_atoi("+1513513");
	printf("ATOI original que não vale nada   : %i\n", num);
	printf("ATOI blaster feito pelo PAI GRACIA: %i\n", num2);
	return (0);
}