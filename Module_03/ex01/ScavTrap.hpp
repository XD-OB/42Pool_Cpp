/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 01:39:12 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/28 02:30:22 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     SCAVTRAP_H
# define    SCAVTRAP_H

# include <string>

// ------------- Color Macros:
# define     BLACK   "\033[30;1m"
# define     RED    "\033[31;1m"
# define     GREEN   "\033[32;1m"
# define     YELLOW  "\033[33;1m"
# define     BLUE    "\033[34;1m"
# define     MAGENTA "\033[35;1m"
# define     CYAN    "\033[36;1m"
# define     WHITE   "\033[37;1m"
// End of Color:
# define     EOC    "\033[0m"
//-----------------------------

class   ScavTrap
{
    private:
        static unsigned int const   _maxHitPoints;
        static unsigned int const   _maxEnergyPoints;
        static unsigned int const   _meleeAttackDmg;
        static unsigned int const   _rangedAttackDmg;
        static unsigned int const   _armorDamageReduction;
        static unsigned int const   _nbrChallenges;
        static std::string const    _challenges[];

        std::string     _name;
        unsigned int    _hitPoints;
        unsigned int    _energyPoints;
        unsigned int    _level;

    public:
        ScavTrap( void );
        ScavTrap( std::string const & name );
        ScavTrap( ScavTrap const & src );
        ~ScavTrap( void );

        // Accessors:
        std::string     getName( void ) const;
        unsigned int    getLevel( void ) const;
        unsigned int    getHitPoints( void ) const;
        unsigned int    getEnergyPoints( void ) const;
        unsigned int    getMeleeAttackDmg( void ) const;
        unsigned int    getRangedAttackDmg( void ) const;
        void            setName( std::string name );
        // operations:
        ScavTrap &      operator=( ScavTrap const & rhs );
        // Attacks:
        unsigned int    meleeAttack( std::string const & target );
        unsigned int    rangedAttack( std::string const & target );
        bool            beRepaired( unsigned int amount );
        void            takeDamage( unsigned int amount );
        void            talk( std::string const message ) const;
        void            showState( void ) const;
        // Ultimate (random special attack):
        void            challengeNewcomer( std::string const & target );
};


#endif