/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 09:08:57 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/22 15:08:28 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     CLAPTRAP_H
# define    CLAPTRAP_H

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

//-------------- Types Macros:
# define    SC4V_TP     "SC4V-TP"
# define    FR4G_TP     "FR4G-TP"
# define    IN4C_TP     "IN4C-TP"
# define    SP3R_TP     "SP3R-TP"

class ClapTrap
{
    protected:
        std::string     _type;
        std::string     _name;
        unsigned int    _level;
        unsigned int    _hitPoints;
        unsigned int    _energyPoints;
        unsigned int    _maxHitPoints;
        unsigned int    _maxEnergyPoints;
        unsigned int    _meleeAttackDmg;
        unsigned int    _rangedAttackDmg;
        unsigned int    _armorDamageReduction;

    public:
        ClapTrap( void );
        ClapTrap(
            std::string type,
            std::string name,
            unsigned int level,
            unsigned int hitpoints,
            unsigned int energyPoints,
            unsigned int maxHitPoints,
            unsigned int maxEnergyPoints,
            unsigned int meleeAttackDmg,
            unsigned int rangedAttackDmg,
            unsigned int armorDamageReduction
        );
        ClapTrap( ClapTrap const & src );
        ~ClapTrap( void );

        // Accessors:
        std::string     getType( void ) const;
        std::string     getName( void ) const;
        unsigned int    getLevel( void ) const;
        unsigned int    getHitPoints( void ) const;
        unsigned int    getEnergyPoints( void ) const;
        unsigned int    getMaxHitPoints( void ) const;
        unsigned int    getMaxEnergyPoints( void ) const;
        unsigned int    getMeleeAttackDmg( void ) const;
        unsigned int    getRangedAttackDmg( void ) const;
        unsigned int    getArmorDamageReduction( void ) const;
        void            setName( std::string name );
        // operations:
        ClapTrap &      operator=( ClapTrap const & rhs );
        // Function member:
        void            showState( void ) const;
        void            talk( std::string const message ) const;
        unsigned int    meleeAttack( std::string const & target );
        unsigned int    rangedAttack( std::string const & target );
        void            takeDamage( unsigned int amount );
        bool            beRepaired( unsigned int amount );
};


#endif