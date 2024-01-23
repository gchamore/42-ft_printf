/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mytest.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 10:53:10 by gchamore          #+#    #+#             */
/*   Updated: 2024/01/02 11:17:28 by gchamore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/ft_printf.h"

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int tri_output(int output_OG, int tempOG, int output_FT, int tempFT)
{	
	int total = 0;
	
	tempOG = tempOG + output_OG;
	tempFT = tempFT + output_FT;
	total = tempOG - tempFT;
	return total;
}

int main(void)
{
	int tempOG = 0;
	int tempFT = 0;
	int total = 0;
	int output_OG;
	int output_FT;

/////////////////////////////////
//  	  NO %		   //
/////////////////////////////////
	printf("----------------NO %%---------------\n");


printf("TEST 1\n");

	output_OG = printf("OG -> Test String \t TEeeEEEeEEsT String\n");
	output_FT = ft_printf("FT -> Test String \t TEeeEEEeEEsT String\n");
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("ERROR ->> NO SPECIFIERS test 1"), 0);

	printf("\n");

printf("TEST 2\n");

	output_OG = printf("OG -> T \t t \n");
	output_FT = ft_printf("FT -> T \t t \n");
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> NO SPECIFIERS test 2\n\n"), 0);

	printf("\n");
		
/////////////////////////////////
//				%c			   //
/////////////////////////////////

	printf("------------%%c------------\n");

printf("TEST 1\n");

	char	ltr = 'C';
	output_OG = printf("OG -> I love %c\n", ltr);
	output_FT = ft_printf("FT -> I love %c\n", ltr);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%c test 1\n\n"), 0);

	printf("\n");

printf("TEST 2\n");

	ltr = '\0';
	output_OG = printf("OG -> %c\n", ltr);
	output_FT = ft_printf("FT -> %c\n", ltr);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%c test 2\n\n"), 0);

	printf("\n");

printf("TEST 3\n");

	output_OG = printf("OG -> %c\n", '0' + 256);
	output_FT = ft_printf("FT -> %c\n", '0' + 256);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%c test 3\n\n"), 0);

	printf("\n");

printf("TEST 4\n");

	output_OG = printf("OG -> %c %c %c \n", '1', '2', '3');
	output_FT = ft_printf("FT -> %c %c %c \n", '1', '2', '3');
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%c test 4\n\n"), 0);

	printf("\n");

printf("TEST 5\n");

	output_OG = printf("OG -> %c %c %c \n", '2', '1', 0);
	output_FT = ft_printf("FT -> %c %c %c \n", '2', '1', 0);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%c test 5\n\n"), 0);

	printf("\n");

printf("TEST 6\n");

	output_OG = printf("OG -> %c %c %c \n", ' ', ' ', ' ');
	output_FT = ft_printf("FT -> %c %c %c \n", ' ', ' ', ' ');
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%c test 6\n\n"), 0);

	printf("\n");

printf("TEST 7\n");

	output_OG = printf("OG -> %c %c %c \n", '0', 0, '1');
	output_FT = ft_printf("FT -> %c %c %c \n", '0', 0, '1');
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%c test 7\n\n"), 0);
	
	printf("\n");
	
/////////////////////////////////
//				%s			   //
/////////////////////////////////
	
	printf("------------%%s------------\n");

printf("TEST 1\n");
	
	char	*str = "Nuno";
	output_OG = printf("OG -> Hi I'm %s\n", str);
	output_FT = ft_printf("FT -> Hi I'm %s\n", str);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%s test 1\n\n"), 0);

	printf("\n");

printf("TEST 2\n");

	char	long_str[] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab";
	output_OG = printf("OG -> %s\n", long_str);
	output_FT = ft_printf("FT -> %s\n", long_str);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%s test 2\n\n"), 0);

	printf("\n");

printf("TEST 3\n");

	char str2[] = "Atirei o pau no gatis, per gatis num morreus.";
	output_OG = printf("OG -> %s\n", str2);
	output_FT = ft_printf("FT -> %s\n", str2);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%s test 3\n\n"), 0);

	printf("\n");

printf("TEST 4\n");

	output_OG = printf("OG -> %s\n", "");
	output_FT = ft_printf("FT -> %s\n", "");
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%s test 4\n\n"), 0);

	printf("\n");

printf("TEST 5\n");

	output_OG = printf("OG -> %s\n", "-");
	output_FT = ft_printf("FT -> %s\n", "-");
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%s test 5\n\n"), 0);

	printf("\n");

printf("TEST 6\n");

	output_OG = printf("OG -> %s %s\n", "-", "4");
	output_FT = ft_printf("FT -> %s %s\n", "-", "4");
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%s test 6\n\n"), 0);

	printf("\n");

printf("TEST 7\n");

	output_OG = printf("OG -> %s %s%s\n", "-", "4", "2");
	output_FT = ft_printf("FT -> %s %s%s\n", "-", "4", "2");
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%s test 7\n\n"), 0);

	printf("\n");

printf("TEST 8\n");

	char	*dummy = 0;
	output_OG = printf("OG -> This should be 0: %s\n", dummy);
	output_FT = ft_printf("FT -> This should be 0: %s\n", dummy);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%s test 8\n\n"), 0);

	printf("\n");

/////////////////////////////////
//				%p			   //
/////////////////////////////////

	printf("------------%%p------------\n");

printf("TEST 1\n");

	char	*ptr = "c";
	output_OG = printf("OG -> %p\n", ptr);
	output_FT = ft_printf("FT -> %p\n", ptr);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%p test 1\n\n"), 0);

	printf("\n");

printf("TEST 2\n");

	void *dummy_ptr = 0;
	output_OG = printf("OG -> %p\n", dummy_ptr);
	output_FT = ft_printf("FT -> %p\n", dummy_ptr);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%p test 2\n\n"), 0);

	printf("\n");

printf("TEST 3\n");

	output_OG = printf("OG -> %p\n", (void *)-2);
	output_FT = ft_printf("FT -> %p\n", (void *)-2);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%p test 3\n\n"), 0);

	printf("\n");

printf("TEST 4\n");
	
	output_OG = printf("OG -> %p\n", (void *)-1);
	output_FT = ft_printf("FT -> %p\n", (void *)-1);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%p test 4\n\n"), 0);

	printf("\n");

printf("TEST 5\n");
	
	output_OG = printf("OG -> %p\n", (void *)1);
	output_FT = ft_printf("FT -> %p\n", (void *)1);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%p test 5\n\n"), 0);

	printf("\n");

printf("TEST 6\n");

	output_OG = printf("OG -> %p\n", (void *)15);
	output_FT = ft_printf("FT -> %p\n", (void *)15);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%p test 6\n\n"), 0);

	printf("\n");

printf("TEST 7\n");

	output_OG = printf("OG -> %p\n", (void *)16);
	output_FT = ft_printf("FT -> %p\n", (void *)16);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%p test 7\n\n"), 0);

	printf("\n");

printf("TEST 8\n");

	output_OG = printf("OG -> %p\n", (void *)17);
	output_FT = ft_printf("FT -> %p\n", (void *)17);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%p test 8\n\n"), 0);

	printf("\n");

printf("TEST 9\n");

	ft_printf("LONG_MIN && LONG_MAX------------------------\n");

	output_OG = printf("OG ->  %p %p \n", (void*)LONG_MIN, (void*)LONG_MAX);
	output_FT = ft_printf("FT ->  %p %p \n", (void*)LONG_MIN, (void*)LONG_MAX);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%p test 9\n\n"), 0);

	printf("\n");

printf("TEST 10\n");

	ft_printf("INT_MIN && INT_MAX------------------\n");
	output_OG = printf("OG ->  %p %p \n", (void*)INT_MIN, (void*)INT_MAX);
	output_FT = ft_printf("FT ->  %p %p \n", (void*)INT_MIN, (void*)INT_MAX);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%p test 10\n\n"), 0);

	printf("\n");

printf("TEST 11\n");

	ft_printf("ULONG_MAX && -ULONG_MAX------\n");
	output_OG = printf("OG ->  %p %p \n", (void*)ULONG_MAX, (void*)-ULONG_MAX);
	output_FT = ft_printf("FT ->  %p %p \n", (void*)ULONG_MAX, (void*)-ULONG_MAX);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%p test 11\n\n"), 0);

	printf("\n");

printf("TEST 12\n");

	ft_printf("0 && 0--------------------\n");
	output_OG = printf("OG ->  %p %p \n", (void*)0, (void*)0);
	output_FT = ft_printf("FT ->  %p %p \n", (void*)0, (void*)0);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%p test 12\n\n"), 0);

	printf("\n");

/////////////////////////////////
//				%d			   //
/////////////////////////////////

	printf("------------%%d------------\n");

printf("TEST 1\n");

	ft_printf("POSITIVE NUMBERS----------\n");
	int		nbr_pos = 42;
	output_OG = printf("OG -> %d\n", nbr_pos);
	output_FT = ft_printf("FT -> %d\n", nbr_pos);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%d test 1\n\n"), 0);

	printf("\n");

printf("TEST 2\n");

	ft_printf("INT_MAX-------------------\n");
	output_OG = printf("OG -> %d\n", INT_MAX);
	output_FT = ft_printf("FT -> %d\n", INT_MAX);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%d test 2\n\n"), 0);

	printf("\n");

printf("TEST 3\n");

	ft_printf("NEGATIVE NUMBERS----------\n");
	int		nbr_neg = -42;
	output_OG = printf("OG -> %d\n", nbr_neg);
	output_FT = ft_printf("FT -> %d\n", nbr_neg);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%d test 3\n\n"), 0);

	printf("\n");

printf("TEST 4\n");

	nbr_neg = -1000000;
	output_OG = printf("OG -> %d\n", nbr_neg);
	output_FT = ft_printf("FT -> %d\n", nbr_neg);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%d test 4\n\n"), 0);

	printf("\n");

printf("TEST 5\n");

	output_OG = printf("OG -> very long negative number: %d\n", -50000454);
	output_FT = ft_printf("FT -> very long negative number: %d\n", -50000454);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%d test 5\n\n"), 0);

	printf("\n");

printf("TEST 6\n");

	ft_printf("INT_MIN--------------------\n");
	output_OG = printf("OG -> %d\n", INT_MIN);
	output_FT = ft_printf("FT -> %d\n", INT_MIN);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%d test 6\n\n"), 0);

	printf("\n");

/////////////////////////////////
//				%i			   //
/////////////////////////////////
	
	printf("------------%%i------------\n");

printf("TEST 1\n");

	int		nbr_i = 42;
	output_OG = printf("OG -> %i\n", nbr_i);
	output_FT = ft_printf("FT -> %i\n", nbr_i);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%i test 1\n\n"), 0);

	printf("\n");
/////////////////////////////////
//				%u			   //
/////////////////////////////////
	
	printf("------------%%u------------\n");

printf("TEST 1\n");
	
	unsigned nbr_u = 42;
	output_OG = printf("OG -> %u\n", nbr_u);
	output_FT = ft_printf("FT -> %u\n", nbr_u);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%u test 1\n\n"), 0);

	printf("\n");

printf("TEST 2\n");

	output_OG = printf("OG -> %u\n", 4294967295u);
	output_FT = ft_printf("FT -> %u\n", 4294967295u);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%u test 2\n\n"), 0);

	printf("\n");

printf("TEST 3\n");

	nbr_u = -16;
	output_OG = printf("OG -> %u\n", nbr_u);
	output_FT = ft_printf("FT -> %u\n", nbr_u);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%u test 3\n\n"), 0);

	printf("\n");

printf("TEST 4\n");

	nbr_u = -101;
	output_OG = printf("OG -> %u\n", nbr_u);
	output_FT = ft_printf("FT -> %u\n", nbr_u);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%u test 4\n\n"), 0);

	printf("\n");

printf("TEST 5\n");

	nbr_u = INT_MAX;
	output_OG = printf("OG -> %u\n", nbr_u);
	output_FT = ft_printf("FT -> %u\n", nbr_u);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%u test 5\n\n"), 0);

	printf("\n");

printf("TEST 6\n");

	nbr_u = INT_MIN;
	output_OG = printf("OG -> %u\n", nbr_u);
	output_FT = ft_printf("FT -> %u\n", nbr_u);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%u test 6\n\n"), 0);

	printf("\n");

printf("TEST 7\n");

	nbr_u = -9;
	output_OG = printf("OG -> %u\n", nbr_u);
	output_FT = ft_printf("FT -> %u\n", nbr_u);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%u test 7\n\n"), 0);

	printf("\n");

printf("TEST 8\n");

	nbr_u = -99;
	output_OG = printf("OG -> %u\n", nbr_u);
	output_FT = ft_printf("FT -> %u\n", nbr_u);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%u test 8\n\n"), 0);

	printf("\n");

printf("TEST 9\n");

	nbr_u = -10;
	output_OG = printf("OG -> %u\n", nbr_u);
	output_FT = ft_printf("FT -> %u\n", nbr_u);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%u test 9\n\n"), 0);

	printf("\n");

/////////////////////////////////
//				%x			   //
/////////////////////////////////
	
	printf("------------%%x------------\n");

printf("TEST 1\n");
	
	unsigned nbr_x = 520;
	output_OG = printf("OG -> %x\n", nbr_x);
	output_FT = ft_printf("FT -> %x\n", nbr_x);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%x test 1\n\n"), 0);

	printf("\n");

printf("TEST 2\n");

	output_OG = printf("OG -> 17 in hexadecimal = %x\n", 17);
	output_FT = ft_printf("FT -> 17 in hexadecimal = %x\n", 17);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%x test 2\n\n"), 0);

	printf("\n");

printf("TEST 3\n");

	output_OG = printf("OG -> 999999 in hexadecimal = %x\n", 999999);
	output_FT = ft_printf("FT -> 999999 in hexadecimal = %x\n", 999999);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%x test 3\n\n"), 0);

	printf("\n");

printf("TEST 4\n");

	output_OG = printf("OG -> 4294967293 in hexadecimal = %x\n", 4294967293u);
	output_FT = ft_printf("FT -> 4294967293 in hexadecimal = %x\n", 4294967293u);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%x test 4\n\n"), 0);

	printf("\n");

printf("TEST 5\n");

	output_OG = printf("OG -> %d\n", -100);
	output_FT = ft_printf("FT -> %d\n", -100);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%x test 5\n\n"), 0);

	printf("\n");

printf("TEST 6\n");

	output_OG = printf("OG -> %d\n", -15);
	output_FT = ft_printf("FT -> %d\n", -15);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%x test 6\n\n"), 0);

	printf("\n");

printf("TEST 7\n");

	output_OG = printf("OG -> %x\n", 10);
	output_FT = ft_printf("FT -> %x\n", 10);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%x test 7\n\n"), 0);

	printf("\n");

printf("TEST 8\n");

	output_OG = printf("OG -> %x\n", 11);
	output_FT = ft_printf("FT -> %x\n", 11);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%x test 8\n\n"), 0);

	printf("\n");

printf("TEST 9\n");

	output_OG = printf("OG -> %x\n", -42);
	output_FT = ft_printf("FT -> %x\n", -42);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%x test 9\n\n"), 0);

	printf("\n");

printf("TEST 10\n");

	output_OG = printf("OG -> %x\n", 42);
	output_FT = ft_printf("FT -> %x\n", 42);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%x test 10\n\n"), 0);

	printf("\n");

printf("TEST 11\n");

	output_OG = printf("OG -> %x\n", 15);
	output_FT = ft_printf("FT -> %x\n", 15);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%x test 11\n\n"), 0);

	printf("\n");

printf("TEST 12\n");

	output_OG = printf("OG -> %x\n", 1000);
	output_FT = ft_printf("FT -> %x\n", 1000);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%x test 12\n\n"), 0);

	printf("\n");

printf("TEST 13\n");

	output_OG = printf("OG -> %x\n", 0);
	output_FT = ft_printf("FT -> %x\n", 0);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%x test 13\n\n"), 0);

	printf("\n");

printf("TEST 14\n");

	output_OG = printf("OG -> %x\n", 1);
	output_FT = ft_printf("FT -> %x\n", 1);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%x test 14\n\n"), 0);

	printf("\n");

printf("TEST 15\n");

	output_OG = printf("OG -> %x\n", 9);
	output_FT = ft_printf("FT -> %x\n", 9);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%x test 15\n\n"), 0);

	printf("\n");

printf("TEST 16\n");

	output_OG = printf("OG -> %x\n", -1);
	output_FT = ft_printf("FT -> %x\n", -1);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%x test 16\n\n"), 0);

	printf("\n");

printf("TEST 17\n");

	output_OG = printf("OG -> %x\n", -2);
	output_FT = ft_printf("FT -> %x\n", -2);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%x test 17\n\n"), 0);

	printf("\n");

printf("TEST 18\n");

	output_OG = printf("OG -> %x\n", -101);
	output_FT = ft_printf("FT -> %x\n", -101);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%x test 18\n\n"), 0);

	printf("\n");

printf("TEST 19\n");

	output_OG = printf("OG -> %x\n", INT_MAX);
	output_FT = ft_printf("FT -> %x\n", INT_MAX);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%x test 19\n\n"), 0);

	printf("\n");

printf("TEST 20\n");

	output_OG = printf("OG -> %x\n", INT_MIN);
	output_FT = ft_printf("FT -> %x\n", INT_MIN);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%x test 20\n\n"), 0);

	printf("\n");

printf("TEST 21\n");

	output_OG = printf("OG -> %x\n", UINT_MAX);
	output_FT = ft_printf("FT -> %x\n", UINT_MAX);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%x test 21\n\n"), 0);

	printf("\n");

printf("TEST 22\n");

	output_OG = printf("OG -> %x\n", 100);
	output_FT = ft_printf("FT -> %x\n", 100);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%x test 22\n\n"), 0);

	printf("\n");

printf("TEST 23\n");

	output_OG = printf("OG -> %x\n", -99);
	output_FT = ft_printf("FT -> %x\n", -99);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%x test 23\n\n"), 0);

	printf("\n");

printf("TEST 24\n");

	output_OG = printf("OG -> %x\n", -16);
	output_FT = ft_printf("FT -> %x\n", -16);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%x test 24\n\n"), 0);

	printf("\n");

printf("TEST 25\n");

	output_OG = printf("OG -> %x\n", -9);
	output_FT = ft_printf("FT -> %x\n", -9);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%x test 25\n\n"), 0);

	printf("\n");

printf("TEST 26\n");

	output_OG = printf("OG -> %x\n", -14);
	output_FT = ft_printf("FT -> %x\n", -14);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%x test 26\n\n"), 0);

	printf("\n");

printf("TEST 27\n");

	output_OG = printf("OG -> %x\n", 16);
	output_FT = ft_printf("FT -> %x\n", 16);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%x test 27\n\n"), 0);

	printf("\n");
	
printf("TEST 28\n");

	output_OG = printf("OG -> %x\n", 99);
	output_FT = ft_printf("FT -> %x\n", 99);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%x test 28\n\n"), 0);

	printf("\n");

printf("TEST 29\n");

	output_OG = printf("OG -> %x\n", 101);
	output_FT = ft_printf("FT -> %x\n", 101);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%x test 29\n\n"), 0);

	printf("\n");

printf("TEST 30\n");

	output_OG = printf("OG -> %x\n", -11);
	output_FT = ft_printf("FT -> %x\n", -11);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%x test 30\n\n"), 0);

	printf("\n");

printf("TEST 31\n");

	output_OG = printf("OG -> %x\n", -10);
	output_FT = ft_printf("FT -> %x\n", -10);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%x test 31\n\n"), 0);

	printf("\n");

printf("TEST 32\n");

	output_OG = printf("OG -> %x\n", 17);
	output_FT = ft_printf("FT -> %x\n", 17);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%x test 32\n\n"), 0);

	printf("\n");

/////////////////////////////////
//				%X			   //
/////////////////////////////////
	printf("------------%%X------------\n");
	
printf("TEST 1\n");
	
	unsigned nbr_X = 520;
	output_OG = printf("OG -> %X\n", nbr_X);
	output_FT = ft_printf("FT -> %X\n", nbr_X);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %%X test 1\n\n"), 0);

	printf("\n");

/////////////////////////////////
//		% PERCENTAGE TESTS	   //
/////////////////////////////////
	
	printf("------------%%%%------------\n");

printf("TEST 1\n");

	output_OG = printf("OG -> %%\n");
	output_FT = ft_printf("FT -> %%\n");
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %% test 1\n\n"), 0);

	printf("\n");

printf("TEST 2\n");
	
	output_OG = printf("OG -> %% %%\n");
	output_FT = ft_printf("FT -> %% %%\n");
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %% test 2\n\n"), 0);

	printf("\n");

printf("TEST 3\n");

	output_OG = printf("OG -> %% %% %%\n");
	output_FT = ft_printf("FT -> %% %% %%\n");
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %% test 3\n\n"), 0);

	printf("\n");

printf("TEST 4\n");

	output_OG = printf("OG -> %%  %%  %%\n");
	output_FT = ft_printf("FT -> %%  %%  %%\n");
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> %% test 4\n\n"), 0);

	printf("\n");

/////////////////////////////////
//		    MIX TESTS   	   //
/////////////////////////////////

	printf("-------------------MIX-------------------\n");

printf("TEST 1\n");

	output_OG = printf("OG -> %%%s %%%s %%%d %clbum \t 520 in hexadecimal is %x\n", "string1", "string2", 18, 'a', 520);
	output_FT = ft_printf("FT -> %%%s %%%s %%%d %clbum \t 520 in hexadecimal is %x\n", "string1", "string2", 18, 'a', 520);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	total = tri_output(output_OG, tempOG, output_FT, tempFT);
	if (total != 0)
		return (printf("\n\nERROR ->> MIX test 1\n\n"), 0);
	if (total == 0)
	{
		printf("\n\n\n\n\n");
		printf("ALL GOOD GG MATE !");
		printf("\n\n\n\n\n");
	}
	return (0);
}