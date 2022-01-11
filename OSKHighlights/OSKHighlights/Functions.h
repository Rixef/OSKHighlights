#pragma once
#include "Definitions.h"

//example usage:
//DWORD procId = GetProcId(L"NMS.exe");
DWORD GetProcId(const wchar_t* procName)
{
	DWORD procId = 0;
	HANDLE hSnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
	if (hSnap != INVALID_HANDLE_VALUE)
	{
		PROCESSENTRY32 procEntry;
		procEntry.dwSize = sizeof(procEntry);

		if (Process32First(hSnap, &procEntry))
		{
			do
			{
				if (!_wcsicmp(procEntry.szExeFile, procName))
				{
					procId = procEntry.th32ProcessID;
					break;
				}
			} while (Process32Next(hSnap, &procEntry));

		}
	}
	CloseHandle(hSnap);
	return procId;
}

//usage:
//sikey("hardware",SC_Q);//will press Q via a hardware scan code(SC)
//sikey("virtual",VK_Q);//will press Q via a virtual key code(VK)
//sikey("virtual",VK_Q,"ctrl")//will press Ctrl + Q via a virtual key code(VK)
void sikey(string SCorVK,WORD keycode, string modifier = "")
{
	if (SCorVK == "virtual" || SCorVK == "virt" || SCorVK == "vk" || SCorVK == "VK" || SCorVK == "VIRTUAL")
	{
		INPUT input{};
		input.type = INPUT_KEYBOARD;
		input.ki.time = 0;
		input.ki.dwExtraInfo = 0;
		if (modifier == "")//just sends the key press
		{
			input.ki.wVk = keycode;
			input.ki.wScan = MapVirtualKeyW(keycode, MAPVK_VK_TO_VSC);
			input.ki.dwFlags = 0;//there is no keydown flag
			SendInput(1, &input, sizeof(INPUT));//this sends keydown
			input.ki.dwFlags = KEYEVENTF_KEYUP;//keyup flag
			SendInput(1, &input, sizeof(INPUT));//send keyup
		}
		else if (modifier == "ctrl")//sends Ctrl + Keypress
		{
			//Ctrl down:
			input.ki.wVk = VK_CONTROL;
			input.ki.wScan = MapVirtualKeyW(VK_CONTROL, MAPVK_VK_TO_VSC);
			input.ki.dwFlags = 0;//there is no keydown flag
			SendInput(1, &input, sizeof(INPUT));//this sends keydown

			//Full secondary key press; down/up:
			input.ki.wVk = keycode;
			input.ki.wScan = MapVirtualKeyW(keycode, MAPVK_VK_TO_VSC);
			input.ki.dwFlags = 0;//there is no keydown flag
			SendInput(1, &input, sizeof(INPUT));//this sends keydown
			input.ki.dwFlags = KEYEVENTF_KEYUP;//keyup flag
			SendInput(1, &input, sizeof(INPUT));//send keyup

			//Ctrl up:
			input.ki.wVk = VK_CONTROL;
			input.ki.wScan = MapVirtualKeyW(VK_CONTROL, MAPVK_VK_TO_VSC);
			input.ki.dwFlags = KEYEVENTF_KEYUP;//keyup flag
			SendInput(1, &input, sizeof(INPUT));//this sends keyup
		}
	}
	else if (SCorVK == "hardware" || SCorVK == "hard" || SCorVK == "sc" || SCorVK == "SC" || SCorVK == "HARDWARE")
	{
		INPUT input{};
		input.type = INPUT_KEYBOARD;
		input.ki.time = 0;
		input.ki.dwExtraInfo = 0;
		input.ki.wVk = 0;
		if (modifier == "")//just sends the key press
		{
			input.ki.dwFlags = KEYEVENTF_SCANCODE;//
			input.ki.wScan = keycode;
			SendInput(1, &input, sizeof(INPUT));//this sends keydown
			input.ki.dwFlags = KEYEVENTF_SCANCODE | KEYEVENTF_KEYUP;//keyup flag
			SendInput(1, &input, sizeof(INPUT));//send keyup
		}
		else if (modifier == "ctrl")//sends Ctrl + Keypress
		{
			//Ctrl down:
			input.ki.dwFlags = KEYEVENTF_SCANCODE;//
			input.ki.wScan = keycode;
			SendInput(1, &input, sizeof(INPUT));//this sends keydown

			//Full secondary key press; down/up:
			input.ki.dwFlags = KEYEVENTF_SCANCODE;//
			input.ki.wScan = keycode;
			SendInput(1, &input, sizeof(INPUT));//this sends keydown
			input.ki.dwFlags = KEYEVENTF_SCANCODE | KEYEVENTF_KEYUP;//keyup flag
			SendInput(1, &input, sizeof(INPUT));//send keyup

			//Ctrl up:
			input.ki.dwFlags = KEYEVENTF_SCANCODE | KEYEVENTF_KEYUP;//keyup flag
			input.ki.wScan = keycode;
			SendInput(1, &input, sizeof(INPUT));//this sends keyup
		}
	}
}
