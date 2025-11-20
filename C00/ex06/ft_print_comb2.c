/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 17:07:49 by mel-bakh          #+#    #+#             */
/*   Updated: 2025/11/20 21:43:12 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c )
{
	write(1,&c,1) ;
}


void	ft_print_comb2(void){
	int a ; 
	int b ;

	a = 0 ;

	while (a <= 98)
	{
		b = a + 1 ;
		while (b<= 99)
		{
			ft_putchar((a / 10) + '0');
			ft_putchar((a % 10)+  '0');
			write(1 , " ", 1) ;
			ft_putchar((b / 10) + '0');
			ft_putchar((b % 10)+  '0');
			if (!(a == 98 && b == 99))
 				write(1, ", ", 2);
			b++ ;	
		}
		a++ ;
	}
	
}
