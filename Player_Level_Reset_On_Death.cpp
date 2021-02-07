#include "Define.h"
#include "ScriptMgr.h"
#include "SharedDefines.h"
#include "Unit.h"
#include "ScriptPCH.h"
#include "Player.cpp"

class Player_Level_Reset_On_Death : public PlayerScript
{
protected:
Player_Level_Reset_On_Death(const char* name);

public:
Player_Level_Reset_On_Death() : PlayerScript("Player_Level_Reset_On_Death") { }

void OnPVPKill(Player* killer, Player* killed) {
killed->Say("You killed me, blah!", (Language)0, nullptr);
killed->GiveLevel(1);
}

void OnPlayerKilledByCreature(Creature* killer, Player* killed) {
killed->Say("It was good living, blah!", (Language)0, nullptr);
killed->GiveLevel(1);
}
};

void AddSC_Player_Level_Reset_On_Death() {
new Player_Level_Reset_On_Death();
}
