/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhcelik <muhcelik@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:44:04 by muhcelik          #+#    #+#             */
/*   Updated: 2024/05/07 16:44:05 by muhcelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria* materials[4];
        int size;
    public:
        MateriaSource();
        MateriaSource(const MateriaSource& copyObject);
        ~MateriaSource();
        MateriaSource& operator=(const MateriaSource& copyObject);
        
        void learnMateria(AMateria* m);
        AMateria* createMateria(std::string const & type);

        AMateria* getMaterials() const;
        int getSize() const;
};
