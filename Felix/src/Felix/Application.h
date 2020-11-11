#pragma once

#include "Core.h"

namespace Felix {
	class FELIX_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be define in CLIENT
	Application* CreateApplication();
}