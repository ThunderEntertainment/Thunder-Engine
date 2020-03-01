#pragma once

#include "Core.h"

namespace Thunder
{
	class THUNDER_API Application
	{

	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//Will be defined in the client
	Application* CreateApplication();
}