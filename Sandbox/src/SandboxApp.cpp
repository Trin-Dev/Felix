#include <Felix.h>

class Sandbox : public Felix::Application
{
public:
	Sandbox()
	{

	}
	
	~Sandbox()
	{

	}
};

Felix::Application* Felix::CreateApplication()
{
	return new Sandbox();
}