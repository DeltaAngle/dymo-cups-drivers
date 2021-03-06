// -*- C++ -*-
// $Id: MOCK_PrintEnvironment.h 4759 2008-06-19 19:02:27Z vbuzuev $

// DYMO LabelWriter Drivers
// Copyright (C) 2008 Sanford L.P.

// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

#ifndef c002c15c_0f9e_4cc5_b38a_b5928c2348b1
#define c002c15c_0f9e_4cc5_b38a_b5928c2348b1

#include "../PrinterDriver.h"

using namespace DymoPrinterDriver;

class MockPrintEnvironment: public IPrintEnvironment
{
public:
  virtual ~MockPrintEnvironment() {}
  virtual void WriteData(const buffer_t& Data);
  virtual void ReadData(buffer_t& Data);

  virtual job_status_t GetJobStatus();
  virtual void SetJobStatus(job_status_t JobStatus);

  const buffer_t& GetData();
    
  void ClearData();
private:
  buffer_t Data_;
};

#endif

/*
 * End of "$Id: MOCK_PrintEnvironment.h 4759 2008-06-19 19:02:27Z vbuzuev $".
 */







