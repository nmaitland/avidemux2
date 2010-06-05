// Generated by admPyClass.pl do not edit !
// fileWriteSelect -> str scriptFileSelWrite (str ) 
static tp_obj zzpy_fileWriteSelect(TP)
 {
  tp_obj self=tp_getraw( tp);
  tinyParams pm(tp);
  void *me=(void *)pm.asThis(&self,ADM_PYID_GUI);
  const char *p0= pm.asString();
  char *r=  scriptFileSelWrite(p0); 
  if(!r) pm.raise("pyGui : null pointer");
  
  tp_obj o=tp_string_copy(tp,r,  strlen(r));
  ADM_dealloc(r);
  return o;
}
// displayError -> void scriptDisplayError (str str ) 
static tp_obj zzpy_displayError(TP)
 {
  tp_obj self=tp_getraw( tp);
  tinyParams pm(tp);
  void *me=(void *)pm.asThis(&self,ADM_PYID_GUI);
  const char *p0= pm.asString();
  const char *p1= pm.asString();
  scriptDisplayError(p0,p1); 

}
// dirSelect -> str scriptDirSelect (str ) 
static tp_obj zzpy_dirSelect(TP)
 {
  tp_obj self=tp_getraw( tp);
  tinyParams pm(tp);
  void *me=(void *)pm.asThis(&self,ADM_PYID_GUI);
  const char *p0= pm.asString();
  char *r=  scriptDirSelect(p0); 
  if(!r) pm.raise("pyGui : null pointer");
  
  tp_obj o=tp_string_copy(tp,r,  strlen(r));
  ADM_dealloc(r);
  return o;
}
// displayInfo -> void scriptDisplayInfo (str str ) 
static tp_obj zzpy_displayInfo(TP)
 {
  tp_obj self=tp_getraw( tp);
  tinyParams pm(tp);
  void *me=(void *)pm.asThis(&self,ADM_PYID_GUI);
  const char *p0= pm.asString();
  const char *p1= pm.asString();
  scriptDisplayInfo(p0,p1); 

}
// fileReadSelect -> str scriptFileSelRead (str ) 
static tp_obj zzpy_fileReadSelect(TP)
 {
  tp_obj self=tp_getraw( tp);
  tinyParams pm(tp);
  void *me=(void *)pm.asThis(&self,ADM_PYID_GUI);
  const char *p0= pm.asString();
  char *r=  scriptFileSelRead(p0); 
  if(!r) pm.raise("pyGui : null pointer");
  
  tp_obj o=tp_string_copy(tp,r,  strlen(r));
  ADM_dealloc(r);
  return o;
}
tp_obj zzpy__pyGui_get(tp_vm *vm)
{
  tp_obj self=tp_getraw( vm);
  tinyParams pm(vm);
  void *me=(void *)pm.asThis(&self,ADM_PYID_GUI);
  char const *key = pm.asString();
  if (!strcmp(key, "fileWriteSelect"))
  {
     return tp_method(vm,self,zzpy_fileWriteSelect);
  }
  if (!strcmp(key, "displayError"))
  {
     return tp_method(vm,self,zzpy_displayError);
  }
  if (!strcmp(key, "dirSelect"))
  {
     return tp_method(vm,self,zzpy_dirSelect);
  }
  if (!strcmp(key, "displayInfo"))
  {
     return tp_method(vm,self,zzpy_displayInfo);
  }
  if (!strcmp(key, "fileReadSelect"))
  {
     return tp_method(vm,self,zzpy_fileReadSelect);
  }
  return tp_get(vm,self,tp_string(key));
}
tp_obj zzpy__pyGui_set(tp_vm *vm)
{
  tp_obj self=tp_getraw( vm);
  tinyParams pm(vm);
  void *me=(void *)pm.asThis(&self,ADM_PYID_GUI);
  char const *key = pm.asString();
  return tp_None;
}
// Dctor
static void myDtorpyGui(tp_vm *vm,tp_obj self)
{
}
// Ctor ()
static tp_obj myCtorpyGui(tp_vm *vm)
{
  tp_obj self = tp_getraw(vm);
  tinyParams pm(vm);
  void *me=NULL;
  tp_obj cdata = tp_data(vm, ADM_PYID_GUI, me);
  cdata.data.info->xfree = myDtorpyGui;
  tp_set(vm, self, tp_string("cdata"), cdata);
  return tp_None;
}
static tp_obj zzpy__pyGui_help(TP)
 {
  jsLog("fileWriteSelect(str)");
  jsLog("displayError(str,str)");
  jsLog("dirSelect(str)");
  jsLog("displayInfo(str,str)");
  jsLog("fileReadSelect(str)");
};
tp_obj initClasspyGui(tp_vm *vm)
{
  tp_obj myClass=tp_class(vm);
  tp_set(vm,myClass,tp_string("__init__"),tp_fnc(vm,myCtorpyGui));
  tp_set(vm,myClass,tp_string("__set__"),tp_fnc(vm,zzpy__pyGui_set));
  tp_set(vm,myClass,tp_string("__get__"),tp_fnc(vm,zzpy__pyGui_get));
  tp_set(vm,myClass,tp_string("help"),tp_fnc(vm,zzpy__pyGui_help));
  return myClass;
}
