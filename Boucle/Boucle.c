/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Boucle.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbourdiol <nbourdiol@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:36:07 by nbourdiol         #+#    #+#             */
/*   Updated: 2023/12/19 01:10:51 by nbourdiol        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
!Creer un programme qui affiche toutes les tables de multiplications
!en fonction de 2 variables table_max et max_multiplicateur

! Exemple : si table_max vaut 16 et max_multiplicateur vaut 12
! Alors le programme devra afficher toutes les tables de multiplications
! allant de 0 a 12 jusqu'a 16 X 12


! Les Multiplications seront affiches sous cette forme

! 0 X 0 = 0
! 0 X 1 = 0
! etc...
!
!------------------------
!
!1 X 0 = 1
!1 X 1 = 1
! etc...
*/

#include <stdio.h>

int	main(void)

{
	int	table_max;
	int	table_min;
	int	max_multiplicateur;
	int	min_multiplicateur;
	int	result_multiplication;

	table_max = 16;
	table_min = 0;
	max_multiplicateur = 12;
	min_multiplicateur = 0;
	while (table_max >= table_min && max_multiplicateur >= min_multiplicateur)
	{
		result_multiplication = table_min * min_multiplicateur;
		printf("%d X %d = ", table_min, min_multiplicateur);
		printf("%d\n", result_multiplication);
		min_multiplicateur ++;
		if (min_multiplicateur > max_multiplicateur)
		{
			table_min++;
			min_multiplicateur = 0;
		}
	}
}
