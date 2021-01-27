# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    classGenerator.sh                                  :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/27 21:56:52 by obelouch          #+#    #+#              #
#    Updated: 2021/01/27 22:05:00 by obelouch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

## README:
##      oussama: * in day 5 * Ouuffff too much classes to create,
##               i will create a script.
## Usage:
##      ./classGenerator < class_name > < directory >

class_name=$1
dest_dir=$2

cp Template.cpp $class_name.cpp
cp Template.hpp $class_name.hpp

sed -i 's/Template/'$class_name'/g' $class_name.cpp
sed -i 's/Template/'$class_name'/g' $class_name.hpp

upped=`echo $class_name | tr '[a-z]' '[A-Z]' `
sed -i 's/TEMPLATE/'$upped'/g' $class_name.hpp

mv $class_name.cpp $dest_dir
mv $class_name.hpp $dest_dir