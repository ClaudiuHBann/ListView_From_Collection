#pragma once

#include "Contact.h"
#include "ContactViewModel.g.h"

namespace winrt::LVC::implementation
{
struct ContactViewModel : ContactViewModelT<ContactViewModel>
{
    ContactViewModel();

    LVC::Contact Contact();
    Windows::Foundation::Collections::IObservableVector<LVC::Contact> Contacts();

  private:
    LVC::Contact mContact{nullptr};
    Windows::Foundation::Collections::IObservableVector<LVC::Contact> mContacts{};
};
} // namespace winrt::LVC::implementation

namespace winrt::LVC::factory_implementation
{
struct ContactViewModel : ContactViewModelT<ContactViewModel, implementation::ContactViewModel>
{
};
} // namespace winrt::LVC::factory_implementation
