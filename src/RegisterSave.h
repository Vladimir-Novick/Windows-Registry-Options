// RegisterSave.h: interface for the CRegisterSave class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_REGISTERSAVE_H__52B3138F_E213_11D3_9F4B_005004816FFF__INCLUDED_)
#define AFX_REGISTERSAVE_H__52B3138F_E213_11D3_9F4B_005004816FFF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CRegisterSave  
{

public:
	enum Storage{WRITE,READ,ERASE};
	void UserKeyStore(char *key,char *value,unsigned long LenRead,Storage StoreFlag);
	void AutoRun(BOOL flag);
	CRegisterSave();
	virtual ~CRegisterSave();
    void ActiveServer(char *psz_ServerName,Storage p);
private:
	char UserKeyPatch[255];
};

#endif // !defined(AFX_REGISTERSAVE_H__52B3138F_E213_11D3_9F4B_005004816FFF__INCLUDED_)
