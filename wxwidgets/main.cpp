#include <wx/wx.h>
#include "placeholder"

class placeholder : public placeholder
{
public:
    placeholder(wxWindow* parent) : placeholder(parent) {}

protected:
    void placeholder(wxCommandEvent& event)
    {
    }
};

class placeholder : public wxApp
{
public:
    bool OnInit() override
    {
        placeholder* frame = new placeholder(nullptr);
        frame->Show(true);
        return true;
    }
};

wxIMPLEMENT_APP(placeholder);
