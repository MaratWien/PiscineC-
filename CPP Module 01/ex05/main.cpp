/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfunctio <hfunctio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 14:50:09 by hfunctio          #+#    #+#             */
/*   Updated: 2022/01/22 15:46:01 by hfunctio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main() {

	Karen tmp;

	tmp.complain("DEBUG");
	tmp.complain("INFO");
	tmp.complain("WARNING");
	tmp.complain("ERROR");
	tmp.complain("WARNING");
	
	return(0);
}
