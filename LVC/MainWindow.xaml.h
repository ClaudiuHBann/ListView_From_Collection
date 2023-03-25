#pragma once

#include "MainWindow.g.h"

namespace winrt::LVC::implementation
{
struct MainWindow : MainWindowT<MainWindow>
{
    MainWindow();

    IObservableVector<LVC::Contact> Contacts();

  private:
    IObservableVector<LVC::Contact> mContacts{};
};
} // namespace winrt::LVC::implementation

namespace winrt::LVC::factory_implementation
{
struct MainWindow : MainWindowT<MainWindow, implementation::MainWindow>
{
};
} // namespace winrt::LVC::factory_implementation
