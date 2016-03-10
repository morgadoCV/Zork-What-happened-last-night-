#ifndef _FUN
#define _FUN


struct world
{
	players my_player;
	rooms my_rooms[10];
	exit1 my_exits[44];
	void createWorld();

	
}w;
struct players
{
	char name[25];
	char description[140];
}p;
struct rooms
{
	char name[25];
	char description[140];
	
}r;
struct exit1
{
	char name[25];
	char description[140];
	char source[50];
	char destination[50];
}e;


#endif