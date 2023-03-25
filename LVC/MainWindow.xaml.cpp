#include "pch.h"

#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#endif

namespace winrt::LVC::implementation
{

MainWindow::MainWindow()
{
    InitializeComponent();
}

LVC::ContactViewModel MainWindow::MainViewModel()
{
    return mMainViewModel;
}

void MainWindow::MainViewModel(LVC::ContactViewModel const &value)
{
    mMainViewModel = value;
}

} // namespace winrt::LVC::implementation
