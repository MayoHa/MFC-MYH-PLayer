// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装器类

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPOCXEvents 包装器类

class CWMPOCXEvents : public COleDispatchDriver
{
public:
	CWMPOCXEvents() {} // 调用 COleDispatchDriver 默认构造函数
	CWMPOCXEvents(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPOCXEvents(const CWMPOCXEvents& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 特性
public:

	// 操作
public:


	// _WMPOCXEvents 方法
public:
	void OpenStateChange(long NewState)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x1389, DISPATCH_METHOD, VT_EMPTY, NULL, parms, NewState);
	}
	void PlayStateChange(long NewState)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x13ed, DISPATCH_METHOD, VT_EMPTY, NULL, parms, NewState);
	}
	void AudioLanguageChange(long LangID)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x13ee, DISPATCH_METHOD, VT_EMPTY, NULL, parms, LangID);
	}
	void StatusChange()
	{
		InvokeHelper(0x138a, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void ScriptCommand(LPCTSTR scType, LPCTSTR Param)
	{
		static BYTE parms[] = VTS_BSTR VTS_BSTR;
		InvokeHelper(0x14b5, DISPATCH_METHOD, VT_EMPTY, NULL, parms, scType, Param);
	}
	void NewStream()
	{
		InvokeHelper(0x151b, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void Disconnect(long Result)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x1519, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Result);
	}
	void Buffering(BOOL Start)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0x151a, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Start);
	}
	void Error()
	{
		InvokeHelper(0x157d, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void Warning(long WarningType, long Param, LPCTSTR Description)
	{
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_BSTR;
		InvokeHelper(0x15e1, DISPATCH_METHOD, VT_EMPTY, NULL, parms, WarningType, Param, Description);
	}
	void EndOfStream(long Result)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x1451, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Result);
	}
	void PositionChange(double oldPosition, double newPosition)
	{
		static BYTE parms[] = VTS_R8 VTS_R8;
		InvokeHelper(0x1452, DISPATCH_METHOD, VT_EMPTY, NULL, parms, oldPosition, newPosition);
	}
	void MarkerHit(long MarkerNum)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x1453, DISPATCH_METHOD, VT_EMPTY, NULL, parms, MarkerNum);
	}
	void DurationUnitChange(long NewDurationUnit)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x1454, DISPATCH_METHOD, VT_EMPTY, NULL, parms, NewDurationUnit);
	}
	void CdromMediaChange(long CdromNum)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x1645, DISPATCH_METHOD, VT_EMPTY, NULL, parms, CdromNum);
	}
	void PlaylistChange(LPDISPATCH Playlist, long change)
	{
		static BYTE parms[] = VTS_DISPATCH VTS_I4;
		InvokeHelper(0x16a9, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Playlist, change);
	}
	void CurrentPlaylistChange(long change)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x16ac, DISPATCH_METHOD, VT_EMPTY, NULL, parms, change);
	}
	void CurrentPlaylistItemAvailable(LPCTSTR bstrItemName)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x16ad, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bstrItemName);
	}
	void MediaChange(LPDISPATCH Item)
	{
		static BYTE parms[] = VTS_DISPATCH;
		InvokeHelper(0x16aa, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Item);
	}
	void CurrentMediaItemAvailable(LPCTSTR bstrItemName)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x16ab, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bstrItemName);
	}
	void CurrentItemChange(LPDISPATCH pdispMedia)
	{
		static BYTE parms[] = VTS_DISPATCH;
		InvokeHelper(0x16ae, DISPATCH_METHOD, VT_EMPTY, NULL, parms, pdispMedia);
	}
	void MediaCollectionChange()
	{
		InvokeHelper(0x16af, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void MediaCollectionAttributeStringAdded(LPCTSTR bstrAttribName, LPCTSTR bstrAttribVal)
	{
		static BYTE parms[] = VTS_BSTR VTS_BSTR;
		InvokeHelper(0x16b0, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bstrAttribName, bstrAttribVal);
	}
	void MediaCollectionAttributeStringRemoved(LPCTSTR bstrAttribName, LPCTSTR bstrAttribVal)
	{
		static BYTE parms[] = VTS_BSTR VTS_BSTR;
		InvokeHelper(0x16b1, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bstrAttribName, bstrAttribVal);
	}
	void MediaCollectionAttributeStringChanged(LPCTSTR bstrAttribName, LPCTSTR bstrOldAttribVal, LPCTSTR bstrNewAttribVal)
	{
		static BYTE parms[] = VTS_BSTR VTS_BSTR VTS_BSTR;
		InvokeHelper(0x16bc, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bstrAttribName, bstrOldAttribVal, bstrNewAttribVal);
	}
	void PlaylistCollectionChange()
	{
		InvokeHelper(0x16b2, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void PlaylistCollectionPlaylistAdded(LPCTSTR bstrPlaylistName)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x16b3, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bstrPlaylistName);
	}
	void PlaylistCollectionPlaylistRemoved(LPCTSTR bstrPlaylistName)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x16b4, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bstrPlaylistName);
	}
	void PlaylistCollectionPlaylistSetAsDeleted(LPCTSTR bstrPlaylistName, BOOL varfIsDeleted)
	{
		static BYTE parms[] = VTS_BSTR VTS_BOOL;
		InvokeHelper(0x16ba, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bstrPlaylistName, varfIsDeleted);
	}
	void ModeChange(LPCTSTR ModeName, BOOL NewValue)
	{
		static BYTE parms[] = VTS_BSTR VTS_BOOL;
		InvokeHelper(0x16bb, DISPATCH_METHOD, VT_EMPTY, NULL, parms, ModeName, NewValue);
	}
	void MediaError(LPDISPATCH pMediaObject)
	{
		static BYTE parms[] = VTS_DISPATCH;
		InvokeHelper(0x16bd, DISPATCH_METHOD, VT_EMPTY, NULL, parms, pMediaObject);
	}
	void OpenPlaylistSwitch(LPDISPATCH pItem)
	{
		static BYTE parms[] = VTS_DISPATCH;
		InvokeHelper(0x16bf, DISPATCH_METHOD, VT_EMPTY, NULL, parms, pItem);
	}
	void DomainChange(LPCTSTR strDomain)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x16be, DISPATCH_METHOD, VT_EMPTY, NULL, parms, strDomain);
	}
	void SwitchedToPlayerApplication()
	{
		InvokeHelper(0x1965, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void SwitchedToControl()
	{
		InvokeHelper(0x1966, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void PlayerDockedStateChange()
	{
		InvokeHelper(0x1967, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void PlayerReconnect()
	{
		InvokeHelper(0x1968, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void Click(short nButton, short nShiftState, long fX, long fY)
	{
		static BYTE parms[] = VTS_I2 VTS_I2 VTS_I4 VTS_I4;
		InvokeHelper(0x1969, DISPATCH_METHOD, VT_EMPTY, NULL, parms, nButton, nShiftState, fX, fY);
	}
	void DoubleClick(short nButton, short nShiftState, long fX, long fY)
	{
		static BYTE parms[] = VTS_I2 VTS_I2 VTS_I4 VTS_I4;
		InvokeHelper(0x196a, DISPATCH_METHOD, VT_EMPTY, NULL, parms, nButton, nShiftState, fX, fY);
	}
	void KeyDown(short nKeyCode, short nShiftState)
	{
		static BYTE parms[] = VTS_I2 VTS_I2;
		InvokeHelper(0x196b, DISPATCH_METHOD, VT_EMPTY, NULL, parms, nKeyCode, nShiftState);
	}
	void KeyPress(short nKeyAscii)
	{
		static BYTE parms[] = VTS_I2;
		InvokeHelper(0x196c, DISPATCH_METHOD, VT_EMPTY, NULL, parms, nKeyAscii);
	}
	void KeyUp(short nKeyCode, short nShiftState)
	{
		static BYTE parms[] = VTS_I2 VTS_I2;
		InvokeHelper(0x196d, DISPATCH_METHOD, VT_EMPTY, NULL, parms, nKeyCode, nShiftState);
	}
	void MouseDown(short nButton, short nShiftState, long fX, long fY)
	{
		static BYTE parms[] = VTS_I2 VTS_I2 VTS_I4 VTS_I4;
		InvokeHelper(0x196e, DISPATCH_METHOD, VT_EMPTY, NULL, parms, nButton, nShiftState, fX, fY);
	}
	void MouseMove(short nButton, short nShiftState, long fX, long fY)
	{
		static BYTE parms[] = VTS_I2 VTS_I2 VTS_I4 VTS_I4;
		InvokeHelper(0x196f, DISPATCH_METHOD, VT_EMPTY, NULL, parms, nButton, nShiftState, fX, fY);
	}
	void MouseUp(short nButton, short nShiftState, long fX, long fY)
	{
		static BYTE parms[] = VTS_I2 VTS_I2 VTS_I4 VTS_I4;
		InvokeHelper(0x1970, DISPATCH_METHOD, VT_EMPTY, NULL, parms, nButton, nShiftState, fX, fY);
	}
	void DeviceConnect(LPUNKNOWN pDevice)
	{
		static BYTE parms[] = VTS_UNKNOWN;
		InvokeHelper(0x1971, DISPATCH_METHOD, VT_EMPTY, NULL, parms, pDevice);
	}
	void DeviceDisconnect(LPUNKNOWN pDevice)
	{
		static BYTE parms[] = VTS_UNKNOWN;
		InvokeHelper(0x1972, DISPATCH_METHOD, VT_EMPTY, NULL, parms, pDevice);
	}
	void DeviceStatusChange(LPUNKNOWN pDevice, long NewStatus)
	{
		static BYTE parms[] = VTS_UNKNOWN VTS_I4;
		InvokeHelper(0x1973, DISPATCH_METHOD, VT_EMPTY, NULL, parms, pDevice, NewStatus);
	}
	void DeviceSyncStateChange(LPUNKNOWN pDevice, long NewState)
	{
		static BYTE parms[] = VTS_UNKNOWN VTS_I4;
		InvokeHelper(0x1974, DISPATCH_METHOD, VT_EMPTY, NULL, parms, pDevice, NewState);
	}
	void DeviceSyncError(LPUNKNOWN pDevice, LPDISPATCH pMedia)
	{
		static BYTE parms[] = VTS_UNKNOWN VTS_DISPATCH;
		InvokeHelper(0x1975, DISPATCH_METHOD, VT_EMPTY, NULL, parms, pDevice, pMedia);
	}
	void CreatePartnershipComplete(LPUNKNOWN pDevice, HRESULT hrResult)
	{
		static BYTE parms[] = VTS_UNKNOWN VTS_I4;
		InvokeHelper(0x1976, DISPATCH_METHOD, VT_EMPTY, NULL, parms, pDevice, hrResult);
	}
	void DeviceEstimation(LPUNKNOWN pDevice, HRESULT hrResult, __int64 qwEstimatedUsedSpace, __int64 qwEstimatedSpace)
	{
		static BYTE parms[] = VTS_UNKNOWN VTS_I4 VTS_I8 VTS_I8;
		InvokeHelper(0x197f, DISPATCH_METHOD, VT_EMPTY, NULL, parms, pDevice, hrResult, qwEstimatedUsedSpace, qwEstimatedSpace);
	}
	void CdromRipStateChange(LPUNKNOWN pCdromRip, long wmprs)
	{
		static BYTE parms[] = VTS_UNKNOWN VTS_I4;
		InvokeHelper(0x1977, DISPATCH_METHOD, VT_EMPTY, NULL, parms, pCdromRip, wmprs);
	}
	void CdromRipMediaError(LPUNKNOWN pCdromRip, LPDISPATCH pMedia)
	{
		static BYTE parms[] = VTS_UNKNOWN VTS_DISPATCH;
		InvokeHelper(0x1978, DISPATCH_METHOD, VT_EMPTY, NULL, parms, pCdromRip, pMedia);
	}
	void CdromBurnStateChange(LPUNKNOWN pCdromBurn, long wmpbs)
	{
		static BYTE parms[] = VTS_UNKNOWN VTS_I4;
		InvokeHelper(0x1979, DISPATCH_METHOD, VT_EMPTY, NULL, parms, pCdromBurn, wmpbs);
	}
	void CdromBurnMediaError(LPUNKNOWN pCdromBurn, LPDISPATCH pMedia)
	{
		static BYTE parms[] = VTS_UNKNOWN VTS_DISPATCH;
		InvokeHelper(0x197a, DISPATCH_METHOD, VT_EMPTY, NULL, parms, pCdromBurn, pMedia);
	}
	void CdromBurnError(LPUNKNOWN pCdromBurn, HRESULT hrError)
	{
		static BYTE parms[] = VTS_UNKNOWN VTS_I4;
		InvokeHelper(0x197b, DISPATCH_METHOD, VT_EMPTY, NULL, parms, pCdromBurn, hrError);
	}
	void LibraryConnect(LPUNKNOWN pLibrary)
	{
		static BYTE parms[] = VTS_UNKNOWN;
		InvokeHelper(0x197c, DISPATCH_METHOD, VT_EMPTY, NULL, parms, pLibrary);
	}
	void LibraryDisconnect(LPUNKNOWN pLibrary)
	{
		static BYTE parms[] = VTS_UNKNOWN;
		InvokeHelper(0x197d, DISPATCH_METHOD, VT_EMPTY, NULL, parms, pLibrary);
	}
	void FolderScanStateChange(long wmpfss)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x197e, DISPATCH_METHOD, VT_EMPTY, NULL, parms, wmpfss);
	}
	void StringCollectionChange(LPDISPATCH pdispStringCollection, long change, long lCollectionIndex)
	{
		static BYTE parms[] = VTS_DISPATCH VTS_I4 VTS_I4;
		InvokeHelper(0x16c0, DISPATCH_METHOD, VT_EMPTY, NULL, parms, pdispStringCollection, change, lCollectionIndex);
	}
	void MediaCollectionMediaAdded(LPDISPATCH pdispMedia)
	{
		static BYTE parms[] = VTS_DISPATCH;
		InvokeHelper(0x16c1, DISPATCH_METHOD, VT_EMPTY, NULL, parms, pdispMedia);
	}
	void MediaCollectionMediaRemoved(LPDISPATCH pdispMedia)
	{
		static BYTE parms[] = VTS_DISPATCH;
		InvokeHelper(0x16c2, DISPATCH_METHOD, VT_EMPTY, NULL, parms, pdispMedia);
	}

	// _WMPOCXEvents 属性
public:

};
