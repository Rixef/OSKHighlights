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

//example usage:
//uintptr_t modBaseAddy = GetModuleBaseAddress(procId, L"NMS.exe");
uintptr_t GetModuleBaseAddress(DWORD procId, const wchar_t* modName)
{
	uintptr_t modBaseAddress = 0;
	HANDLE hSnap = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE | TH32CS_SNAPMODULE32, procId);
	if (hSnap != INVALID_HANDLE_VALUE)
	{
		MODULEENTRY32 modEntry;
		modEntry.dwSize = sizeof(modEntry);
		if (Module32First(hSnap, &modEntry))
		{
			do
			{
				if (!_wcsicmp(modEntry.szModule, modName))
				{
					modBaseAddress = (uintptr_t)modEntry.modBaseAddr;
					break;
				}
			} while (Module32Next(hSnap, &modEntry));
		}
	}
	CloseHandle(hSnap);
	return modBaseAddress;
}

//example usage:
//std::vector<unsigned int> healthOffsets = {0x0, 0x08, 0x38C, 0x28, 0x374};
//uintptr_t healthAddy = FindDMAAddy(hProc,LocalPlayerBasePtr,healthOffsets);
uintptr_t FindDMAAddy(HANDLE hProc, uintptr_t ptr, std::vector<unsigned int> offsets)
{
	uintptr_t addr = ptr;
	for (int i = 0; i < offsets.size(); i++)
	{
		ReadProcessMemory(hProc, (LPCVOID)addr, &addr, sizeof(addr), 0);
		addr += offsets[i];
	}
	return addr;
}

//example usage:
//std::vector<unsigned int> healthAOB = {0x0F, 0x0, 0x0, 0x0, 0x13, 0x0, 0x0, 0x0, 0x03, 0x0, 0x0, 0x0, 0x05, 0x0, 0x0, 0x0, 0x14, 0x0, 0x0, 0x0, 0x1D, 0x0, 0x0, 0x0, 0x05, 0x0, 0x0, 0x0, 0x08, 0x0, 0x0, 0x0};
//uintptr_t healthAddy = AOBScanModule();
uintptr_t AOBScanModule()
{
	uintptr_t addr = 0;

	return addr;
}

//example usage:
//std::vector<unsigned int> healthAOB = {0x0F, 0x0, 0x0, 0x0, 0x13, 0x0, 0x0, 0x0, 0x03, 0x0, 0x0, 0x0, 0x05, 0x0, 0x0, 0x0, 0x14, 0x0, 0x0, 0x0, 0x1D, 0x0, 0x0, 0x0, 0x05, 0x0, 0x0, 0x0, 0x08, 0x0, 0x0, 0x0};
//uintptr_t healthAddy = AOBScanRegion(0x10000000000,0x40000000000,healthAOB);
//will scan from 0x10000000000 to 0x40000000000 for the array of bytes/unsigned int vector and return the address that matches it
uintptr_t AOBScanRegion(uintptr_t startAddy, uintptr_t finishAddy, std::vector<unsigned int> aob)
{
	uintptr_t addr = 0;

	return addr;
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