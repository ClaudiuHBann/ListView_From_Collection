#pragma once

#include "Contact.g.h"

namespace winrt::LVC::implementation
{
struct Contact : ContactT<Contact>
{
    Contact() = default;
    Contact(hstring const &firstName, hstring const &lastName);

    hstring FirstName();
    void FirstName(hstring const &value);

    hstring LastName();
    void LastName(hstring const &value);

    event_token PropertyChanged(Microsoft::UI::Xaml::Data::PropertyChangedEventHandler const &handler);
    void PropertyChanged(event_token const &token) noexcept;

  private:
    hstring mFirstName;
    hstring mLastName;

    event<Microsoft::UI::Xaml::Data::PropertyChangedEventHandler> mPropertyChanged;
};
} // namespace winrt::LVC::implementation

namespace winrt::LVC::factory_implementation
{
struct Contact : ContactT<Contact, implementation::Contact>
{
};
} // namespace winrt::LVC::factory_implementation
