#include "pch.h"

#include "ContactViewModel.h"

#include "ContactViewModel.g.cpp"

namespace winrt::LVC::implementation
{

ContactViewModel::ContactViewModel()
{
    mContact = make<LVC::implementation::Contact>(L"First Name", L"Last Name", L"Company");
    mContacts = single_threaded_observable_vector<LVC::Contact>();
    mContacts.Append(mContact);
}

LVC::Contact ContactViewModel::Contact()
{
    return mContact;
}

Windows::Foundation::Collections::IObservableVector<LVC::Contact> ContactViewModel::Contacts()
{
    return mContacts;
}

} // namespace winrt::LVC::implementation
