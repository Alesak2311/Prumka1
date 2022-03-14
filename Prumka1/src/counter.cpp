#include <imgui.h>

void drawCounterScreen(int& num)
{
	ImGui::Begin("Counter screen");

	if (ImGui::Button("Click me!"))
		num++;

	if (num > 45)
		num = 0;

	ImGui::SameLine();
	ImGui::Text("Counter = %d", num);

	ImGui::End();
}