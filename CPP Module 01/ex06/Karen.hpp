/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfunctio <hfunctio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 13:14:26 by hfunctio          #+#    #+#             */
/*   Updated: 2022/01/22 13:27:09 by hfunctio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>

class Karen {

	private:

		void debug(void);
		void info(void);
		void warning(void);
		void error(void);

	public:
		
		Karen();
		~Karen();
		void complain(std::string level);

};

#endif