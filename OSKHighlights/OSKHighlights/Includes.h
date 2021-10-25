#pragma once
//#define WINVER 0x0500
#include <Windows.h>
#include <string>
#include <stdio.h>
#include <iostream>
#include <chrono>
#include <ctime>
#include <fstream>
#include <sstream>
#include <filesystem>
#include <iomanip>
#include <memory>
#include <winternl.h>
#include <ShObjIdl.h>
#include <ShObjIdl_core.h>
#include <Psapi.h>
#include <msclr\marshal_cppstd.h>
#include <math.h>
#include <cmath>
#include <gdiplusenums.h>
//#include <gdiplus.h>

#include <psapi.h> //GetModuleFileNameEx
#include <TlHelp32.h>

// Setting DLL access controls
#include <AccCtrl.h>
#include <Aclapi.h>
#include <Sddl.h>

// UWP
//#include <atlbase.h>
#include <atlcomcli.h>
#include <appmodel.h>

using namespace std;
using namespace msclr::interop;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Drawing::Drawing2D;
using namespace System::Security::AccessControl;
using namespace System::IO;
using namespace System::Diagnostics;