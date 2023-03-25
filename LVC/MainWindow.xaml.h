#pragma once

#include "ContactViewModel.h"
#include "MainWindow.g.h"

namespace winrt::LVC::implementation
{
struct MainWindow : MainWindowT<MainWindow>
{
    MainWindow();

    LVC::ContactViewModel MainViewModel();
    void MainViewModel(LVC::ContactViewModel const &value);

  private:
    LVC::ContactViewModel mMainViewModel;
};
} // namespace winrt::LVC::implementation

namespace winrt::LVC::factory_implementation
{
struct MainWindow : MainWindowT<MainWindow, implementation::MainWindow>
{
};
} // namespace winrt::LVC::factory_implementation
