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
} // namespace winrt::LVC::implementation
