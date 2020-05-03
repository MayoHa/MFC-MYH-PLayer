// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装器类

#import "C:\\Windows\\System32\\msdxm.tlb" no_namespace
// CMediaPlayerEvents 包装器类

class CMediaPlayerEvents : public COleDispatchDriver
{
public:
	CMediaPlayerEvents() {} // 调用 COleDispatchDriver 默认构造函数
	CMediaPlayerEvents(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CMediaPlayerEvents(const CMediaPlayerEvents& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 特性
public:

	// 操作
public:


	// _MediaPlayerEvents 方法
public:
	void DVDNotify(long EventCode, long EventParam1, long EventParam2)
	{
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4;
		InvokeHelper(0x5e1, DISPATCH_METHOD, VT_EMPTY, NULL, parms, EventCode, EventParam1, EventParam2);
	}
	void EndOfStream(long Result)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xbba, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Result);
	}
	void KeyDown(short KeyCode, short ShiftState)
	{
		static BYTE parms[] = VTS_I2 VTS_I2;
		InvokeHelper(DISPID_KEYDOWN, DISPATCH_METHOD, VT_EMPTY, NULL, parms, KeyCode, ShiftState);
	}
	void KeyUp(short KeyCode, short ShiftState)
	{
		static BYTE parms[] = VTS_I2 VTS_I2;
		InvokeHelper(DISPID_KEYUP, DISPATCH_METHOD, VT_EMPTY, NULL, parms, KeyCode, ShiftState);
	}
	void KeyPress(short CharacterCode)
	{
		static BYTE parms[] = VTS_I2;
		InvokeHelper(DISPID_KEYPRESS, DISPATCH_METHOD, VT_EMPTY, NULL, parms, CharacterCode);
	}
	void MouseMove(short Button, short ShiftState, long x, long y)
	{
		static BYTE parms[] = VTS_I2 VTS_I2 VTS_I4 VTS_I4;
		InvokeHelper(DISPID_MOUSEMOVE, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Button, ShiftState, x, y);
	}
	void MouseDown(short Button, short ShiftState, long x, long y)
	{
		static BYTE parms[] = VTS_I2 VTS_I2 VTS_I4 VTS_I4;
		InvokeHelper(DISPID_MOUSEDOWN, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Button, ShiftState, x, y);
	}
	void MouseUp(short Button, short ShiftState, long x, long y)
	{
		static BYTE parms[] = VTS_I2 VTS_I2 VTS_I4 VTS_I4;
		InvokeHelper(DISPID_MOUSEUP, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Button, ShiftState, x, y);
	}
	void Click(short Button, short ShiftState, long x, long y)
	{
		static BYTE parms[] = VTS_I2 VTS_I2 VTS_I4 VTS_I4;
		InvokeHelper(DISPID_CLICK, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Button, ShiftState, x, y);
	}
	void DblClick(short Button, short ShiftState, long x, long y)
	{
		static BYTE parms[] = VTS_I2 VTS_I2 VTS_I4 VTS_I4;
		InvokeHelper(DISPID_DBLCLICK, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Button, ShiftState, x, y);
	}
	void OpenStateChange(long OldState, long NewState)
	{
		static BYTE parms[] = VTS_I4 VTS_I4;
		InvokeHelper(0xbc3, DISPATCH_METHOD, VT_EMPTY, NULL, parms, OldState, NewState);
	}
	void PlayStateChange(long OldState, long NewState)
	{
		static BYTE parms[] = VTS_I4 VTS_I4;
		InvokeHelper(0xbc4, DISPATCH_METHOD, VT_EMPTY, NULL, parms, OldState, NewState);
	}
	void ScriptCommand(LPCTSTR scType, LPCTSTR Param)
	{
		static BYTE parms[] = VTS_BSTR VTS_BSTR;
		InvokeHelper(0xbb9, DISPATCH_METHOD, VT_EMPTY, NULL, parms, scType, Param);
	}
	void Buffering(BOOL Start)
	{
		static BYTE parms[] = VTS_BOOL;
		InvokeHelper(0xbbb, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Start);
	}
	void Error()
	{
		InvokeHelper(0xbc2, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void MarkerHit(long MarkerNum)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xbbe, DISPATCH_METHOD, VT_EMPTY, NULL, parms, MarkerNum);
	}
	void Warning(long WarningType, long Param, LPCTSTR Description)
	{
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_BSTR;
		InvokeHelper(0xbc1, DISPATCH_METHOD, VT_EMPTY, NULL, parms, WarningType, Param, Description);
	}
	void NewStream()
	{
		InvokeHelper(0xbc0, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void Disconnect(long Result)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0xbbc, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Result);
	}
	void ReadyStateChange(long ReadyState)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(DISPID_READYSTATECHANGE, DISPATCH_METHOD, VT_EMPTY, NULL, parms, ReadyState);
	}

	// _MediaPlayerEvents 属性
public:

};
