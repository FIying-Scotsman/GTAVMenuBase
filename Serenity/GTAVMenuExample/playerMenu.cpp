#pragma once

#include "script.h"
#include "playerMenu.h"
#include "Util/Util.hpp"

Player playr;
Ped pPed;

void playerMenu::setPlayerGodMode(Entity entity, bool enabled)
{
	ENTITY::SET_ENTITY_INVINCIBLE(entity, enabled);
}

void playerMenu::setPlayerSuperJump(bool enabled)
{
	GAMEPLAY::SET_SUPER_JUMP_THIS_FRAME(enabled);
}

void playerMenu::setPlayerInfiniteAmmo(bool enabled)
{
	WEAPON::SET_PED_INFINITE_AMMO_CLIP(pPed, enabled);
}

void playerMenu::setWantedLevel(int level)
{
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(playr);
	PLAYER::SET_MAX_WANTED_LEVEL(level);
	PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(playr, level);
	showNotification("Wanted Level is" + level);
}