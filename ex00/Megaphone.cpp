/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jibanez- <jibanez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 20:08:38 by jibanez-          #+#    #+#             */
/*   Updated: 2022/05/25 21:39:59 by jibanez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <ctype.h>


int	main(int argc, char *argv[])
{
	if (argc == 1)
		std::cout << "* LOUD MEGAPHONE NOISES *";
	else
	{
		for (int i = 1; i < argc; i++)
		{
			const char *str = argv[i];
			for (int j = 0; str[j]; j++)
					std::cout << (char)towupper(argv[i][j]);
		}
		std::cout << std::endl;
	}
	return (0);
}