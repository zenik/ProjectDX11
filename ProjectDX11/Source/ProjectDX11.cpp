#include "Common.h"
#include "./App/CApplication.h"

//	Entrypoint
int WINAPI WinMain( HINSTANCE hInstance, HINSTANCE, LPSTR lpCmdLine, int nShowCmd )
{
	Applicatin::cApplication app;
	app.Run(hInstance);				//	アプリケーション開始
	return 0;
}