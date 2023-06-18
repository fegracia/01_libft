/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:00:58 by fgracia           #+#    #+#             */
/*   Updated: 2023/05/21 00:56:46 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_putnbr_fd.h"
#include "ft_putchar_fd.h"

int main(void)
{
	int number = -12345;
	int fd = 1;
	ft_putnbr_fd(number, fd);
	return (0);
}
