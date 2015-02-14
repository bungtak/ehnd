// ���� ifdef ������ DLL���� ���������ϴ� �۾��� ���� �� �ִ� ��ũ�θ� ����� 
// ǥ�� ����Դϴ�. �� DLL�� ��� �ִ� ������ ��� �����ٿ� ���ǵ� _EXPORTS ��ȣ��
// �����ϵǸ�, �ٸ� ������Ʈ������ �� ��ȣ�� ������ �� �����ϴ�.
// �̷��� �ϸ� �ҽ� ���Ͽ� �� ������ ��� �ִ� �ٸ� ��� ������Ʈ������ 
// EHND_API �Լ��� DLL���� �������� ������ ����, �� DLL��
// �� DLL�� �ش� ��ũ�η� ���ǵ� ��ȣ�� ���������� ������ ���ϴ�.

#pragma once
#define EHND_EXPORT __declspec(dllexport)

extern "C"
{
	EHND_EXPORT void J2K_Initialize(void);
	EHND_EXPORT void __stdcall J2K_InitializeEx(int data0, LPSTR key);
	EHND_EXPORT void J2K_FreeMem(void);
	EHND_EXPORT void J2K_GetPriorDict(void);
	EHND_EXPORT void J2K_GetProperty(void);
	EHND_EXPORT void J2K_ReloadUserDict(void);
	EHND_EXPORT void J2K_SetDelJPN(void);
	EHND_EXPORT void J2K_SetField(void);
	EHND_EXPORT void J2K_SetHnj2han(void);
	EHND_EXPORT void J2K_SetJWin(void);
	EHND_EXPORT void J2K_SetPriorDict(void);
	EHND_EXPORT void J2K_SetProperty(void);
	EHND_EXPORT void J2K_StopTranslation(void);
	EHND_EXPORT void J2K_Terminate(void);
	EHND_EXPORT void J2K_TranslateChat(void);
	EHND_EXPORT void J2K_TranslateFM(void);
	EHND_EXPORT void J2K_TranslateMM(void);
	EHND_EXPORT void J2K_TranslateMMEx(void);
	EHND_EXPORT void *__stdcall J2K_TranslateMMNT(int data0, LPSTR *szText);
	EHND_EXPORT void J2K_GetJ2KMainDir(void);
	EHND_EXPORT void *msvcrt_free(void *_Memory);
	EHND_EXPORT void *msvcrt_malloc(size_t _Size);
	EHND_EXPORT void *msvcrt_fopen(char *path, char *mode);
};

extern FARPROC apfnEzt[100];
extern FARPROC apfnMsv[100];
bool GetLoadPath(LPWSTR Path, int Size);

class Cehnd {
public:
	Cehnd(void);
	~Cehnd(void);
	bool pre(wstring &wsText);
	bool post(wstring &wsText);
	bool cmd(wstring &wsText);
};

extern int nehnd;