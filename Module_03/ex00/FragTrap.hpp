/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 01:39:12 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/13 16:38:48 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     FRAGTRAP_H
# define    FRAGTRAP_H

# include <string>

struct  t_specialAttack;

class   FragTrap
{
    private:
        static unsigned int const   _maxHitPoints;
        static unsigned int const   _maxEnergyPoints;
        static unsigned int const   _meleeAttackDmg;
        static unsigned int const   _rangedAttackDmg;
        static unsigned int const   _armorDamageReduction;
        static unsigned int const   _nbrSpecialAttacks;
        static t_specialAttack      _attacks[];

        void            _showState( std::string const message ) const;

        std::string     _name;
        unsigned int    _hitPoints;
        unsigned int    _energyPoints;
        unsigned int    _level;

    public:
        FragTrap( void );
        FragTrap( std::string name );
        FragTrap( FragTrap const & src );
        ~FragTrap( void );

        // Accessors:
        std::string     getName( void ) const;
        unsigned int    getLevel( void ) const;
        unsigned int    getHitPoints( void ) const;
        unsigned int    getEnergyPoints( void ) const;
        // operations:
        FragTrap &      operator=( FragTrap const & rhs );
        // Attacks:
        void            meleeAttack( std::string const & target );
        void            rangedAttack( std::string const & target );
        void            takeDamage( unsigned int amount );
        void            beRepaired( unsigned int amount );
        // Ultimate (random special attack):
        void            vaulthunter_dot_exe( std::string const & target );
        // Special Attacks:
        void            funzerker( std::string const & target );
        void            blightBot( std::string const & target );
        void            gunWizard( std::string const & target );
        void            minionTrap( std::string const & target );
        void            meatUnicycle( std::string const & target );
        void            laserInferno( std::string const & target );
        void            torgueFiesta( std::string const & target );
        void            oneShotWonder( std::string const & target );
};


#endif