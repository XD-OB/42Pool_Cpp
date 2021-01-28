/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 01:39:12 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/28 02:29:23 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     FRAGTRAP_H
# define    FRAGTRAP_H

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

        std::string     _name;
        unsigned int    _hitPoints;
        unsigned int    _energyPoints;
        unsigned int    _level;

    public:
        FragTrap( void );
        FragTrap( std::string const & name );
        FragTrap( FragTrap const & src );
        ~FragTrap( void );

        // Accessors:
        std::string     getName( void ) const;
        unsigned int    getLevel( void ) const;
        unsigned int    getHitPoints( void ) const;
        unsigned int    getEnergyPoints( void ) const;
        unsigned int    getMeleeAttackDmg( void ) const;
        unsigned int    getRangedAttackDmg( void ) const;
        void            setName( std::string name );
        // operations:
        FragTrap &      operator=( FragTrap const & rhs );
        // Attacks:
        unsigned int    meleeAttack( std::string const & target );
        unsigned int    rangedAttack( std::string const & target );
        bool            beRepaired( unsigned int amount );
        void            takeDamage( unsigned int amount );
        void            talk( std::string const message ) const;
        void            showState( void ) const;
        // Ultimate (random special attack):
        unsigned int    vaulthunter_dot_exe( std::string const & target );
        // Special Attacks:
        unsigned int    funzerker( std::string const & target );
        unsigned int    blightBot( std::string const & target );
        unsigned int    gunWizard( std::string const & target );
        unsigned int    minionTrap( std::string const & target );
        unsigned int    meatUnicycle( std::string const & target );
        unsigned int    laserInferno( std::string const & target );
        unsigned int    torgueFiesta( std::string const & target );
        unsigned int    oneShotWonder( std::string const & target );
};


#endif