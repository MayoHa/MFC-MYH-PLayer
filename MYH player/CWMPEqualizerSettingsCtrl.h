// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装器类

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPEqualizerSettingsCtrl 包装器类

class CWMPEqualizerSettingsCtrl : public COleDispatchDriver
{
public:
	CWMPEqualizerSettingsCtrl() {} // 调用 COleDispatchDriver 默认构造函数
	CWMPEqualizerSettingsCtrl(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPEqualizerSettingsCtrl(const CWMPEqualizerSettingsCtrl& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 特性
public:

	// 操作
public:


	// IWMPEqualizerSettingsCtrl 方法
public:
	BOOL get_bypass()
	{
		BOOL result;
		InvokeHelper(0x16a8, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_bypass(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x16a8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	float get_gainLevel1()
	{
		float result;
		InvokeHelper(0x16ac, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
		return result;
	}
	void put_gainLevel1(float newValue)
	{
		static BYTE parms[] = VTS_R4;
		InvokeHelper(0x16ac, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	float get_gainLevel2()
	{
		float result;
		InvokeHelper(0x16ad, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
		return result;
	}
	void put_gainLevel2(float newValue)
	{
		static BYTE parms[] = VTS_R4;
		InvokeHelper(0x16ad, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	float get_gainLevel3()
	{
		float result;
		InvokeHelper(0x16ae, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
		return result;
	}
	void put_gainLevel3(float newValue)
	{
		static BYTE parms[] = VTS_R4;
		InvokeHelper(0x16ae, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	float get_gainLevel4()
	{
		float result;
		InvokeHelper(0x16af, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
		return result;
	}
	void put_gainLevel4(float newValue)
	{
		static BYTE parms[] = VTS_R4;
		InvokeHelper(0x16af, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	float get_gainLevel5()
	{
		float result;
		InvokeHelper(0x16b0, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
		return result;
	}
	void put_gainLevel5(float newValue)
	{
		static BYTE parms[] = VTS_R4;
		InvokeHelper(0x16b0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	float get_gainLevel6()
	{
		float result;
		InvokeHelper(0x16b1, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
		return result;
	}
	void put_gainLevel6(float newValue)
	{
		static BYTE parms[] = VTS_R4;
		InvokeHelper(0x16b1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	float get_gainLevel7()
	{
		float result;
		InvokeHelper(0x16b2, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
		return result;
	}
	void put_gainLevel7(float newValue)
	{
		static BYTE parms[] = VTS_R4;
		InvokeHelper(0x16b2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	float get_gainLevel8()
	{
		float result;
		InvokeHelper(0x16b3, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
		return result;
	}
	void put_gainLevel8(float newValue)
	{
		static BYTE parms[] = VTS_R4;
		InvokeHelper(0x16b3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	float get_gainLevel9()
	{
		float result;
		InvokeHelper(0x16b4, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
		return result;
	}
	void put_gainLevel9(float newValue)
	{
		static BYTE parms[] = VTS_R4;
		InvokeHelper(0x16b4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	float get_gainLevel10()
	{
		float result;
		InvokeHelper(0x16b5, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
		return result;
	}
	void put_gainLevel10(float newValue)
	{
		static BYTE parms[] = VTS_R4;
		InvokeHelper(0x16b5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	float get_gainLevels(long iIndex)
	{
		float result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x16b7, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, parms, iIndex);
		return result;
	}
	void put_gainLevels(long iIndex, float newValue)
	{
		static BYTE parms[] = VTS_I4 VTS_R4;
		InvokeHelper(0x16b7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, iIndex, newValue);
	}
	void reset()
	{
		InvokeHelper(0x16b6, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	long get_bands()
	{
		long result;
		InvokeHelper(0x16a9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void nextPreset()
	{
		InvokeHelper(0x16b8, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void previousPreset()
	{
		InvokeHelper(0x16b9, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	long get_currentPreset()
	{
		long result;
		InvokeHelper(0x16ba, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_currentPreset(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x16ba, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_currentPresetTitle()
	{
		CString result;
		InvokeHelper(0x16bb, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	long get_presetCount()
	{
		long result;
		InvokeHelper(0x16bc, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	BOOL get_enhancedAudio()
	{
		BOOL result;
		InvokeHelper(0x16bd, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_enhancedAudio(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x16bd, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_speakerSize()
	{
		long result;
		InvokeHelper(0x16be, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_speakerSize(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x16be, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_currentSpeakerName()
	{
		CString result;
		InvokeHelper(0x16bf, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	long get_truBassLevel()
	{
		long result;
		InvokeHelper(0x16c0, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_truBassLevel(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x16c0, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_wowLevel()
	{
		long result;
		InvokeHelper(0x16c1, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_wowLevel(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x16c1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	float get_splineTension()
	{
		float result;
		InvokeHelper(0x16c3, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
		return result;
	}
	void put_splineTension(float newValue)
	{
		static BYTE parms[] = VTS_R4;
		InvokeHelper(0x16c3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	BOOL get_enableSplineTension()
	{
		BOOL result;
		InvokeHelper(0x16c2, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_enableSplineTension(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x16c2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	CString get_presetTitle(long iIndex)
	{
		CString result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x16c4, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, parms, iIndex);
		return result;
	}
	BOOL get_normalization()
	{
		BOOL result;
		InvokeHelper(0x16c5, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_normalization(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x16c5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	float get_normalizationAverage()
	{
		float result;
		InvokeHelper(0x16c6, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
		return result;
	}
	float get_normalizationPeak()
	{
		float result;
		InvokeHelper(0x16c7, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
		return result;
	}
	BOOL get_crossFade()
	{
		BOOL result;
		InvokeHelper(0x16c8, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void put_crossFade(BOOL newValue)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x16c8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}
	long get_crossFadeWindow()
	{
		long result;
		InvokeHelper(0x16c9, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void put_crossFadeWindow(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x16c9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms, newValue);
	}

	// IWMPEqualizerSettingsCtrl 属性
public:

};
