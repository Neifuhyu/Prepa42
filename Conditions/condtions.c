/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   condtions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbourdiol <nbourdiol@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 15:13:31 by nbourdiol         #+#    #+#             */
/*   Updated: 2023/12/18 16:02:06 by nbourdiol        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	age;

	age = 67;
	if (age <= 17)
		printf("Desolé, tu est mineur, tu as %d ans", age);
	else if (age >= 18 && age <= 50)
	{
		printf("Allez-y, vous pouvez passer,vous avez %d ans", age);
		printf(", vous avez plus de l'age requis");
	}
	else
	{
		printf("Desolé, votre age ne vous permet pas de passer,");
		printf("vous avez %d ans", age);
	}
}
