#include"header.h"
#include<stdio.h>
#include<string.h>
using namespace std;

struct world
{
	
	void createWorld()
	{
		//player
		strcpy(w.my_player.name, "Unknown");
	    strcpy(w.my_player.description, "As you would know you are at Hogwarts, School of Witchcraft and Wizary. We found you unconscious last night on the top of the north tower's steps, we don't know what happened to you..\n You are at the sickroom, you must investigate what happened to you, maybe a dark wizard is in the castle..");
		//rooms
		strcpy(w.my_rooms[0].name, "Starting Room.\n");
		strcpy(w.my_rooms[0].description, "You can see a room when you look at east.\n");
		strcpy(w.my_rooms[1].name, "3rd Floor.\n");
		strcpy(w.my_rooms[1].description, "There are stair going down on south and a closed room east, it seems very cold.\n");
		strcpy(w.my_rooms[2].name, "2nd floor.\n");
		strcpy(w.my_rooms[2].description, "You can go east to the bathroom. South downstairs to 1st floor.\n");
		strcpy(w.my_rooms[3].name, "");
		strcpy(w.my_rooms[3].description, "");
		strcpy(w.my_rooms[4].name, "");
		strcpy(w.my_rooms[4].description, "");
		strcpy(w.my_rooms[5].name, "");
		strcpy(w.my_rooms[5].description, "");
		strcpy(w.my_rooms[6].name, "");
		strcpy(w.my_rooms[6].description, "");
		strcpy(w.my_rooms[7].name, "");
		strcpy(w.my_rooms[7].description, "");
		strcpy(w.my_rooms[8].name, "");
		strcpy(w.my_rooms[8].description, "");
		strcpy(w.my_rooms[9].name, "");
		strcpy(w.my_rooms[9].description, "");
		strcpy(w.my_rooms[10].name, "");
		strcpy(w.my_rooms[10].description, "");

	}


};
struct players
{
	
};
struct rooms
{
	
};
struct exit1
{
	
};