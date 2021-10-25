#pragma once
#include "Includes.h"

HWND f1hwnd;
HWND f2hwnd;
HWND f3hwnd;
HWND windowtosendkeypressesto;
TCHAR WindowTitle[MAX_PATH];
WCHAR WindowClass[MAX_PATH];

#pragma region VK_Keys
//0-9
WORD VK_0 = 0x30;
WORD VK_1 = 0x31;
WORD VK_2 = 0x32;
WORD VK_3 = 0x33;
WORD VK_4 = 0x34;
WORD VK_5 = 0x35;
WORD VK_6 = 0x36;
WORD VK_7 = 0x37;
WORD VK_8 = 0x38;
WORD VK_9 = 0x39;
//A-Z
WORD VK_A = 0x41;
WORD VK_B = 0x42;
WORD VK_C = 0x43;
WORD VK_D = 0x44;
WORD VK_E = 0x45;
WORD VK_F = 0x46;
WORD VK_G = 0x47;
WORD VK_H = 0x48;
WORD VK_I = 0x49;
WORD VK_J = 0x4A;
WORD VK_K = 0x4B;
WORD VK_L = 0x4C;
WORD VK_M = 0x4D;
WORD VK_N = 0x4E;
WORD VK_O = 0x4F;
WORD VK_P = 0x50;
WORD VK_Q = 0x51;
WORD VK_R = 0x52;
WORD VK_S = 0x53;
WORD VK_T = 0x54;
WORD VK_U = 0x55;
WORD VK_V = 0x56;
WORD VK_W = 0x57;
WORD VK_X = 0x58;
WORD VK_Y = 0x59;
WORD VK_Z = 0x5A;
#pragma endregion VK_Keys

#pragma region SC_Keys
//0-9
WORD SC_0 = 0x0B;
WORD SC_1 = 0x02;
WORD SC_2 = 0x03;
WORD SC_3 = 0x04;
WORD SC_4 = 0x05;
WORD SC_5 = 0x06;
WORD SC_6 = 0x07;
WORD SC_7 = 0x08;
WORD SC_8 = 0x09;
WORD SC_9 = 0x0A;
//A-Z
WORD SC_A = 0x1E;
WORD SC_B = 0x30;
WORD SC_C = 0x2E;
WORD SC_D = 0x20;
WORD SC_E = 0x12;
WORD SC_F = 0x21;
WORD SC_G = 0x22;
WORD SC_H = 0x23;
WORD SC_I = 0x17;
WORD SC_J = 0x24;
WORD SC_K = 0x25;
WORD SC_L = 0x26;
WORD SC_M = 0x32;
WORD SC_N = 0x31;
WORD SC_O = 0x18;
WORD SC_P = 0x19;
WORD SC_Q = 0x10;
WORD SC_R = 0x13;
WORD SC_S = 0x1F;
WORD SC_T = 0x14;
WORD SC_U = 0x16;
WORD SC_V = 0x2F;
WORD SC_W = 0x11;
WORD SC_X = 0x2D;
WORD SC_Y = 0x15;
WORD SC_Z = 0x2C;
#pragma endregion SC_Keys