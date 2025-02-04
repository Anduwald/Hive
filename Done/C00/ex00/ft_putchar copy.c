/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Akuchmam <akuchmam@student.hive.fi>        #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-15 12:27:22 by Akuchmam          #+#    #+#             */
/*   Updated: 2025-01-15 12:27:22 by Akuchmam         ###   ########fi        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	main(void)
{
	char	c;

	c = '2';
	ft_putchar(c);
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
