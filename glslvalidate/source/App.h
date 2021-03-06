/************************************************************************
*                                                                       *
*               Copyright (C) 2002-2006  3Dlabs Inc. Ltd.               *
*                                                                       *
*                        All rights reserved.                           *
*                                                                       *
* Redistribution and use in source and binary forms, with or without    *
* modification, are permitted provided that the following conditions    *
* are met:                                                              *
*                                                                       *
*     Redistributions of source code must retain the above copyright    *
*     notice, this list of conditions and the following disclaimer.     *
*                                                                       *
*     Redistributions in binary form must reproduce the above           *
*     copyright notice, this list of conditions and the following       *
*     disclaimer in the documentation and/or other materials provided   *
*     with the distribution.                                            *
*                                                                       *
*     Neither the name of 3Dlabs Inc. Ltd. nor the names of its         *
*     contributors may be used to endorse or promote products derived   *
*     from this software without specific prior written permission.     *
*                                                                       *
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS   *
* "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT     *
* LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS     *
* FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE        *
* COPYRIGHT HOLDERS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, *
* INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,  *
* BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;      *
* LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER      *
* CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT    *
* LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN     *
* ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE       *
* POSSIBILITY OF SUCH DAMAGE.                                           *
*                                                                       *
************************************************************************/
/************************************************************************
* App.h                                                                 *
* Author:  Philip Rideout                                               *
* Maintained By:  Joshua Doss                                           *
* Last Changed Date: 01/04/2006                                         *
************************************************************************/

#ifndef APP_H
#define APP_H
#include <wx/wx.h>
#include <wx/cmdline.h>
#include <stdarg.h>
class TFrame;

// Application class.  Globally accessible via wxGetApp().
class TApp : public wxApp {
  public:
    bool OnInit();
    void SetFrame(TFrame* frame) { m_frame = frame; }
    void Errorf(const char* format, ...);
    int OnExit() { return m_retval; }
    static const wxCmdLineEntryDesc CommandLineDescription[];
  private:
    int m_retval;
    wxString m_vertfile;
    wxString m_fragfile;
    TFrame* m_frame;
};

DECLARE_APP(TApp)

#endif
