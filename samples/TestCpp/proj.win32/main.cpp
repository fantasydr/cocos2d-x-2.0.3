#include "main.h"
#include "AppDelegate.h"
#include "CCEGLView.h"

USING_NS_CC;

#ifdef CC_USING_ANGLE_EGL
#pragma comment(lib, "libGLESv2.lib")
#else
#pragma comment(lib, "opengl32.lib")
#pragma comment(lib, "glew32.lib")
#endif

int APIENTRY _tWinMain(HINSTANCE hInstance,
                       HINSTANCE hPrevInstance,
                       LPTSTR    lpCmdLine,
                       int       nCmdShow)
{
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);

    // create the application instance
    AppDelegate app;
    CCEGLView* eglView = CCEGLView::sharedOpenGLView();
    eglView->setFrameSize(480, 320);
    return CCApplication::sharedApplication()->run();
}
