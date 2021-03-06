/*
 * Tristan Hilbert
 * 3/8/18
 * Maze Location Header File
 *
 */

#ifndef __MAZE_LOCATION_HPP
#define __MAZE_LOCATION_HPP


class Maze_Location{

   public:
      virtual ~Maze_Location();
      //This will identify if the location can be stepped on
      virtual bool is_occupiable() =0;

      //This will identify the charater used for printing this room
      virtual char get_sym() =0;

      virtual void contains_person_switch() =0;
};

#endif
