#include "Discord.h"

#include <string>

#include <time.h>
#include <chrono>

#include <iostream>

static int64_t eptime = std::chrono::duration_cast<std::chrono::seconds>(std::chrono::system_clock::now().time_since_epoch()).count();

void Discord::Initialize() 
{
	DiscordEventHandlers Handle;
	memset(&Handle, 0, sizeof(Handle));
	Discord_Initialize("856861657631948820", &Handle, 1, NULL);

}

void Discord::Update()
{  
		DiscordRichPresence discordPresence;
		memset(&discordPresence, 0, sizeof(discordPresence));
		discordPresence.state = "Playing";
		discordPresence.startTimestamp = eptime;
		discordPresence.endTimestamp = NULL;
		discordPresence.largeImageKey = "killericon";

		Discord_UpdatePresence(&discordPresence);
}