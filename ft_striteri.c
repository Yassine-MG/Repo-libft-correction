/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymghazli <ymghazli@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:43:58 by yassine           #+#    #+#             */
/*   Updated: 2023/12/12 16:01:57 by ymghazli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	// protect
	while (*s)
	{
		f(i, s);
		i++;
		s++;
	}
}

// #include<stdio.h>

// void addOne(int i, char *a){
// 	*a -= 32;
// }

// int main(){
// 	char a[] = "hello";
// 	ft_striteri(a, &addOne);
// 	printf("%s\n",a);
// }