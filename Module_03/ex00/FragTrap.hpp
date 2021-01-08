/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 01:39:12 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/08 05:24:52 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     FRAGTRAP_H
# define    FRAGTRAP_H

# include <string>

class FragTrap
{
    private:
        static unsigned int const   _maxHitPoints;
        static unsigned int const   _maxEnergyPoints;
        static unsigned int const   _meleeAttackDmg;
        static unsigned int const   _rangedAttackDmg;
        static unsigned int const   _armorDamageReduction;
        static unsigned int const   _nbrSpecialAttacks;
        static void                 (FragTrap::*_attacks[])( std::string const & target );

        std::string     _name;
        unsigned int    _hitPoints;
        unsigned int    _energyPoints;
        unsigned int    _level;

    public:
        FragTrap( std::string name );
        FragTrap( FragTrap & src );
        ~FragTrap( void );

        std::string getName( void ) const;
        void        meleeAttack( std::string const & target );
        void        rangedAttack( std::string const & target );
        void        takeDamage( unsigned int amount );
        void        beRepaired( unsigned int amount );
        // Ultimate (random special attack):
        void        vaulthunter_dot_exe( std::string const & target );
        // Special Attacks:
        void        funzerker( std::string const & target );
        void        blightBot( std::string const & target );
        void        gunWizard( std::string const & target );
        void        minionTrap( std::string const & target );
        void        meatUnicycle( std::string const & target );
        void        laserInferno( std::string const & target );
        void        torgueFiesta( std::string const & target );
        void        oneShotWonder( std::string const & target );

        FragTrap &  operator=( FragTrap const & rhs );
};


#endif