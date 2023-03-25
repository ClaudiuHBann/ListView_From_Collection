#include "pch.h"

#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#endif

namespace winrt::LVC::implementation
{

MainWindow::MainWindow()
    : mContacts(single_threaded_observable_vector<LVC::Contact>({{L"Claudiu", L"HBann"}, {L"Someone", L"Else"}}))
{
    InitializeComponent();
}

Windows::Foundation::Collections::IObservableVector<LVC::Contact> MainWindow::Contacts()
{
    return mContacts;
}

} // namespace winrt::LVC::implementation
