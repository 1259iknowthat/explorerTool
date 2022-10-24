/*
* WinAPI����
*
* Author: Maple
* date: 2021-7-13 Create
* Copyright winmoes.com
*/

#pragma once
#include <string>
#include <comdef.h>
#include <gdiplus.h>
#include <vector>

/*�������
* Debug output
*/
extern void Log(std::wstring log);
extern void Log(int log);

/*��ȡ��ǰdll����Ŀ¼
* Get current directory
*/
extern std::wstring GetCurDllDir();

/*�ж��ļ��Ƿ����
* file exist
*/
extern bool FileIsExist(std::wstring FilePath);

/*��ȡ���ڱ���*/
extern std::wstring GetWindowTitle(HWND hWnd);

/*��ȡ��������*/
extern std::wstring GetWindowClassName(HWND hWnd);

/*��ȡ�����ļ�����
* Read config file
*/
extern std::wstring GetIniString(std::wstring FilePath, std::wstring AppName, std::wstring KeyName);

/*ö��ĳĿ¼��ָ���ļ�*/
extern void EnumFiles(std::wstring path, std::wstring append, std::vector<std::wstring>& fileList);

/*ȡ�ļ���*/
extern std::wstring GetFileName(std::wstring path);

/*GDI Bitmap*/
class BitmapGDI
{
public:
	BitmapGDI(std::wstring path);
	~BitmapGDI();

	HDC pMem = 0;
	HBITMAP pBmp = 0;
	SIZE Size;
	Gdiplus::Bitmap* src = 0;
};