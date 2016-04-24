/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_mat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tperraut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/22 09:32:24 by tperraut          #+#    #+#             */
/*   Updated: 2016/03/22 09:32:30 by tperraut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_free_mat(char ***a, int n)
{
	int	i;

	i = 0;
	if (a && *a)
	{
		while (i < n)
		{
			free(a[0][i]);
			++i;
		}
		free(*a);
		*a = NULL;
	}
}