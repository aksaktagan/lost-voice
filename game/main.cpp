#include "stdafx.h"
#include "MyGame.h"

CMyGame game;
CGameApp app;

int main(int argc, char* argv[])
{
	app.OpenWindow(800, 600, "My Game!");
	//app.OpenFullScreen(800, 600, 24);
	app.SetClearColor(CColor::White());
	app.OpenConsole();
	app.Run(&game);
	return(0);
}
