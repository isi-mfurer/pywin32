// This file declares the ICurrentItem Interface and Gateway for Python.
// Generated by makegw.py
// ---------------------------------------------------
//
// Interface Declaration

class PyICurrentItem : public PyIRelatedItem
{
public:
	MAKE_PYCOM_CTOR(PyICurrentItem);
	static ICurrentItem *GetI(PyObject *self);
	static PyComTypeObject type;

	// The Python methods

protected:
	PyICurrentItem(IUnknown *pdisp);
	~PyICurrentItem();
};
// ---------------------------------------------------
//
// Gateway Declaration

class PyGCurrentItem : public PyGRelatedItem, public ICurrentItem
{
protected:
	PyGCurrentItem(PyObject *instance) : PyGRelatedItem(instance) { ; }
	PYGATEWAY_MAKE_SUPPORT2(PyGCurrentItem, ICurrentItem, IID_ICurrentItem, PyGRelatedItem)

	// Only has IRelatedItem methods
	STDMETHOD(GetItemIDList)(PIDLIST_ABSOLUTE * ppidl)
		{return PyGRelatedItem::GetItemIDList(ppidl);}

	STDMETHOD(GetItem)(IShellItem ** ppsi)
		{return PyGRelatedItem::GetItem(ppsi);}
};
