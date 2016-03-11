#ifndef _WORLD
#define _WORLD

#include"player.h"

class World
{
public:
	Player* my_player=nullptr;
	Room* my_rooms=nullptr;
	Exit* my_exits=nullptr;
	

public:
	void createWorld();
	World();
	~World();
};




#endif