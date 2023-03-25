#pragma once

#include "Contact.g.h"

namespace winrt::LVC::implementation
{
struct Contact : ContactT<Contact>
{
    Contact() = default;
    Contact(hstring const &firstName, hstring const &lastName, hstring const &company);

    hstring FirstName();
    void FirstName(hstring const &value);

    hstring LastName();
    void LastName(hstring const &value);

    hstring Company();
    void Company(hstring const &value);

    event_token PropertyChanged(Microsoft::UI::Xaml::Data::PropertyChangedEventHandler const &handler);
    void PropertyChanged(event_token const &token) noexcept;

  private:
    hstring mFirstName;
    hstring mLastName;
    hstring mCompany;

    event<Microsoft::UI::Xaml::Data::PropertyChangedEventHandler> mPropertyChanged;
};
} // namespace winrt::LVC::implementation

namespace winrt::LVC::factory_implementation
{
struct Contact : ContactT<Contact, implementation::Contact>
{
};
} // namespace winrt::LVC::factory_implementation
