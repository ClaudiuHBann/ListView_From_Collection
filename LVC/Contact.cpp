#include "pch.h"

#include "Contact.h"

#include "Contact.g.cpp"

namespace winrt::LVC::implementation
{

Contact::Contact(hstring const &firstName, hstring const &lastName, hstring const &company)
    : mFirstName(firstName), mLastName(lastName), mCompany(company)
{
}

hstring Contact::FirstName()
{
    return mFirstName;
}

void Contact::FirstName(hstring const &value)
{
    if (mFirstName != value)
    {
        mFirstName = value;
        mPropertyChanged(*this, Microsoft::UI::Xaml::Data::PropertyChangedEventArgs(L"FirstName"));
    }
}

hstring Contact::LastName()
{
    return mLastName;
}

void Contact::LastName(hstring const &value)
{
    if (mLastName != value)
    {
        mLastName = value;
        mPropertyChanged(*this, Microsoft::UI::Xaml::Data::PropertyChangedEventArgs(L"LastName"));
    }
}

hstring Contact::Company()
{
    return mCompany;
}

void Contact::Company(hstring const &value)
{
    if (mCompany != value)
    {
        mCompany = value;
        mPropertyChanged(*this, Microsoft::UI::Xaml::Data::PropertyChangedEventArgs(L"Company"));
    }
}

event_token Contact::PropertyChanged(Microsoft::UI::Xaml::Data::PropertyChangedEventHandler const &handler)
{
    return mPropertyChanged.add(handler);
}

void Contact::PropertyChanged(event_token const &token) noexcept
{
    mPropertyChanged.remove(token);
}

} // namespace winrt::LVC::implementation
