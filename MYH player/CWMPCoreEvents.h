// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装器类

#import "C:\\Windows\\System32\\wmp.dll" no_namespace
// CWMPCoreEvents 包装器类

class CWMPCoreEvents : public COleDispatchDriver
{
public:
	CWMPCoreEvents() {} // 调用 COleDispatchDriver 默认构造函数
	CWMPCoreEvents(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CWMPCoreEvents(const CWMPCoreEvents& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 特性
public:

	// 操作
public:


	// _WMPCoreEvents 方法
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

	// _WMPCoreEvents 属性
public:

};
