#include <imgui.h>

void selector(bool* showCounter, bool* showRegister)
{
	ImGui::Begin("Selector screen");

	ImGui::Checkbox("Counter", showCounter);
	ImGui::Checkbox("Register", showRegister);

	ImGui::End();
}