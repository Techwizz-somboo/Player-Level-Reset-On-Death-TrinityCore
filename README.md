# Player-Level-Reset-On-Death-TrinityCore
A TC (WoW) script that resets player level upon death

To add this to your server, simply download the script. Place it in the directory TrinityCore/src/server/scripts/Custom. Then after that, open your custom_script_loader.cpp in the same directory (Custom) then where you see
```// This is where scripts' loading functions should be declared:```
add (under it)
```void AddSC_Player_Level_Reset_On_Death();```
and where it says
```void AddCustomScripts() { ```
add
```AddSC_Player_Level_Reset_On_Death();```
Then open CMakeLists.txt
Where it says (Around line 245)
```${scripts_STAT_SRCS}```
Add
```Custom/Player_Level_Reset_On_Death.cpp```
Recompile your server. That should be all. Enjoy!
