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

void MainWindow::OnButtonClickChange(IInspectable const & /*sender*/,
                                     Microsoft::UI::Xaml::RoutedEventArgs const & /*e*/)
{
    for (auto contact : Contacts())
    {
        contact.LastName(contact.LastName() + L" " + contact.LastName());
    }
}

Windows::Foundation::Collections::IObservableVector<LVC::Contact> MainWindow::Contacts()
{
    return mContacts;
}

} // namespace winrt::LVC::implementation
