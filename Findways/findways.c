/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   findways.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bekk <abekkali451@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 12:41:41 by ael-bekk          #+#    #+#             */
/*   Updated: 2021/09/10 13:13:32 by ael-bekk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int findways(int m, int n)
{
	if (m < 0|| n < 0)
		return (0);
	if (m == 1 && n == 1)
		return (1);
	return findways(m - 1, n) + findways(m, n - 1);
}
/*
int main(int ac, char **av)
{
	(void)ac;
	printf("%d",findways(atoi(av[1]),atoi(av[2])));
}*/
