//26796

#include <windows.h>
#include <iostream>

int main() {
    DEVMODE devMode;
    EnumDisplaySettings(NULL, 0, &devMode);

    devMode.dmPelsWidth = 1920;
    devMode.dmPelsHeight = 1080;
    devMode.dmFields = DM_PELSWIDTH | DM_PELSHEIGHT;
    LONG result = ChangeDisplaySettings(&devMode, CDS_UPDATEREGISTRY);

    return 0;
}
