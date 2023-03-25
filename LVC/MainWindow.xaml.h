#pragma once

#include "MainWindow.g.h"

namespace winrt::LVC::implementation
{
struct MainWindow : MainWindowT<MainWindow>
{
    MainWindow();
};
} // namespace winrt::LVC::implementation

namespace winrt::LVC::factory_implementation
{
struct MainWindow : MainWindowT<MainWindow, implementation::MainWindow>
{
};
} // namespace winrt::LVC::factory_implementation
