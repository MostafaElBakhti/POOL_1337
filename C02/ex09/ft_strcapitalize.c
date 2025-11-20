/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 00:36:59 by mel-bakh          #+#    #+#             */
/*   Updated: 2025/08/27 21:02:52 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strcapitalize(char *str)
{
	char	*start;
	char	nword;

	start = str;
	nword = 1;
	while (*str)
	{
		if ((*str >= 'a' && *str <= 'z') && nword)
			*str -= 32;
		else if ((*str >= 'A' && *str <= 'Z') && !nword)
			*str += 32;
		if ((*str >= 'a' && *str <= 'z')
			|| (*str >= 'A' && *str <= 'Z')
			|| (*str >= '0' && *str <= '9'))
			nword = 0;
		else
			nword = 1;
		str++;
	}
	return (start);
}

int main(){
	char str[] = "hi, how are you? 42words forty-two; fifty+and+one" ;
	char *test = ft_strcapitalize(str) ;
	printf("%s" , test) ;
}