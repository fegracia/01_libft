/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracia <fgracia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:00:58 by fgracia           #+#    #+#             */
/*   Updated: 2023/05/21 00:49:55 by fgracia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_putchar_fd.h"
#include "ft_putstr_fd.h"
#include "ft_putendl_fd.h"

int main(void)
{
	char *str = "Hello, World!";
	int fd = 1;
	ft_putendl_fd(str, fd);
	return (0);
}
