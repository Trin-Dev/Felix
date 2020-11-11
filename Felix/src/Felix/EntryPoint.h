#pragma once

#if FX_PLATFROM_WINDOWS

extern Felix::Application* Felix::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Felix::CreateApplication();
	app->Run();
	delete app;
}

#endif // FX_PLATFROM_WINDOWS