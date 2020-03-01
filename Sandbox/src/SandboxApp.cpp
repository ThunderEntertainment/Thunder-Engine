#include <Thunder.h>

class Sandbox : public Thunder::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}


};
 
Thunder::Application* Thunder::CreateApplication()
{
	return new Sandbox();
}