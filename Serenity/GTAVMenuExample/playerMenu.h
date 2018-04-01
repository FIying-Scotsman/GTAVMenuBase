#pragma once

#include "script.h"
class playerMenu	
{
	public:
		void setPlayerGodMode(Entity entity, bool enabled);
		void setPlayerUnlimitedAmmo(bool enabled);
		void setPlayerSuperJump(bool enabled);
		void setPlayerInfiniteAmmo(bool enabled);
		void setWantedLevel(int level);
};
