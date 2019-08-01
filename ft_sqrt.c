/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosalee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 19:08:08 by lrosalee          #+#    #+#             */
/*   Updated: 2019/05/13 19:15:51 by lrosalee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_sqrt(int n)
{
	int x;

	x = 1;
	while (x * x <= n)
	{
		if (x * x == n)
			return (x);
		x++;
	}
	return (0);
}
