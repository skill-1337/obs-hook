DX11PresentFn* pOBS_Present = (DX11PresentFn*)RVA(FindPattern(XorString("FF 15 ? ? ? ? 48 8B 16 48 8B CE FF 52 10 48"), XorString(L"graphics-hook64.dll")), 6);
oPresent = *pOBS_Present; *pOBS_Present = Present;*/
DX11PresentFn* pOBS_Present = (DX11PresentFn*)(GetModuleBase(XorString(L"IGO64")) + 0x163CE8); 
oPresent = *pOBS_Present; *pOBS_Present = Present;