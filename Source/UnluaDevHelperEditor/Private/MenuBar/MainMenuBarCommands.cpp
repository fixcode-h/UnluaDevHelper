
#include "MainMenuBarCommands.h"

#define LOCTEXT_NAMESPACE "FMainMenuBarCommands"

void FMainMenuBarCommands::RegisterCommands()
{
    UI_COMMAND(OpenSoulation, "Open Soulation", "Open lua Soulation", EUserInterfaceActionType::Button, FInputChord());
    UI_COMMAND(SelectVSCode, "Change IDE Type", "Select VSCode.", EUserInterfaceActionType::RadioButton, FInputChord());
    UI_COMMAND(SelectIDEA, "Change IDE Type", "Select IDEA.",EUserInterfaceActionType::RadioButton, FInputChord());
    UI_COMMAND(EnableDebug, "Enable Debug", "Enable Debug.",EUserInterfaceActionType::ToggleButton, FInputChord());
}

#undef LOCTEXT_NAMESPACE