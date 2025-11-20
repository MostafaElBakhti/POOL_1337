/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 20:52:15 by mel-bakh          #+#    #+#             */
/*   Updated: 2025/08/23 20:53:57 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	swp;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		swp = tab[i];
		tab[i] = tab[j];
		tab[j] = swp;
		i++;
		j--;
	}
}
