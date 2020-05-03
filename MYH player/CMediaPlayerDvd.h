// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装器类

#import "C:\\Windows\\System32\\msdxm.tlb" no_namespace
// CMediaPlayerDvd 包装器类

class CMediaPlayerDvd : public COleDispatchDriver
{
public:
	CMediaPlayerDvd() {} // 调用 COleDispatchDriver 默认构造函数
	CMediaPlayerDvd(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CMediaPlayerDvd(const CMediaPlayerDvd& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 特性
public:

	// 操作
public:


	// IMediaPlayerDvd 方法
public:
	void ButtonSelectAndActivate(unsigned long uiButton)
	{
		static BYTE parms[] = VTS_UI4;
		InvokeHelper(0x5f6, DISPATCH_METHOD, VT_EMPTY, NULL, parms, uiButton);
	}
	void UpperButtonSelect()
	{
		InvokeHelper(0x5f1, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void LowerButtonSelect()
	{
		InvokeHelper(0x5f2, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void LeftButtonSelect()
	{
		InvokeHelper(0x5f3, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void RightButtonSelect()
	{
		InvokeHelper(0x5f4, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void ButtonActivate()
	{
		InvokeHelper(0x5f5, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void ForwardScan(double dwSpeed)
	{
		static BYTE parms[] = VTS_R8;
		InvokeHelper(0x5ed, DISPATCH_METHOD, VT_EMPTY, NULL, parms, dwSpeed);
	}
	void BackwardScan(double dwSpeed)
	{
		static BYTE parms[] = VTS_R8;
		InvokeHelper(0x5ee, DISPATCH_METHOD, VT_EMPTY, NULL, parms, dwSpeed);
	}
	void PrevPGSearch()
	{
		InvokeHelper(0x5ea, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void TopPGSearch()
	{
		InvokeHelper(0x5eb, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void NextPGSearch()
	{
		InvokeHelper(0x5ec, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void TitlePlay(unsigned long uiTitle)
	{
		static BYTE parms[] = VTS_UI4;
		InvokeHelper(0x5e3, DISPATCH_METHOD, VT_EMPTY, NULL, parms, uiTitle);
	}
	void ChapterPlay(unsigned long uiTitle, unsigned long uiChapter)
	{
		static BYTE parms[] = VTS_UI4 VTS_UI4;
		InvokeHelper(0x5e4, DISPATCH_METHOD, VT_EMPTY, NULL, parms, uiTitle, uiChapter);
	}
	void ChapterSearch(unsigned long Chapter)
	{
		static BYTE parms[] = VTS_UI4;
		InvokeHelper(0x5e9, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Chapter);
	}
	void MenuCall(long MenuID)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x5ef, DISPATCH_METHOD, VT_EMPTY, NULL, parms, MenuID);
	}
	void ResumeFromMenu()
	{
		InvokeHelper(0x5f0, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void TimePlay(unsigned long uiTitle, LPCTSTR bstrTime)
	{
		static BYTE parms[] = VTS_UI4 VTS_BSTR;
		InvokeHelper(0x5e5, DISPATCH_METHOD, VT_EMPTY, NULL, parms, uiTitle, bstrTime);
	}
	void TimeSearch(LPCTSTR bstrTime)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x5e8, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bstrTime);
	}
	void ChapterPlayAutoStop(unsigned long ulTitle, unsigned long ulChapter, unsigned long ulChaptersToPlay)
	{
		static BYTE parms[] = VTS_UI4 VTS_UI4 VTS_UI4;
		InvokeHelper(0x605, DISPATCH_METHOD, VT_EMPTY, NULL, parms, ulTitle, ulChapter, ulChaptersToPlay);
	}
	void StillOff()
	{
		InvokeHelper(0x5f7, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void GoUp()
	{
		InvokeHelper(0x5e7, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	CString get_TotalTitleTime()
	{
		CString result;
		InvokeHelper(0x62e, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	unsigned long GetNumberOfChapters(unsigned long ulTitle)
	{
		unsigned long result;
		static BYTE parms[] = VTS_UI4;
		InvokeHelper(0x60e, DISPATCH_METHOD, VT_UI4, (void*)&result, parms, ulTitle);
		return result;
	}
	CString GetAudioLanguage(unsigned long ulStream)
	{
		CString result;
		static BYTE parms[] = VTS_UI4;
		InvokeHelper(0x60f, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, ulStream);
		return result;
	}
	CString GetSubpictureLanguage(unsigned long ulStream)
	{
		CString result;
		static BYTE parms[] = VTS_UI4;
		InvokeHelper(0x613, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, ulStream);
		return result;
	}
	VARIANT GetAllGPRMs()
	{
		VARIANT result;
		InvokeHelper(0x618, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	VARIANT GetAllSPRMs()
	{
		VARIANT result;
		InvokeHelper(0x617, DISPATCH_METHOD, VT_VARIANT, (void*)&result, NULL);
		return result;
	}
	BOOL UOPValid(unsigned long ulUOP)
	{
		BOOL result;
		static BYTE parms[] = VTS_UI4;
		InvokeHelper(0x62b, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, ulUOP);
		return result;
	}
	unsigned long get_ButtonsAvailable()
	{
		unsigned long result;
		InvokeHelper(0x623, DISPATCH_PROPERTYGET, VT_UI4, (void*)&result, NULL);
		return result;
	}
	unsigned long get_CurrentButton()
	{
		unsigned long result;
		InvokeHelper(0x622, DISPATCH_PROPERTYGET, VT_UI4, (void*)&result, NULL);
		return result;
	}
	unsigned long get_AudioStreamsAvailable()
	{
		unsigned long result;
		InvokeHelper(0x607, DISPATCH_PROPERTYGET, VT_UI4, (void*)&result, NULL);
		return result;
	}
	unsigned long get_CurrentAudioStream()
	{
		unsigned long result;
		InvokeHelper(0x608, DISPATCH_PROPERTYGET, VT_UI4, (void*)&result, NULL);
		return result;
	}
	void put_CurrentAudioStream(unsigned long newValue)
	{
		static BYTE parms[] = VTS_UI4;
		InvokeHelper(0x608, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	unsigned long get_CurrentSubpictureStream()
	{
		unsigned long result;
		InvokeHelper(0x609, DISPATCH_PROPERTYGET, VT_UI4, (void*)&result, NULL);
		return result;
	}
	void put_CurrentSubpictureStream(unsigned long newValue)
	{
		static BYTE parms[] = VTS_UI4;
		InvokeHelper(0x609, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	unsigned long get_SubpictureStreamsAvailable()
	{
		unsigned long result;
		InvokeHelper(0x60a, DISPATCH_PROPERTYGET, VT_UI4, (void*)&result, NULL);
		return result;
	}
	BOOL get_SubpictureOn()
	{
		BOOL result;
		InvokeHelper(0x60b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_SubpictureOn(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x60b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	unsigned long get_AnglesAvailable()
	{
		unsigned long result;
		InvokeHelper(0x60d, DISPATCH_PROPERTYGET, VT_UI4, (void*)&result, NULL);
		return result;
	}
	unsigned long get_CurrentAngle()
	{
		unsigned long result;
		InvokeHelper(0x60c, DISPATCH_PROPERTYGET, VT_UI4, (void*)&result, NULL);
		return result;
	}
	void put_CurrentAngle(unsigned long newValue)
	{
		static BYTE parms[] = VTS_UI4;
		InvokeHelper(0x60c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	unsigned long get_CurrentTitle()
	{
		unsigned long result;
		InvokeHelper(0x61f, DISPATCH_PROPERTYGET, VT_UI4, (void*)&result, NULL);
		return result;
	}
	unsigned long get_CurrentChapter()
	{
		unsigned long result;
		InvokeHelper(0x620, DISPATCH_PROPERTYGET, VT_UI4, (void*)&result, NULL);
		return result;
	}
	CString get_CurrentTime()
	{
		CString result;
		InvokeHelper(0x621, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void put_Root(LPCTSTR newValue)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x602, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_Root()
	{
		CString result;
		InvokeHelper(0x602, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	unsigned long get_FramesPerSecond()
	{
		unsigned long result;
		InvokeHelper(0x625, DISPATCH_PROPERTYGET, VT_UI4, (void*)&result, NULL);
		return result;
	}
	unsigned long get_CurrentDomain()
	{
		unsigned long result;
		InvokeHelper(0x626, DISPATCH_PROPERTYGET, VT_UI4, (void*)&result, NULL);
		return result;
	}
	unsigned long get_TitlesAvailable()
	{
		unsigned long result;
		InvokeHelper(0x627, DISPATCH_PROPERTYGET, VT_UI4, (void*)&result, NULL);
		return result;
	}
	unsigned long get_VolumesAvailable()
	{
		unsigned long result;
		InvokeHelper(0x628, DISPATCH_PROPERTYGET, VT_UI4, (void*)&result, NULL);
		return result;
	}
	unsigned long get_CurrentVolume()
	{
		unsigned long result;
		InvokeHelper(0x629, DISPATCH_PROPERTYGET, VT_UI4, (void*)&result, NULL);
		return result;
	}
	unsigned long get_CurrentDiscSide()
	{
		unsigned long result;
		InvokeHelper(0x62a, DISPATCH_PROPERTYGET, VT_UI4, (void*)&result, NULL);
		return result;
	}
	BOOL get_CCActive()
	{
		BOOL result;
		InvokeHelper(0x62d, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_CCActive(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x62d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	unsigned long get_CurrentCCService()
	{
		unsigned long result;
		InvokeHelper(0x62c, DISPATCH_PROPERTYGET, VT_UI4, (void*)&result, NULL);
		return result;
	}
	void put_CurrentCCService(unsigned long newValue)
	{
		static BYTE parms[] = VTS_UI4;
		InvokeHelper(0x62c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_UniqueID()
	{
		CString result;
		InvokeHelper(0x630, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	unsigned long get_ColorKey()
	{
		unsigned long result;
		InvokeHelper(0x631, DISPATCH_PROPERTYGET, VT_UI4, (void*)&result, NULL);
		return result;
	}
	void put_ColorKey(unsigned long newValue)
	{
		static BYTE parms[] = VTS_UI4;
		InvokeHelper(0x631, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}

	// IMediaPlayerDvd 属性
public:

};
