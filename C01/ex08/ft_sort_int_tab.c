/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 22:27:06 by mel-bakh          #+#    #+#             */
/*   Updated: 2025/08/28 14:04:02 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size){
	int i ; 
	i = 0 ; 
	int j ; 
	int swp ; 

	while (i < size - 1 )
	{
		j = 0 ;
		while (j < size - 1 - i)
		{
			if(tab[j] > tab[j + 1]){
				swp = tab[j] ;
				tab[j] = tab[j + 1] ;
				tab[j + 1] = swp ; 
			}
			j++;
		}
		i++ ;
	}
	
}

int main(){

	write(5,"hi" , 2) ;
//   int tab[] = {5,6,10,4,98} ; 
//   int size = 5 ; 
//   ft_sort_int_tab(tab , size);
//   for (int i = 0; i < size; i++)
//   {
// 	printf("%i\n" , tab[i]) ;
//   }
  
}













// void	ft_sort_int_tab(int *tab, int size)
// {
// 	int i ;
// 	int j ;
// 	int swp ;

// 	while (i < size - 1)
// 	{
		
// 		j = size - 1 ;
// 		while (j > i)
// 		{
// 			if(tab[i] > tab[j]){
// 				swp = tab[j] ;
// 				tab[j] = tab[i] ;
// 				tab[i] = swp ;
// 			}
// 			j--;
// 		}
		
// 		i++;
// 	}
	
// }