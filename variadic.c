/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   variadic.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaschio <mmaschio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:13:05 by mmaschio          #+#    #+#             */
/*   Updated: 2023/10/17 13:55:42 by mmaschio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

/*
   Function to calculate the average of 'n' numbers.
   Takes 'n' as the first argument followed by a variable number of integers.
   Returns the average as a float.
*/
float	average(int n, ...)
{
	va_list	ap;

	/* 'ap' stands for argument pointer.
		This pointer will point to the 3 */
	float total; // Variable to store the sum of the numbers
	int i;       // Loop counter
	va_start(ap, n);
	// Initialize 'ap' to point to the first variable argument after 'n'
	total = 0;
	i = 0;
	// Loop through the arguments and accumulate the sum
	while (i < n)
	{
		total += va_arg(ap, int);
		// Get the next argument and add it to the total
		i++; // Move to the next argument
	}
	va_end(ap); // Clean up the argument list
	// Calculate and return the average
	return ((float)total / n);
}

int	main(void)
{
	float	average_age;

	/*
		The 3 is a flag that represents the 'n' in our function average().
		It is the number of arguments we are going to read to calculate the average.
	*/
	average_age = average(3, 10, 22, 13);
	// Call the average function
	printf("The average age of those 7 people is: %f\n", average_age);
	// Print the result
}
