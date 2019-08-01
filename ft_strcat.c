/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosalee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 17:57:15 by lrosalee          #+#    #+#             */
/*   Updated: 2019/04/29 17:57:17 by lrosalee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dst, const char *src)
{
	size_t i;
	size_t len;

	i = 0;
	len = 0;
	while (dst[i] != '\0')
		++i;
	while (src[len] != '\0')
	{
		dst[i] = src[len];
		i++;
		++len;
	}
	dst[i] = '\0';
	return (dst);
}
