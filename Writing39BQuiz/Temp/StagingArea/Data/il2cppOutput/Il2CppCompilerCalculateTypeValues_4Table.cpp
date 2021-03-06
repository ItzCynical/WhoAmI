﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t4132554469;
// System.Collections.Hashtable
struct Hashtable_t110396805;
// System.Runtime.Remoting.Contexts.IDynamicProperty
struct IDynamicProperty_t296810421;
// System.Runtime.Remoting.Contexts.IDynamicMessageSink
struct IDynamicMessageSink_t4003851817;
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t3253437296;
// System.Runtime.Remoting.Contexts.SynchronizationAttribute
struct SynchronizationAttribute_t2214088928;
// System.Threading.Timer
struct Timer_t2840697394;
// System.Int32[]
struct Int32U5BU5D_t2661163171;
// System.Reflection.MethodBase
struct MethodBase_t4287568431;
// System.Runtime.Remoting.Contexts.Context
struct Context_t3668501578;
// System.Runtime.Remoting.Messaging.CallContextRemotingData
struct CallContextRemotingData_t638146523;
// System.Object[]
struct ObjectU5BU5D_t2353520700;
// System.Type[]
struct TypeU5BU5D_t3328406413;
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t4224332165;
// System.Collections.IDictionary
struct IDictionary_t1672074183;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3825759196;
// System.Runtime.Remoting.Messaging.IMethodMessage
struct IMethodMessage_t2657508393;
// System.String[]
struct StringU5BU5D_t2332754599;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t962508677;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.IntPtr[]
struct IntPtrU5BU5D_t1608664387;
// System.Runtime.Remoting.Contexts.CrossContextChannel
struct CrossContextChannel_t2763432160;
// System.Collections.IList
struct IList_t335390177;
// System.Runtime.Remoting.Activation.IActivator
struct IActivator_t3050551161;
// System.Void
struct Void_t1708431179;
// System.Char[]
struct CharU5BU5D_t2218717181;
// System.Type
struct Type_t;
// System.Runtime.Remoting.Contexts.DynamicPropertyCollection
struct DynamicPropertyCollection_t1178344104;
// System.Runtime.Remoting.Contexts.ContextCallbackObject
struct ContextCallbackObject_t697299629;
// System.Threading.Mutex
struct Mutex_t189777844;
// System.Threading.Thread
struct Thread_t1234154217;
// System.Runtime.Remoting.Lifetime.LeaseManager
struct LeaseManager_t1909612471;
// System.Threading.WaitHandle
struct WaitHandle_t1453219373;
// System.Threading.ExecutionContext
struct ExecutionContext_t42445931;
// System.Runtime.Remoting.Messaging.MonoMethodMessage
struct MonoMethodMessage_t2546458307;
// System.Runtime.Remoting.Messaging.IMessageCtrl
struct IMessageCtrl_t3477449621;
// System.Runtime.Remoting.Messaging.IMessage
struct IMessage_t1121704929;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef CROSSCONTEXTCHANNEL_T2763432160_H
#define CROSSCONTEXTCHANNEL_T2763432160_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.CrossContextChannel
struct  CrossContextChannel_t2763432160  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CROSSCONTEXTCHANNEL_T2763432160_H
#ifndef SINKPROVIDERDATA_T804748480_H
#define SINKPROVIDERDATA_T804748480_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.SinkProviderData
struct  SinkProviderData_t804748480  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.Channels.SinkProviderData::sinkName
	String_t* ___sinkName_0;
	// System.Collections.ArrayList System.Runtime.Remoting.Channels.SinkProviderData::children
	ArrayList_t4132554469 * ___children_1;
	// System.Collections.Hashtable System.Runtime.Remoting.Channels.SinkProviderData::properties
	Hashtable_t110396805 * ___properties_2;

public:
	inline static int32_t get_offset_of_sinkName_0() { return static_cast<int32_t>(offsetof(SinkProviderData_t804748480, ___sinkName_0)); }
	inline String_t* get_sinkName_0() const { return ___sinkName_0; }
	inline String_t** get_address_of_sinkName_0() { return &___sinkName_0; }
	inline void set_sinkName_0(String_t* value)
	{
		___sinkName_0 = value;
		Il2CppCodeGenWriteBarrier((&___sinkName_0), value);
	}

	inline static int32_t get_offset_of_children_1() { return static_cast<int32_t>(offsetof(SinkProviderData_t804748480, ___children_1)); }
	inline ArrayList_t4132554469 * get_children_1() const { return ___children_1; }
	inline ArrayList_t4132554469 ** get_address_of_children_1() { return &___children_1; }
	inline void set_children_1(ArrayList_t4132554469 * value)
	{
		___children_1 = value;
		Il2CppCodeGenWriteBarrier((&___children_1), value);
	}

	inline static int32_t get_offset_of_properties_2() { return static_cast<int32_t>(offsetof(SinkProviderData_t804748480, ___properties_2)); }
	inline Hashtable_t110396805 * get_properties_2() const { return ___properties_2; }
	inline Hashtable_t110396805 ** get_address_of_properties_2() { return &___properties_2; }
	inline void set_properties_2(Hashtable_t110396805 * value)
	{
		___properties_2 = value;
		Il2CppCodeGenWriteBarrier((&___properties_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINKPROVIDERDATA_T804748480_H
#ifndef DYNAMICPROPERTYCOLLECTION_T1178344104_H
#define DYNAMICPROPERTYCOLLECTION_T1178344104_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.DynamicPropertyCollection
struct  DynamicPropertyCollection_t1178344104  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Runtime.Remoting.Contexts.DynamicPropertyCollection::_properties
	ArrayList_t4132554469 * ____properties_0;

public:
	inline static int32_t get_offset_of__properties_0() { return static_cast<int32_t>(offsetof(DynamicPropertyCollection_t1178344104, ____properties_0)); }
	inline ArrayList_t4132554469 * get__properties_0() const { return ____properties_0; }
	inline ArrayList_t4132554469 ** get_address_of__properties_0() { return &____properties_0; }
	inline void set__properties_0(ArrayList_t4132554469 * value)
	{
		____properties_0 = value;
		Il2CppCodeGenWriteBarrier((&____properties_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DYNAMICPROPERTYCOLLECTION_T1178344104_H
#ifndef DYNAMICPROPERTYREG_T1062014171_H
#define DYNAMICPROPERTYREG_T1062014171_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.DynamicPropertyCollection/DynamicPropertyReg
struct  DynamicPropertyReg_t1062014171  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Contexts.IDynamicProperty System.Runtime.Remoting.Contexts.DynamicPropertyCollection/DynamicPropertyReg::Property
	RuntimeObject* ___Property_0;
	// System.Runtime.Remoting.Contexts.IDynamicMessageSink System.Runtime.Remoting.Contexts.DynamicPropertyCollection/DynamicPropertyReg::Sink
	RuntimeObject* ___Sink_1;

public:
	inline static int32_t get_offset_of_Property_0() { return static_cast<int32_t>(offsetof(DynamicPropertyReg_t1062014171, ___Property_0)); }
	inline RuntimeObject* get_Property_0() const { return ___Property_0; }
	inline RuntimeObject** get_address_of_Property_0() { return &___Property_0; }
	inline void set_Property_0(RuntimeObject* value)
	{
		___Property_0 = value;
		Il2CppCodeGenWriteBarrier((&___Property_0), value);
	}

	inline static int32_t get_offset_of_Sink_1() { return static_cast<int32_t>(offsetof(DynamicPropertyReg_t1062014171, ___Sink_1)); }
	inline RuntimeObject* get_Sink_1() const { return ___Sink_1; }
	inline RuntimeObject** get_address_of_Sink_1() { return &___Sink_1; }
	inline void set_Sink_1(RuntimeObject* value)
	{
		___Sink_1 = value;
		Il2CppCodeGenWriteBarrier((&___Sink_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DYNAMICPROPERTYREG_T1062014171_H
#ifndef SYNCHRONIZEDCLIENTCONTEXTSINK_T3713868289_H
#define SYNCHRONIZEDCLIENTCONTEXTSINK_T3713868289_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.SynchronizedClientContextSink
struct  SynchronizedClientContextSink_t3713868289  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.SynchronizedClientContextSink::_next
	RuntimeObject* ____next_0;
	// System.Runtime.Remoting.Contexts.SynchronizationAttribute System.Runtime.Remoting.Contexts.SynchronizedClientContextSink::_att
	SynchronizationAttribute_t2214088928 * ____att_1;

public:
	inline static int32_t get_offset_of__next_0() { return static_cast<int32_t>(offsetof(SynchronizedClientContextSink_t3713868289, ____next_0)); }
	inline RuntimeObject* get__next_0() const { return ____next_0; }
	inline RuntimeObject** get_address_of__next_0() { return &____next_0; }
	inline void set__next_0(RuntimeObject* value)
	{
		____next_0 = value;
		Il2CppCodeGenWriteBarrier((&____next_0), value);
	}

	inline static int32_t get_offset_of__att_1() { return static_cast<int32_t>(offsetof(SynchronizedClientContextSink_t3713868289, ____att_1)); }
	inline SynchronizationAttribute_t2214088928 * get__att_1() const { return ____att_1; }
	inline SynchronizationAttribute_t2214088928 ** get_address_of__att_1() { return &____att_1; }
	inline void set__att_1(SynchronizationAttribute_t2214088928 * value)
	{
		____att_1 = value;
		Il2CppCodeGenWriteBarrier((&____att_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHRONIZEDCLIENTCONTEXTSINK_T3713868289_H
#ifndef SYNCHRONIZEDSERVERCONTEXTSINK_T2601039728_H
#define SYNCHRONIZEDSERVERCONTEXTSINK_T2601039728_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.SynchronizedServerContextSink
struct  SynchronizedServerContextSink_t2601039728  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.SynchronizedServerContextSink::_next
	RuntimeObject* ____next_0;
	// System.Runtime.Remoting.Contexts.SynchronizationAttribute System.Runtime.Remoting.Contexts.SynchronizedServerContextSink::_att
	SynchronizationAttribute_t2214088928 * ____att_1;

public:
	inline static int32_t get_offset_of__next_0() { return static_cast<int32_t>(offsetof(SynchronizedServerContextSink_t2601039728, ____next_0)); }
	inline RuntimeObject* get__next_0() const { return ____next_0; }
	inline RuntimeObject** get_address_of__next_0() { return &____next_0; }
	inline void set__next_0(RuntimeObject* value)
	{
		____next_0 = value;
		Il2CppCodeGenWriteBarrier((&____next_0), value);
	}

	inline static int32_t get_offset_of__att_1() { return static_cast<int32_t>(offsetof(SynchronizedServerContextSink_t2601039728, ____att_1)); }
	inline SynchronizationAttribute_t2214088928 * get__att_1() const { return ____att_1; }
	inline SynchronizationAttribute_t2214088928 ** get_address_of__att_1() { return &____att_1; }
	inline void set__att_1(SynchronizationAttribute_t2214088928 * value)
	{
		____att_1 = value;
		Il2CppCodeGenWriteBarrier((&____att_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHRONIZEDSERVERCONTEXTSINK_T2601039728_H
#ifndef LEASEMANAGER_T1909612471_H
#define LEASEMANAGER_T1909612471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Lifetime.LeaseManager
struct  LeaseManager_t1909612471  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Runtime.Remoting.Lifetime.LeaseManager::_objects
	ArrayList_t4132554469 * ____objects_0;
	// System.Threading.Timer System.Runtime.Remoting.Lifetime.LeaseManager::_timer
	Timer_t2840697394 * ____timer_1;

public:
	inline static int32_t get_offset_of__objects_0() { return static_cast<int32_t>(offsetof(LeaseManager_t1909612471, ____objects_0)); }
	inline ArrayList_t4132554469 * get__objects_0() const { return ____objects_0; }
	inline ArrayList_t4132554469 ** get_address_of__objects_0() { return &____objects_0; }
	inline void set__objects_0(ArrayList_t4132554469 * value)
	{
		____objects_0 = value;
		Il2CppCodeGenWriteBarrier((&____objects_0), value);
	}

	inline static int32_t get_offset_of__timer_1() { return static_cast<int32_t>(offsetof(LeaseManager_t1909612471, ____timer_1)); }
	inline Timer_t2840697394 * get__timer_1() const { return ____timer_1; }
	inline Timer_t2840697394 ** get_address_of__timer_1() { return &____timer_1; }
	inline void set__timer_1(Timer_t2840697394 * value)
	{
		____timer_1 = value;
		Il2CppCodeGenWriteBarrier((&____timer_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEASEMANAGER_T1909612471_H
#ifndef LEASESINK_T3149820929_H
#define LEASESINK_T3149820929_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Lifetime.LeaseSink
struct  LeaseSink_t3149820929  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Lifetime.LeaseSink::_nextSink
	RuntimeObject* ____nextSink_0;

public:
	inline static int32_t get_offset_of__nextSink_0() { return static_cast<int32_t>(offsetof(LeaseSink_t3149820929, ____nextSink_0)); }
	inline RuntimeObject* get__nextSink_0() const { return ____nextSink_0; }
	inline RuntimeObject** get_address_of__nextSink_0() { return &____nextSink_0; }
	inline void set__nextSink_0(RuntimeObject* value)
	{
		____nextSink_0 = value;
		Il2CppCodeGenWriteBarrier((&____nextSink_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEASESINK_T3149820929_H
#ifndef ARGINFO_T1516951195_H
#define ARGINFO_T1516951195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.ArgInfo
struct  ArgInfo_t1516951195  : public RuntimeObject
{
public:
	// System.Int32[] System.Runtime.Remoting.Messaging.ArgInfo::_paramMap
	Int32U5BU5D_t2661163171* ____paramMap_0;
	// System.Int32 System.Runtime.Remoting.Messaging.ArgInfo::_inoutArgCount
	int32_t ____inoutArgCount_1;
	// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.ArgInfo::_method
	MethodBase_t4287568431 * ____method_2;

public:
	inline static int32_t get_offset_of__paramMap_0() { return static_cast<int32_t>(offsetof(ArgInfo_t1516951195, ____paramMap_0)); }
	inline Int32U5BU5D_t2661163171* get__paramMap_0() const { return ____paramMap_0; }
	inline Int32U5BU5D_t2661163171** get_address_of__paramMap_0() { return &____paramMap_0; }
	inline void set__paramMap_0(Int32U5BU5D_t2661163171* value)
	{
		____paramMap_0 = value;
		Il2CppCodeGenWriteBarrier((&____paramMap_0), value);
	}

	inline static int32_t get_offset_of__inoutArgCount_1() { return static_cast<int32_t>(offsetof(ArgInfo_t1516951195, ____inoutArgCount_1)); }
	inline int32_t get__inoutArgCount_1() const { return ____inoutArgCount_1; }
	inline int32_t* get_address_of__inoutArgCount_1() { return &____inoutArgCount_1; }
	inline void set__inoutArgCount_1(int32_t value)
	{
		____inoutArgCount_1 = value;
	}

	inline static int32_t get_offset_of__method_2() { return static_cast<int32_t>(offsetof(ArgInfo_t1516951195, ____method_2)); }
	inline MethodBase_t4287568431 * get__method_2() const { return ____method_2; }
	inline MethodBase_t4287568431 ** get_address_of__method_2() { return &____method_2; }
	inline void set__method_2(MethodBase_t4287568431 * value)
	{
		____method_2 = value;
		Il2CppCodeGenWriteBarrier((&____method_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGINFO_T1516951195_H
#ifndef CLIENTCONTEXTTERMINATORSINK_T1733852064_H
#define CLIENTCONTEXTTERMINATORSINK_T1733852064_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.ClientContextTerminatorSink
struct  ClientContextTerminatorSink_t1733852064  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Contexts.Context System.Runtime.Remoting.Messaging.ClientContextTerminatorSink::_context
	Context_t3668501578 * ____context_0;

public:
	inline static int32_t get_offset_of__context_0() { return static_cast<int32_t>(offsetof(ClientContextTerminatorSink_t1733852064, ____context_0)); }
	inline Context_t3668501578 * get__context_0() const { return ____context_0; }
	inline Context_t3668501578 ** get_address_of__context_0() { return &____context_0; }
	inline void set__context_0(Context_t3668501578 * value)
	{
		____context_0 = value;
		Il2CppCodeGenWriteBarrier((&____context_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLIENTCONTEXTTERMINATORSINK_T1733852064_H
#ifndef ENVOYTERMINATORSINK_T3479444128_H
#define ENVOYTERMINATORSINK_T3479444128_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.EnvoyTerminatorSink
struct  EnvoyTerminatorSink_t3479444128  : public RuntimeObject
{
public:

public:
};

struct EnvoyTerminatorSink_t3479444128_StaticFields
{
public:
	// System.Runtime.Remoting.Messaging.EnvoyTerminatorSink System.Runtime.Remoting.Messaging.EnvoyTerminatorSink::Instance
	EnvoyTerminatorSink_t3479444128 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(EnvoyTerminatorSink_t3479444128_StaticFields, ___Instance_0)); }
	inline EnvoyTerminatorSink_t3479444128 * get_Instance_0() const { return ___Instance_0; }
	inline EnvoyTerminatorSink_t3479444128 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(EnvoyTerminatorSink_t3479444128 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENVOYTERMINATORSINK_T3479444128_H
#ifndef HEADER_T3247917065_H
#define HEADER_T3247917065_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.Header
struct  Header_t3247917065  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.Messaging.Header::HeaderNamespace
	String_t* ___HeaderNamespace_0;
	// System.Boolean System.Runtime.Remoting.Messaging.Header::MustUnderstand
	bool ___MustUnderstand_1;
	// System.String System.Runtime.Remoting.Messaging.Header::Name
	String_t* ___Name_2;
	// System.Object System.Runtime.Remoting.Messaging.Header::Value
	RuntimeObject * ___Value_3;

public:
	inline static int32_t get_offset_of_HeaderNamespace_0() { return static_cast<int32_t>(offsetof(Header_t3247917065, ___HeaderNamespace_0)); }
	inline String_t* get_HeaderNamespace_0() const { return ___HeaderNamespace_0; }
	inline String_t** get_address_of_HeaderNamespace_0() { return &___HeaderNamespace_0; }
	inline void set_HeaderNamespace_0(String_t* value)
	{
		___HeaderNamespace_0 = value;
		Il2CppCodeGenWriteBarrier((&___HeaderNamespace_0), value);
	}

	inline static int32_t get_offset_of_MustUnderstand_1() { return static_cast<int32_t>(offsetof(Header_t3247917065, ___MustUnderstand_1)); }
	inline bool get_MustUnderstand_1() const { return ___MustUnderstand_1; }
	inline bool* get_address_of_MustUnderstand_1() { return &___MustUnderstand_1; }
	inline void set_MustUnderstand_1(bool value)
	{
		___MustUnderstand_1 = value;
	}

	inline static int32_t get_offset_of_Name_2() { return static_cast<int32_t>(offsetof(Header_t3247917065, ___Name_2)); }
	inline String_t* get_Name_2() const { return ___Name_2; }
	inline String_t** get_address_of_Name_2() { return &___Name_2; }
	inline void set_Name_2(String_t* value)
	{
		___Name_2 = value;
		Il2CppCodeGenWriteBarrier((&___Name_2), value);
	}

	inline static int32_t get_offset_of_Value_3() { return static_cast<int32_t>(offsetof(Header_t3247917065, ___Value_3)); }
	inline RuntimeObject * get_Value_3() const { return ___Value_3; }
	inline RuntimeObject ** get_address_of_Value_3() { return &___Value_3; }
	inline void set_Value_3(RuntimeObject * value)
	{
		___Value_3 = value;
		Il2CppCodeGenWriteBarrier((&___Value_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HEADER_T3247917065_H
#ifndef LOGICALCALLCONTEXT_T4224332165_H
#define LOGICALCALLCONTEXT_T4224332165_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.LogicalCallContext
struct  LogicalCallContext_t4224332165  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Runtime.Remoting.Messaging.LogicalCallContext::_data
	Hashtable_t110396805 * ____data_0;
	// System.Runtime.Remoting.Messaging.CallContextRemotingData System.Runtime.Remoting.Messaging.LogicalCallContext::_remotingData
	CallContextRemotingData_t638146523 * ____remotingData_1;

public:
	inline static int32_t get_offset_of__data_0() { return static_cast<int32_t>(offsetof(LogicalCallContext_t4224332165, ____data_0)); }
	inline Hashtable_t110396805 * get__data_0() const { return ____data_0; }
	inline Hashtable_t110396805 ** get_address_of__data_0() { return &____data_0; }
	inline void set__data_0(Hashtable_t110396805 * value)
	{
		____data_0 = value;
		Il2CppCodeGenWriteBarrier((&____data_0), value);
	}

	inline static int32_t get_offset_of__remotingData_1() { return static_cast<int32_t>(offsetof(LogicalCallContext_t4224332165, ____remotingData_1)); }
	inline CallContextRemotingData_t638146523 * get__remotingData_1() const { return ____remotingData_1; }
	inline CallContextRemotingData_t638146523 ** get_address_of__remotingData_1() { return &____remotingData_1; }
	inline void set__remotingData_1(CallContextRemotingData_t638146523 * value)
	{
		____remotingData_1 = value;
		Il2CppCodeGenWriteBarrier((&____remotingData_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGICALCALLCONTEXT_T4224332165_H
#ifndef CALLCONTEXTREMOTINGDATA_T638146523_H
#define CALLCONTEXTREMOTINGDATA_T638146523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.CallContextRemotingData
struct  CallContextRemotingData_t638146523  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.Messaging.CallContextRemotingData::_logicalCallID
	String_t* ____logicalCallID_0;

public:
	inline static int32_t get_offset_of__logicalCallID_0() { return static_cast<int32_t>(offsetof(CallContextRemotingData_t638146523, ____logicalCallID_0)); }
	inline String_t* get__logicalCallID_0() const { return ____logicalCallID_0; }
	inline String_t** get_address_of__logicalCallID_0() { return &____logicalCallID_0; }
	inline void set__logicalCallID_0(String_t* value)
	{
		____logicalCallID_0 = value;
		Il2CppCodeGenWriteBarrier((&____logicalCallID_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALLCONTEXTREMOTINGDATA_T638146523_H
#ifndef METHODCALL_T4009424417_H
#define METHODCALL_T4009424417_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.MethodCall
struct  MethodCall_t4009424417  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.Messaging.MethodCall::_uri
	String_t* ____uri_0;
	// System.String System.Runtime.Remoting.Messaging.MethodCall::_typeName
	String_t* ____typeName_1;
	// System.String System.Runtime.Remoting.Messaging.MethodCall::_methodName
	String_t* ____methodName_2;
	// System.Object[] System.Runtime.Remoting.Messaging.MethodCall::_args
	ObjectU5BU5D_t2353520700* ____args_3;
	// System.Type[] System.Runtime.Remoting.Messaging.MethodCall::_methodSignature
	TypeU5BU5D_t3328406413* ____methodSignature_4;
	// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.MethodCall::_methodBase
	MethodBase_t4287568431 * ____methodBase_5;
	// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MethodCall::_callContext
	LogicalCallContext_t4224332165 * ____callContext_6;
	// System.Type[] System.Runtime.Remoting.Messaging.MethodCall::_genericArguments
	TypeU5BU5D_t3328406413* ____genericArguments_7;
	// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodCall::ExternalProperties
	RuntimeObject* ___ExternalProperties_8;
	// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodCall::InternalProperties
	RuntimeObject* ___InternalProperties_9;

public:
	inline static int32_t get_offset_of__uri_0() { return static_cast<int32_t>(offsetof(MethodCall_t4009424417, ____uri_0)); }
	inline String_t* get__uri_0() const { return ____uri_0; }
	inline String_t** get_address_of__uri_0() { return &____uri_0; }
	inline void set__uri_0(String_t* value)
	{
		____uri_0 = value;
		Il2CppCodeGenWriteBarrier((&____uri_0), value);
	}

	inline static int32_t get_offset_of__typeName_1() { return static_cast<int32_t>(offsetof(MethodCall_t4009424417, ____typeName_1)); }
	inline String_t* get__typeName_1() const { return ____typeName_1; }
	inline String_t** get_address_of__typeName_1() { return &____typeName_1; }
	inline void set__typeName_1(String_t* value)
	{
		____typeName_1 = value;
		Il2CppCodeGenWriteBarrier((&____typeName_1), value);
	}

	inline static int32_t get_offset_of__methodName_2() { return static_cast<int32_t>(offsetof(MethodCall_t4009424417, ____methodName_2)); }
	inline String_t* get__methodName_2() const { return ____methodName_2; }
	inline String_t** get_address_of__methodName_2() { return &____methodName_2; }
	inline void set__methodName_2(String_t* value)
	{
		____methodName_2 = value;
		Il2CppCodeGenWriteBarrier((&____methodName_2), value);
	}

	inline static int32_t get_offset_of__args_3() { return static_cast<int32_t>(offsetof(MethodCall_t4009424417, ____args_3)); }
	inline ObjectU5BU5D_t2353520700* get__args_3() const { return ____args_3; }
	inline ObjectU5BU5D_t2353520700** get_address_of__args_3() { return &____args_3; }
	inline void set__args_3(ObjectU5BU5D_t2353520700* value)
	{
		____args_3 = value;
		Il2CppCodeGenWriteBarrier((&____args_3), value);
	}

	inline static int32_t get_offset_of__methodSignature_4() { return static_cast<int32_t>(offsetof(MethodCall_t4009424417, ____methodSignature_4)); }
	inline TypeU5BU5D_t3328406413* get__methodSignature_4() const { return ____methodSignature_4; }
	inline TypeU5BU5D_t3328406413** get_address_of__methodSignature_4() { return &____methodSignature_4; }
	inline void set__methodSignature_4(TypeU5BU5D_t3328406413* value)
	{
		____methodSignature_4 = value;
		Il2CppCodeGenWriteBarrier((&____methodSignature_4), value);
	}

	inline static int32_t get_offset_of__methodBase_5() { return static_cast<int32_t>(offsetof(MethodCall_t4009424417, ____methodBase_5)); }
	inline MethodBase_t4287568431 * get__methodBase_5() const { return ____methodBase_5; }
	inline MethodBase_t4287568431 ** get_address_of__methodBase_5() { return &____methodBase_5; }
	inline void set__methodBase_5(MethodBase_t4287568431 * value)
	{
		____methodBase_5 = value;
		Il2CppCodeGenWriteBarrier((&____methodBase_5), value);
	}

	inline static int32_t get_offset_of__callContext_6() { return static_cast<int32_t>(offsetof(MethodCall_t4009424417, ____callContext_6)); }
	inline LogicalCallContext_t4224332165 * get__callContext_6() const { return ____callContext_6; }
	inline LogicalCallContext_t4224332165 ** get_address_of__callContext_6() { return &____callContext_6; }
	inline void set__callContext_6(LogicalCallContext_t4224332165 * value)
	{
		____callContext_6 = value;
		Il2CppCodeGenWriteBarrier((&____callContext_6), value);
	}

	inline static int32_t get_offset_of__genericArguments_7() { return static_cast<int32_t>(offsetof(MethodCall_t4009424417, ____genericArguments_7)); }
	inline TypeU5BU5D_t3328406413* get__genericArguments_7() const { return ____genericArguments_7; }
	inline TypeU5BU5D_t3328406413** get_address_of__genericArguments_7() { return &____genericArguments_7; }
	inline void set__genericArguments_7(TypeU5BU5D_t3328406413* value)
	{
		____genericArguments_7 = value;
		Il2CppCodeGenWriteBarrier((&____genericArguments_7), value);
	}

	inline static int32_t get_offset_of_ExternalProperties_8() { return static_cast<int32_t>(offsetof(MethodCall_t4009424417, ___ExternalProperties_8)); }
	inline RuntimeObject* get_ExternalProperties_8() const { return ___ExternalProperties_8; }
	inline RuntimeObject** get_address_of_ExternalProperties_8() { return &___ExternalProperties_8; }
	inline void set_ExternalProperties_8(RuntimeObject* value)
	{
		___ExternalProperties_8 = value;
		Il2CppCodeGenWriteBarrier((&___ExternalProperties_8), value);
	}

	inline static int32_t get_offset_of_InternalProperties_9() { return static_cast<int32_t>(offsetof(MethodCall_t4009424417, ___InternalProperties_9)); }
	inline RuntimeObject* get_InternalProperties_9() const { return ___InternalProperties_9; }
	inline RuntimeObject** get_address_of_InternalProperties_9() { return &___InternalProperties_9; }
	inline void set_InternalProperties_9(RuntimeObject* value)
	{
		___InternalProperties_9 = value;
		Il2CppCodeGenWriteBarrier((&___InternalProperties_9), value);
	}
};

struct MethodCall_t4009424417_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.Messaging.MethodCall::<>f__switch$map1F
	Dictionary_2_t3825759196 * ___U3CU3Ef__switchU24map1F_10;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1F_10() { return static_cast<int32_t>(offsetof(MethodCall_t4009424417_StaticFields, ___U3CU3Ef__switchU24map1F_10)); }
	inline Dictionary_2_t3825759196 * get_U3CU3Ef__switchU24map1F_10() const { return ___U3CU3Ef__switchU24map1F_10; }
	inline Dictionary_2_t3825759196 ** get_address_of_U3CU3Ef__switchU24map1F_10() { return &___U3CU3Ef__switchU24map1F_10; }
	inline void set_U3CU3Ef__switchU24map1F_10(Dictionary_2_t3825759196 * value)
	{
		___U3CU3Ef__switchU24map1F_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1F_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODCALL_T4009424417_H
#ifndef METHODDICTIONARY_T870439230_H
#define METHODDICTIONARY_T870439230_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.MethodDictionary
struct  MethodDictionary_t870439230  : public RuntimeObject
{
public:
	// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::_internalProperties
	RuntimeObject* ____internalProperties_0;
	// System.Runtime.Remoting.Messaging.IMethodMessage System.Runtime.Remoting.Messaging.MethodDictionary::_message
	RuntimeObject* ____message_1;
	// System.String[] System.Runtime.Remoting.Messaging.MethodDictionary::_methodKeys
	StringU5BU5D_t2332754599* ____methodKeys_2;
	// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::_ownProperties
	bool ____ownProperties_3;

public:
	inline static int32_t get_offset_of__internalProperties_0() { return static_cast<int32_t>(offsetof(MethodDictionary_t870439230, ____internalProperties_0)); }
	inline RuntimeObject* get__internalProperties_0() const { return ____internalProperties_0; }
	inline RuntimeObject** get_address_of__internalProperties_0() { return &____internalProperties_0; }
	inline void set__internalProperties_0(RuntimeObject* value)
	{
		____internalProperties_0 = value;
		Il2CppCodeGenWriteBarrier((&____internalProperties_0), value);
	}

	inline static int32_t get_offset_of__message_1() { return static_cast<int32_t>(offsetof(MethodDictionary_t870439230, ____message_1)); }
	inline RuntimeObject* get__message_1() const { return ____message_1; }
	inline RuntimeObject** get_address_of__message_1() { return &____message_1; }
	inline void set__message_1(RuntimeObject* value)
	{
		____message_1 = value;
		Il2CppCodeGenWriteBarrier((&____message_1), value);
	}

	inline static int32_t get_offset_of__methodKeys_2() { return static_cast<int32_t>(offsetof(MethodDictionary_t870439230, ____methodKeys_2)); }
	inline StringU5BU5D_t2332754599* get__methodKeys_2() const { return ____methodKeys_2; }
	inline StringU5BU5D_t2332754599** get_address_of__methodKeys_2() { return &____methodKeys_2; }
	inline void set__methodKeys_2(StringU5BU5D_t2332754599* value)
	{
		____methodKeys_2 = value;
		Il2CppCodeGenWriteBarrier((&____methodKeys_2), value);
	}

	inline static int32_t get_offset_of__ownProperties_3() { return static_cast<int32_t>(offsetof(MethodDictionary_t870439230, ____ownProperties_3)); }
	inline bool get__ownProperties_3() const { return ____ownProperties_3; }
	inline bool* get_address_of__ownProperties_3() { return &____ownProperties_3; }
	inline void set__ownProperties_3(bool value)
	{
		____ownProperties_3 = value;
	}
};

struct MethodDictionary_t870439230_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.Messaging.MethodDictionary::<>f__switch$map21
	Dictionary_2_t3825759196 * ___U3CU3Ef__switchU24map21_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.Messaging.MethodDictionary::<>f__switch$map22
	Dictionary_2_t3825759196 * ___U3CU3Ef__switchU24map22_5;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map21_4() { return static_cast<int32_t>(offsetof(MethodDictionary_t870439230_StaticFields, ___U3CU3Ef__switchU24map21_4)); }
	inline Dictionary_2_t3825759196 * get_U3CU3Ef__switchU24map21_4() const { return ___U3CU3Ef__switchU24map21_4; }
	inline Dictionary_2_t3825759196 ** get_address_of_U3CU3Ef__switchU24map21_4() { return &___U3CU3Ef__switchU24map21_4; }
	inline void set_U3CU3Ef__switchU24map21_4(Dictionary_2_t3825759196 * value)
	{
		___U3CU3Ef__switchU24map21_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map21_4), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map22_5() { return static_cast<int32_t>(offsetof(MethodDictionary_t870439230_StaticFields, ___U3CU3Ef__switchU24map22_5)); }
	inline Dictionary_2_t3825759196 * get_U3CU3Ef__switchU24map22_5() const { return ___U3CU3Ef__switchU24map22_5; }
	inline Dictionary_2_t3825759196 ** get_address_of_U3CU3Ef__switchU24map22_5() { return &___U3CU3Ef__switchU24map22_5; }
	inline void set_U3CU3Ef__switchU24map22_5(Dictionary_2_t3825759196 * value)
	{
		___U3CU3Ef__switchU24map22_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map22_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODDICTIONARY_T870439230_H
#ifndef ATTRIBUTE_T862851146_H
#define ATTRIBUTE_T862851146_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t862851146  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T862851146_H
#ifndef VALUETYPE_T3061744109_H
#define VALUETYPE_T3061744109_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3061744109  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3061744109_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3061744109_marshaled_com
{
};
#endif // VALUETYPE_T3061744109_H
#ifndef CRITICALFINALIZEROBJECT_T1715998574_H
#define CRITICALFINALIZEROBJECT_T1715998574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_t1715998574  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRITICALFINALIZEROBJECT_T1715998574_H
#ifndef MARSHALBYREFOBJECT_T4153876328_H
#define MARSHALBYREFOBJECT_T4153876328_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t4153876328  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t962508677 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t4153876328, ____identity_0)); }
	inline ServerIdentity_t962508677 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t962508677 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t962508677 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T4153876328_H
#ifndef CROSSAPPDOMAINSINK_T931237273_H
#define CROSSAPPDOMAINSINK_T931237273_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.CrossAppDomainSink
struct  CrossAppDomainSink_t931237273  : public RuntimeObject
{
public:
	// System.Int32 System.Runtime.Remoting.Channels.CrossAppDomainSink::_domainID
	int32_t ____domainID_2;

public:
	inline static int32_t get_offset_of__domainID_2() { return static_cast<int32_t>(offsetof(CrossAppDomainSink_t931237273, ____domainID_2)); }
	inline int32_t get__domainID_2() const { return ____domainID_2; }
	inline int32_t* get_address_of__domainID_2() { return &____domainID_2; }
	inline void set__domainID_2(int32_t value)
	{
		____domainID_2 = value;
	}
};

struct CrossAppDomainSink_t931237273_StaticFields
{
public:
	// System.Collections.Hashtable System.Runtime.Remoting.Channels.CrossAppDomainSink::s_sinks
	Hashtable_t110396805 * ___s_sinks_0;
	// System.Reflection.MethodInfo System.Runtime.Remoting.Channels.CrossAppDomainSink::processMessageMethod
	MethodInfo_t * ___processMessageMethod_1;

public:
	inline static int32_t get_offset_of_s_sinks_0() { return static_cast<int32_t>(offsetof(CrossAppDomainSink_t931237273_StaticFields, ___s_sinks_0)); }
	inline Hashtable_t110396805 * get_s_sinks_0() const { return ___s_sinks_0; }
	inline Hashtable_t110396805 ** get_address_of_s_sinks_0() { return &___s_sinks_0; }
	inline void set_s_sinks_0(Hashtable_t110396805 * value)
	{
		___s_sinks_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_sinks_0), value);
	}

	inline static int32_t get_offset_of_processMessageMethod_1() { return static_cast<int32_t>(offsetof(CrossAppDomainSink_t931237273_StaticFields, ___processMessageMethod_1)); }
	inline MethodInfo_t * get_processMessageMethod_1() const { return ___processMessageMethod_1; }
	inline MethodInfo_t ** get_address_of_processMessageMethod_1() { return &___processMessageMethod_1; }
	inline void set_processMessageMethod_1(MethodInfo_t * value)
	{
		___processMessageMethod_1 = value;
		Il2CppCodeGenWriteBarrier((&___processMessageMethod_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CROSSAPPDOMAINSINK_T931237273_H
#ifndef CROSSAPPDOMAINCHANNEL_T297096014_H
#define CROSSAPPDOMAINCHANNEL_T297096014_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.CrossAppDomainChannel
struct  CrossAppDomainChannel_t297096014  : public RuntimeObject
{
public:

public:
};

struct CrossAppDomainChannel_t297096014_StaticFields
{
public:
	// System.Object System.Runtime.Remoting.Channels.CrossAppDomainChannel::s_lock
	RuntimeObject * ___s_lock_0;

public:
	inline static int32_t get_offset_of_s_lock_0() { return static_cast<int32_t>(offsetof(CrossAppDomainChannel_t297096014_StaticFields, ___s_lock_0)); }
	inline RuntimeObject * get_s_lock_0() const { return ___s_lock_0; }
	inline RuntimeObject ** get_address_of_s_lock_0() { return &___s_lock_0; }
	inline void set_s_lock_0(RuntimeObject * value)
	{
		___s_lock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_lock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CROSSAPPDOMAINCHANNEL_T297096014_H
#ifndef EXCEPTION_T3220875092_H
#define EXCEPTION_T3220875092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t3220875092  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t1608664387* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t3220875092 * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t3220875092, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t1608664387* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t1608664387** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t1608664387* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t3220875092, ___inner_exception_1)); }
	inline Exception_t3220875092 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t3220875092 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t3220875092 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t3220875092, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t3220875092, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t3220875092, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t3220875092, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t3220875092, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t3220875092, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t3220875092, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t3220875092, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t3220875092, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T3220875092_H
#ifndef CHANNELSERVICES_T3916398954_H
#define CHANNELSERVICES_T3916398954_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.ChannelServices
struct  ChannelServices_t3916398954  : public RuntimeObject
{
public:

public:
};

struct ChannelServices_t3916398954_StaticFields
{
public:
	// System.Collections.ArrayList System.Runtime.Remoting.Channels.ChannelServices::registeredChannels
	ArrayList_t4132554469 * ___registeredChannels_0;
	// System.Collections.ArrayList System.Runtime.Remoting.Channels.ChannelServices::delayedClientChannels
	ArrayList_t4132554469 * ___delayedClientChannels_1;
	// System.Runtime.Remoting.Contexts.CrossContextChannel System.Runtime.Remoting.Channels.ChannelServices::_crossContextSink
	CrossContextChannel_t2763432160 * ____crossContextSink_2;
	// System.String System.Runtime.Remoting.Channels.ChannelServices::CrossContextUrl
	String_t* ___CrossContextUrl_3;
	// System.Collections.IList System.Runtime.Remoting.Channels.ChannelServices::oldStartModeTypes
	RuntimeObject* ___oldStartModeTypes_4;

public:
	inline static int32_t get_offset_of_registeredChannels_0() { return static_cast<int32_t>(offsetof(ChannelServices_t3916398954_StaticFields, ___registeredChannels_0)); }
	inline ArrayList_t4132554469 * get_registeredChannels_0() const { return ___registeredChannels_0; }
	inline ArrayList_t4132554469 ** get_address_of_registeredChannels_0() { return &___registeredChannels_0; }
	inline void set_registeredChannels_0(ArrayList_t4132554469 * value)
	{
		___registeredChannels_0 = value;
		Il2CppCodeGenWriteBarrier((&___registeredChannels_0), value);
	}

	inline static int32_t get_offset_of_delayedClientChannels_1() { return static_cast<int32_t>(offsetof(ChannelServices_t3916398954_StaticFields, ___delayedClientChannels_1)); }
	inline ArrayList_t4132554469 * get_delayedClientChannels_1() const { return ___delayedClientChannels_1; }
	inline ArrayList_t4132554469 ** get_address_of_delayedClientChannels_1() { return &___delayedClientChannels_1; }
	inline void set_delayedClientChannels_1(ArrayList_t4132554469 * value)
	{
		___delayedClientChannels_1 = value;
		Il2CppCodeGenWriteBarrier((&___delayedClientChannels_1), value);
	}

	inline static int32_t get_offset_of__crossContextSink_2() { return static_cast<int32_t>(offsetof(ChannelServices_t3916398954_StaticFields, ____crossContextSink_2)); }
	inline CrossContextChannel_t2763432160 * get__crossContextSink_2() const { return ____crossContextSink_2; }
	inline CrossContextChannel_t2763432160 ** get_address_of__crossContextSink_2() { return &____crossContextSink_2; }
	inline void set__crossContextSink_2(CrossContextChannel_t2763432160 * value)
	{
		____crossContextSink_2 = value;
		Il2CppCodeGenWriteBarrier((&____crossContextSink_2), value);
	}

	inline static int32_t get_offset_of_CrossContextUrl_3() { return static_cast<int32_t>(offsetof(ChannelServices_t3916398954_StaticFields, ___CrossContextUrl_3)); }
	inline String_t* get_CrossContextUrl_3() const { return ___CrossContextUrl_3; }
	inline String_t** get_address_of_CrossContextUrl_3() { return &___CrossContextUrl_3; }
	inline void set_CrossContextUrl_3(String_t* value)
	{
		___CrossContextUrl_3 = value;
		Il2CppCodeGenWriteBarrier((&___CrossContextUrl_3), value);
	}

	inline static int32_t get_offset_of_oldStartModeTypes_4() { return static_cast<int32_t>(offsetof(ChannelServices_t3916398954_StaticFields, ___oldStartModeTypes_4)); }
	inline RuntimeObject* get_oldStartModeTypes_4() const { return ___oldStartModeTypes_4; }
	inline RuntimeObject** get_address_of_oldStartModeTypes_4() { return &___oldStartModeTypes_4; }
	inline void set_oldStartModeTypes_4(RuntimeObject* value)
	{
		___oldStartModeTypes_4 = value;
		Il2CppCodeGenWriteBarrier((&___oldStartModeTypes_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANNELSERVICES_T3916398954_H
#ifndef MARSHAL_T3633690676_H
#define MARSHAL_T3633690676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.Marshal
struct  Marshal_t3633690676  : public RuntimeObject
{
public:

public:
};

struct Marshal_t3633690676_StaticFields
{
public:
	// System.Int32 System.Runtime.InteropServices.Marshal::SystemMaxDBCSCharSize
	int32_t ___SystemMaxDBCSCharSize_0;
	// System.Int32 System.Runtime.InteropServices.Marshal::SystemDefaultCharSize
	int32_t ___SystemDefaultCharSize_1;

public:
	inline static int32_t get_offset_of_SystemMaxDBCSCharSize_0() { return static_cast<int32_t>(offsetof(Marshal_t3633690676_StaticFields, ___SystemMaxDBCSCharSize_0)); }
	inline int32_t get_SystemMaxDBCSCharSize_0() const { return ___SystemMaxDBCSCharSize_0; }
	inline int32_t* get_address_of_SystemMaxDBCSCharSize_0() { return &___SystemMaxDBCSCharSize_0; }
	inline void set_SystemMaxDBCSCharSize_0(int32_t value)
	{
		___SystemMaxDBCSCharSize_0 = value;
	}

	inline static int32_t get_offset_of_SystemDefaultCharSize_1() { return static_cast<int32_t>(offsetof(Marshal_t3633690676_StaticFields, ___SystemDefaultCharSize_1)); }
	inline int32_t get_SystemDefaultCharSize_1() const { return ___SystemDefaultCharSize_1; }
	inline int32_t* get_address_of_SystemDefaultCharSize_1() { return &___SystemDefaultCharSize_1; }
	inline void set_SystemDefaultCharSize_1(int32_t value)
	{
		___SystemDefaultCharSize_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHAL_T3633690676_H
#ifndef ACTIVATIONSERVICES_T3005230739_H
#define ACTIVATIONSERVICES_T3005230739_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.ActivationServices
struct  ActivationServices_t3005230739  : public RuntimeObject
{
public:

public:
};

struct ActivationServices_t3005230739_StaticFields
{
public:
	// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Activation.ActivationServices::_constructionActivator
	RuntimeObject* ____constructionActivator_0;

public:
	inline static int32_t get_offset_of__constructionActivator_0() { return static_cast<int32_t>(offsetof(ActivationServices_t3005230739_StaticFields, ____constructionActivator_0)); }
	inline RuntimeObject* get__constructionActivator_0() const { return ____constructionActivator_0; }
	inline RuntimeObject** get_address_of__constructionActivator_0() { return &____constructionActivator_0; }
	inline void set__constructionActivator_0(RuntimeObject* value)
	{
		____constructionActivator_0 = value;
		Il2CppCodeGenWriteBarrier((&____constructionActivator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIVATIONSERVICES_T3005230739_H
#ifndef APPDOMAINLEVELACTIVATOR_T2377117537_H
#define APPDOMAINLEVELACTIVATOR_T2377117537_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.AppDomainLevelActivator
struct  AppDomainLevelActivator_t2377117537  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.Activation.AppDomainLevelActivator::_activationUrl
	String_t* ____activationUrl_0;
	// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Activation.AppDomainLevelActivator::_next
	RuntimeObject* ____next_1;

public:
	inline static int32_t get_offset_of__activationUrl_0() { return static_cast<int32_t>(offsetof(AppDomainLevelActivator_t2377117537, ____activationUrl_0)); }
	inline String_t* get__activationUrl_0() const { return ____activationUrl_0; }
	inline String_t** get_address_of__activationUrl_0() { return &____activationUrl_0; }
	inline void set__activationUrl_0(String_t* value)
	{
		____activationUrl_0 = value;
		Il2CppCodeGenWriteBarrier((&____activationUrl_0), value);
	}

	inline static int32_t get_offset_of__next_1() { return static_cast<int32_t>(offsetof(AppDomainLevelActivator_t2377117537, ____next_1)); }
	inline RuntimeObject* get__next_1() const { return ____next_1; }
	inline RuntimeObject** get_address_of__next_1() { return &____next_1; }
	inline void set__next_1(RuntimeObject* value)
	{
		____next_1 = value;
		Il2CppCodeGenWriteBarrier((&____next_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPDOMAINLEVELACTIVATOR_T2377117537_H
#ifndef CONSTRUCTIONLEVELACTIVATOR_T3286430133_H
#define CONSTRUCTIONLEVELACTIVATOR_T3286430133_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.ConstructionLevelActivator
struct  ConstructionLevelActivator_t3286430133  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRUCTIONLEVELACTIVATOR_T3286430133_H
#ifndef ERRORWRAPPER_T662527816_H
#define ERRORWRAPPER_T662527816_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ErrorWrapper
struct  ErrorWrapper_t662527816  : public RuntimeObject
{
public:
	// System.Int32 System.Runtime.InteropServices.ErrorWrapper::errorCode
	int32_t ___errorCode_0;

public:
	inline static int32_t get_offset_of_errorCode_0() { return static_cast<int32_t>(offsetof(ErrorWrapper_t662527816, ___errorCode_0)); }
	inline int32_t get_errorCode_0() const { return ___errorCode_0; }
	inline int32_t* get_address_of_errorCode_0() { return &___errorCode_0; }
	inline void set_errorCode_0(int32_t value)
	{
		___errorCode_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ERRORWRAPPER_T662527816_H
#ifndef CROSSAPPDOMAINDATA_T2983935392_H
#define CROSSAPPDOMAINDATA_T2983935392_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.CrossAppDomainData
struct  CrossAppDomainData_t2983935392  : public RuntimeObject
{
public:
	// System.Object System.Runtime.Remoting.Channels.CrossAppDomainData::_ContextID
	RuntimeObject * ____ContextID_0;
	// System.Int32 System.Runtime.Remoting.Channels.CrossAppDomainData::_DomainID
	int32_t ____DomainID_1;
	// System.String System.Runtime.Remoting.Channels.CrossAppDomainData::_processGuid
	String_t* ____processGuid_2;

public:
	inline static int32_t get_offset_of__ContextID_0() { return static_cast<int32_t>(offsetof(CrossAppDomainData_t2983935392, ____ContextID_0)); }
	inline RuntimeObject * get__ContextID_0() const { return ____ContextID_0; }
	inline RuntimeObject ** get_address_of__ContextID_0() { return &____ContextID_0; }
	inline void set__ContextID_0(RuntimeObject * value)
	{
		____ContextID_0 = value;
		Il2CppCodeGenWriteBarrier((&____ContextID_0), value);
	}

	inline static int32_t get_offset_of__DomainID_1() { return static_cast<int32_t>(offsetof(CrossAppDomainData_t2983935392, ____DomainID_1)); }
	inline int32_t get__DomainID_1() const { return ____DomainID_1; }
	inline int32_t* get_address_of__DomainID_1() { return &____DomainID_1; }
	inline void set__DomainID_1(int32_t value)
	{
		____DomainID_1 = value;
	}

	inline static int32_t get_offset_of__processGuid_2() { return static_cast<int32_t>(offsetof(CrossAppDomainData_t2983935392, ____processGuid_2)); }
	inline String_t* get__processGuid_2() const { return ____processGuid_2; }
	inline String_t** get_address_of__processGuid_2() { return &____processGuid_2; }
	inline void set__processGuid_2(String_t* value)
	{
		____processGuid_2 = value;
		Il2CppCodeGenWriteBarrier((&____processGuid_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CROSSAPPDOMAINDATA_T2983935392_H
#ifndef CONTEXTLEVELACTIVATOR_T3865744812_H
#define CONTEXTLEVELACTIVATOR_T3865744812_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.ContextLevelActivator
struct  ContextLevelActivator_t3865744812  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Activation.ContextLevelActivator::m_NextActivator
	RuntimeObject* ___m_NextActivator_0;

public:
	inline static int32_t get_offset_of_m_NextActivator_0() { return static_cast<int32_t>(offsetof(ContextLevelActivator_t3865744812, ___m_NextActivator_0)); }
	inline RuntimeObject* get_m_NextActivator_0() const { return ___m_NextActivator_0; }
	inline RuntimeObject** get_address_of_m_NextActivator_0() { return &___m_NextActivator_0; }
	inline void set_m_NextActivator_0(RuntimeObject* value)
	{
		___m_NextActivator_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_NextActivator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXTLEVELACTIVATOR_T3865744812_H
#ifndef CHANNELINFO_T3086940792_H
#define CHANNELINFO_T3086940792_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.ChannelInfo
struct  ChannelInfo_t3086940792  : public RuntimeObject
{
public:
	// System.Object[] System.Runtime.Remoting.ChannelInfo::channelData
	ObjectU5BU5D_t2353520700* ___channelData_0;

public:
	inline static int32_t get_offset_of_channelData_0() { return static_cast<int32_t>(offsetof(ChannelInfo_t3086940792, ___channelData_0)); }
	inline ObjectU5BU5D_t2353520700* get_channelData_0() const { return ___channelData_0; }
	inline ObjectU5BU5D_t2353520700** get_address_of_channelData_0() { return &___channelData_0; }
	inline void set_channelData_0(ObjectU5BU5D_t2353520700* value)
	{
		___channelData_0 = value;
		Il2CppCodeGenWriteBarrier((&___channelData_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANNELINFO_T3086940792_H
#ifndef SYSTEMEXCEPTION_T17446202_H
#define SYSTEMEXCEPTION_T17446202_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t17446202  : public Exception_t3220875092
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T17446202_H
#ifndef TYPELIBIMPORTCLASSATTRIBUTE_T1355468166_H
#define TYPELIBIMPORTCLASSATTRIBUTE_T1355468166_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.TypeLibImportClassAttribute
struct  TypeLibImportClassAttribute_t1355468166  : public Attribute_t862851146
{
public:
	// System.String System.Runtime.InteropServices.TypeLibImportClassAttribute::_importClass
	String_t* ____importClass_0;

public:
	inline static int32_t get_offset_of__importClass_0() { return static_cast<int32_t>(offsetof(TypeLibImportClassAttribute_t1355468166, ____importClass_0)); }
	inline String_t* get__importClass_0() const { return ____importClass_0; }
	inline String_t** get_address_of__importClass_0() { return &____importClass_0; }
	inline void set__importClass_0(String_t* value)
	{
		____importClass_0 = value;
		Il2CppCodeGenWriteBarrier((&____importClass_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPELIBIMPORTCLASSATTRIBUTE_T1355468166_H
#ifndef DISPIDATTRIBUTE_T3635667574_H
#define DISPIDATTRIBUTE_T3635667574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.DispIdAttribute
struct  DispIdAttribute_t3635667574  : public Attribute_t862851146
{
public:
	// System.Int32 System.Runtime.InteropServices.DispIdAttribute::id
	int32_t ___id_0;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(DispIdAttribute_t3635667574, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPIDATTRIBUTE_T3635667574_H
#ifndef UINTPTR_T_H
#define UINTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UIntPtr
struct  UIntPtr_t 
{
public:
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;

public:
	inline static int32_t get_offset_of__pointer_1() { return static_cast<int32_t>(offsetof(UIntPtr_t, ____pointer_1)); }
	inline void* get__pointer_1() const { return ____pointer_1; }
	inline void** get_address_of__pointer_1() { return &____pointer_1; }
	inline void set__pointer_1(void* value)
	{
		____pointer_1 = value;
	}
};

struct UIntPtr_t_StaticFields
{
public:
	// System.UIntPtr System.UIntPtr::Zero
	UIntPtr_t  ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(UIntPtr_t_StaticFields, ___Zero_0)); }
	inline UIntPtr_t  get_Zero_0() const { return ___Zero_0; }
	inline UIntPtr_t * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(UIntPtr_t  value)
	{
		___Zero_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINTPTR_T_H
#ifndef CONTEXTBOUNDOBJECT_T3600348129_H
#define CONTEXTBOUNDOBJECT_T3600348129_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ContextBoundObject
struct  ContextBoundObject_t3600348129  : public MarshalByRefObject_t4153876328
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXTBOUNDOBJECT_T3600348129_H
#ifndef ENUM_T808023010_H
#define ENUM_T808023010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t808023010  : public ValueType_t3061744109
{
public:

public:
};

struct Enum_t808023010_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t2218717181* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t808023010_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t2218717181* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t2218717181** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t2218717181* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t808023010_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t808023010_marshaled_com
{
};
#endif // ENUM_T808023010_H
#ifndef METHODCALLDICTIONARY_T3631173038_H
#define METHODCALLDICTIONARY_T3631173038_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.MethodCallDictionary
struct  MethodCallDictionary_t3631173038  : public MethodDictionary_t870439230
{
public:

public:
};

struct MethodCallDictionary_t3631173038_StaticFields
{
public:
	// System.String[] System.Runtime.Remoting.Messaging.MethodCallDictionary::InternalKeys
	StringU5BU5D_t2332754599* ___InternalKeys_6;

public:
	inline static int32_t get_offset_of_InternalKeys_6() { return static_cast<int32_t>(offsetof(MethodCallDictionary_t3631173038_StaticFields, ___InternalKeys_6)); }
	inline StringU5BU5D_t2332754599* get_InternalKeys_6() const { return ___InternalKeys_6; }
	inline StringU5BU5D_t2332754599** get_address_of_InternalKeys_6() { return &___InternalKeys_6; }
	inline void set_InternalKeys_6(StringU5BU5D_t2332754599* value)
	{
		___InternalKeys_6 = value;
		Il2CppCodeGenWriteBarrier((&___InternalKeys_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODCALLDICTIONARY_T3631173038_H
#ifndef PRESERVESIGATTRIBUTE_T1180099458_H
#define PRESERVESIGATTRIBUTE_T1180099458_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.PreserveSigAttribute
struct  PreserveSigAttribute_t1180099458  : public Attribute_t862851146
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRESERVESIGATTRIBUTE_T1180099458_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	IntPtr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline IntPtr_t get_Zero_1() const { return ___Zero_1; }
	inline IntPtr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(IntPtr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef GCHANDLE_T3454817880_H
#define GCHANDLE_T3454817880_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t3454817880 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t3454817880, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLE_T3454817880_H
#ifndef CONSTRUCTIONCALLDICTIONARY_T2686331325_H
#define CONSTRUCTIONCALLDICTIONARY_T2686331325_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.ConstructionCallDictionary
struct  ConstructionCallDictionary_t2686331325  : public MethodDictionary_t870439230
{
public:

public:
};

struct ConstructionCallDictionary_t2686331325_StaticFields
{
public:
	// System.String[] System.Runtime.Remoting.Messaging.ConstructionCallDictionary::InternalKeys
	StringU5BU5D_t2332754599* ___InternalKeys_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.Messaging.ConstructionCallDictionary::<>f__switch$map23
	Dictionary_2_t3825759196 * ___U3CU3Ef__switchU24map23_7;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.Messaging.ConstructionCallDictionary::<>f__switch$map24
	Dictionary_2_t3825759196 * ___U3CU3Ef__switchU24map24_8;

public:
	inline static int32_t get_offset_of_InternalKeys_6() { return static_cast<int32_t>(offsetof(ConstructionCallDictionary_t2686331325_StaticFields, ___InternalKeys_6)); }
	inline StringU5BU5D_t2332754599* get_InternalKeys_6() const { return ___InternalKeys_6; }
	inline StringU5BU5D_t2332754599** get_address_of_InternalKeys_6() { return &___InternalKeys_6; }
	inline void set_InternalKeys_6(StringU5BU5D_t2332754599* value)
	{
		___InternalKeys_6 = value;
		Il2CppCodeGenWriteBarrier((&___InternalKeys_6), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map23_7() { return static_cast<int32_t>(offsetof(ConstructionCallDictionary_t2686331325_StaticFields, ___U3CU3Ef__switchU24map23_7)); }
	inline Dictionary_2_t3825759196 * get_U3CU3Ef__switchU24map23_7() const { return ___U3CU3Ef__switchU24map23_7; }
	inline Dictionary_2_t3825759196 ** get_address_of_U3CU3Ef__switchU24map23_7() { return &___U3CU3Ef__switchU24map23_7; }
	inline void set_U3CU3Ef__switchU24map23_7(Dictionary_2_t3825759196 * value)
	{
		___U3CU3Ef__switchU24map23_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map23_7), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map24_8() { return static_cast<int32_t>(offsetof(ConstructionCallDictionary_t2686331325_StaticFields, ___U3CU3Ef__switchU24map24_8)); }
	inline Dictionary_2_t3825759196 * get_U3CU3Ef__switchU24map24_8() const { return ___U3CU3Ef__switchU24map24_8; }
	inline Dictionary_2_t3825759196 ** get_address_of_U3CU3Ef__switchU24map24_8() { return &___U3CU3Ef__switchU24map24_8; }
	inline void set_U3CU3Ef__switchU24map24_8(Dictionary_2_t3825759196 * value)
	{
		___U3CU3Ef__switchU24map24_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map24_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRUCTIONCALLDICTIONARY_T2686331325_H
#ifndef TYPELIBVERSIONATTRIBUTE_T3560779850_H
#define TYPELIBVERSIONATTRIBUTE_T3560779850_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.TypeLibVersionAttribute
struct  TypeLibVersionAttribute_t3560779850  : public Attribute_t862851146
{
public:
	// System.Int32 System.Runtime.InteropServices.TypeLibVersionAttribute::major
	int32_t ___major_0;
	// System.Int32 System.Runtime.InteropServices.TypeLibVersionAttribute::minor
	int32_t ___minor_1;

public:
	inline static int32_t get_offset_of_major_0() { return static_cast<int32_t>(offsetof(TypeLibVersionAttribute_t3560779850, ___major_0)); }
	inline int32_t get_major_0() const { return ___major_0; }
	inline int32_t* get_address_of_major_0() { return &___major_0; }
	inline void set_major_0(int32_t value)
	{
		___major_0 = value;
	}

	inline static int32_t get_offset_of_minor_1() { return static_cast<int32_t>(offsetof(TypeLibVersionAttribute_t3560779850, ___minor_1)); }
	inline int32_t get_minor_1() const { return ___minor_1; }
	inline int32_t* get_address_of_minor_1() { return &___minor_1; }
	inline void set_minor_1(int32_t value)
	{
		___minor_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPELIBVERSIONATTRIBUTE_T3560779850_H
#ifndef REMOTEACTIVATOR_T558197887_H
#define REMOTEACTIVATOR_T558197887_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.RemoteActivator
struct  RemoteActivator_t558197887  : public MarshalByRefObject_t4153876328
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTEACTIVATOR_T558197887_H
#ifndef CONTEXTATTRIBUTE_T702818140_H
#define CONTEXTATTRIBUTE_T702818140_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.ContextAttribute
struct  ContextAttribute_t702818140  : public Attribute_t862851146
{
public:
	// System.String System.Runtime.Remoting.Contexts.ContextAttribute::AttributeName
	String_t* ___AttributeName_0;

public:
	inline static int32_t get_offset_of_AttributeName_0() { return static_cast<int32_t>(offsetof(ContextAttribute_t702818140, ___AttributeName_0)); }
	inline String_t* get_AttributeName_0() const { return ___AttributeName_0; }
	inline String_t** get_address_of_AttributeName_0() { return &___AttributeName_0; }
	inline void set_AttributeName_0(String_t* value)
	{
		___AttributeName_0 = value;
		Il2CppCodeGenWriteBarrier((&___AttributeName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXTATTRIBUTE_T702818140_H
#ifndef TIMESPAN_T3493746183_H
#define TIMESPAN_T3493746183_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t3493746183 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t3493746183, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t3493746183_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t3493746183  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t3493746183  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t3493746183  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t3493746183_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t3493746183  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t3493746183 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t3493746183  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t3493746183_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t3493746183  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t3493746183 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t3493746183  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t3493746183_StaticFields, ___Zero_2)); }
	inline TimeSpan_t3493746183  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t3493746183 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t3493746183  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T3493746183_H
#ifndef CONSTRUCTIONCALL_T1782353890_H
#define CONSTRUCTIONCALL_T1782353890_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.ConstructionCall
struct  ConstructionCall_t1782353890  : public MethodCall_t4009424417
{
public:
	// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Messaging.ConstructionCall::_activator
	RuntimeObject* ____activator_11;
	// System.Object[] System.Runtime.Remoting.Messaging.ConstructionCall::_activationAttributes
	ObjectU5BU5D_t2353520700* ____activationAttributes_12;
	// System.Collections.IList System.Runtime.Remoting.Messaging.ConstructionCall::_contextProperties
	RuntimeObject* ____contextProperties_13;
	// System.Type System.Runtime.Remoting.Messaging.ConstructionCall::_activationType
	Type_t * ____activationType_14;
	// System.String System.Runtime.Remoting.Messaging.ConstructionCall::_activationTypeName
	String_t* ____activationTypeName_15;
	// System.Boolean System.Runtime.Remoting.Messaging.ConstructionCall::_isContextOk
	bool ____isContextOk_16;

public:
	inline static int32_t get_offset_of__activator_11() { return static_cast<int32_t>(offsetof(ConstructionCall_t1782353890, ____activator_11)); }
	inline RuntimeObject* get__activator_11() const { return ____activator_11; }
	inline RuntimeObject** get_address_of__activator_11() { return &____activator_11; }
	inline void set__activator_11(RuntimeObject* value)
	{
		____activator_11 = value;
		Il2CppCodeGenWriteBarrier((&____activator_11), value);
	}

	inline static int32_t get_offset_of__activationAttributes_12() { return static_cast<int32_t>(offsetof(ConstructionCall_t1782353890, ____activationAttributes_12)); }
	inline ObjectU5BU5D_t2353520700* get__activationAttributes_12() const { return ____activationAttributes_12; }
	inline ObjectU5BU5D_t2353520700** get_address_of__activationAttributes_12() { return &____activationAttributes_12; }
	inline void set__activationAttributes_12(ObjectU5BU5D_t2353520700* value)
	{
		____activationAttributes_12 = value;
		Il2CppCodeGenWriteBarrier((&____activationAttributes_12), value);
	}

	inline static int32_t get_offset_of__contextProperties_13() { return static_cast<int32_t>(offsetof(ConstructionCall_t1782353890, ____contextProperties_13)); }
	inline RuntimeObject* get__contextProperties_13() const { return ____contextProperties_13; }
	inline RuntimeObject** get_address_of__contextProperties_13() { return &____contextProperties_13; }
	inline void set__contextProperties_13(RuntimeObject* value)
	{
		____contextProperties_13 = value;
		Il2CppCodeGenWriteBarrier((&____contextProperties_13), value);
	}

	inline static int32_t get_offset_of__activationType_14() { return static_cast<int32_t>(offsetof(ConstructionCall_t1782353890, ____activationType_14)); }
	inline Type_t * get__activationType_14() const { return ____activationType_14; }
	inline Type_t ** get_address_of__activationType_14() { return &____activationType_14; }
	inline void set__activationType_14(Type_t * value)
	{
		____activationType_14 = value;
		Il2CppCodeGenWriteBarrier((&____activationType_14), value);
	}

	inline static int32_t get_offset_of__activationTypeName_15() { return static_cast<int32_t>(offsetof(ConstructionCall_t1782353890, ____activationTypeName_15)); }
	inline String_t* get__activationTypeName_15() const { return ____activationTypeName_15; }
	inline String_t** get_address_of__activationTypeName_15() { return &____activationTypeName_15; }
	inline void set__activationTypeName_15(String_t* value)
	{
		____activationTypeName_15 = value;
		Il2CppCodeGenWriteBarrier((&____activationTypeName_15), value);
	}

	inline static int32_t get_offset_of__isContextOk_16() { return static_cast<int32_t>(offsetof(ConstructionCall_t1782353890, ____isContextOk_16)); }
	inline bool get__isContextOk_16() const { return ____isContextOk_16; }
	inline bool* get_address_of__isContextOk_16() { return &____isContextOk_16; }
	inline void set__isContextOk_16(bool value)
	{
		____isContextOk_16 = value;
	}
};

struct ConstructionCall_t1782353890_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.Messaging.ConstructionCall::<>f__switch$map20
	Dictionary_2_t3825759196 * ___U3CU3Ef__switchU24map20_17;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map20_17() { return static_cast<int32_t>(offsetof(ConstructionCall_t1782353890_StaticFields, ___U3CU3Ef__switchU24map20_17)); }
	inline Dictionary_2_t3825759196 * get_U3CU3Ef__switchU24map20_17() const { return ___U3CU3Ef__switchU24map20_17; }
	inline Dictionary_2_t3825759196 ** get_address_of_U3CU3Ef__switchU24map20_17() { return &___U3CU3Ef__switchU24map20_17; }
	inline void set_U3CU3Ef__switchU24map20_17(Dictionary_2_t3825759196 * value)
	{
		___U3CU3Ef__switchU24map20_17 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map20_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRUCTIONCALL_T1782353890_H
#ifndef URLATTRIBUTE_T3574621541_H
#define URLATTRIBUTE_T3574621541_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.UrlAttribute
struct  UrlAttribute_t3574621541  : public ContextAttribute_t702818140
{
public:
	// System.String System.Runtime.Remoting.Activation.UrlAttribute::url
	String_t* ___url_1;

public:
	inline static int32_t get_offset_of_url_1() { return static_cast<int32_t>(offsetof(UrlAttribute_t3574621541, ___url_1)); }
	inline String_t* get_url_1() const { return ___url_1; }
	inline String_t** get_address_of_url_1() { return &___url_1; }
	inline void set_url_1(String_t* value)
	{
		___url_1 = value;
		Il2CppCodeGenWriteBarrier((&___url_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URLATTRIBUTE_T3574621541_H
#ifndef CONTEXT_T3668501578_H
#define CONTEXT_T3668501578_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.Context
struct  Context_t3668501578  : public RuntimeObject
{
public:
	// System.Int32 System.Runtime.Remoting.Contexts.Context::domain_id
	int32_t ___domain_id_0;
	// System.Int32 System.Runtime.Remoting.Contexts.Context::context_id
	int32_t ___context_id_1;
	// System.UIntPtr System.Runtime.Remoting.Contexts.Context::static_data
	UIntPtr_t  ___static_data_2;
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.Context::server_context_sink_chain
	RuntimeObject* ___server_context_sink_chain_4;
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.Context::client_context_sink_chain
	RuntimeObject* ___client_context_sink_chain_5;
	// System.Object[] System.Runtime.Remoting.Contexts.Context::datastore
	ObjectU5BU5D_t2353520700* ___datastore_6;
	// System.Collections.ArrayList System.Runtime.Remoting.Contexts.Context::context_properties
	ArrayList_t4132554469 * ___context_properties_7;
	// System.Boolean System.Runtime.Remoting.Contexts.Context::frozen
	bool ___frozen_8;
	// System.Runtime.Remoting.Contexts.DynamicPropertyCollection System.Runtime.Remoting.Contexts.Context::context_dynamic_properties
	DynamicPropertyCollection_t1178344104 * ___context_dynamic_properties_12;
	// System.Runtime.Remoting.Contexts.ContextCallbackObject System.Runtime.Remoting.Contexts.Context::callback_object
	ContextCallbackObject_t697299629 * ___callback_object_13;

public:
	inline static int32_t get_offset_of_domain_id_0() { return static_cast<int32_t>(offsetof(Context_t3668501578, ___domain_id_0)); }
	inline int32_t get_domain_id_0() const { return ___domain_id_0; }
	inline int32_t* get_address_of_domain_id_0() { return &___domain_id_0; }
	inline void set_domain_id_0(int32_t value)
	{
		___domain_id_0 = value;
	}

	inline static int32_t get_offset_of_context_id_1() { return static_cast<int32_t>(offsetof(Context_t3668501578, ___context_id_1)); }
	inline int32_t get_context_id_1() const { return ___context_id_1; }
	inline int32_t* get_address_of_context_id_1() { return &___context_id_1; }
	inline void set_context_id_1(int32_t value)
	{
		___context_id_1 = value;
	}

	inline static int32_t get_offset_of_static_data_2() { return static_cast<int32_t>(offsetof(Context_t3668501578, ___static_data_2)); }
	inline UIntPtr_t  get_static_data_2() const { return ___static_data_2; }
	inline UIntPtr_t * get_address_of_static_data_2() { return &___static_data_2; }
	inline void set_static_data_2(UIntPtr_t  value)
	{
		___static_data_2 = value;
	}

	inline static int32_t get_offset_of_server_context_sink_chain_4() { return static_cast<int32_t>(offsetof(Context_t3668501578, ___server_context_sink_chain_4)); }
	inline RuntimeObject* get_server_context_sink_chain_4() const { return ___server_context_sink_chain_4; }
	inline RuntimeObject** get_address_of_server_context_sink_chain_4() { return &___server_context_sink_chain_4; }
	inline void set_server_context_sink_chain_4(RuntimeObject* value)
	{
		___server_context_sink_chain_4 = value;
		Il2CppCodeGenWriteBarrier((&___server_context_sink_chain_4), value);
	}

	inline static int32_t get_offset_of_client_context_sink_chain_5() { return static_cast<int32_t>(offsetof(Context_t3668501578, ___client_context_sink_chain_5)); }
	inline RuntimeObject* get_client_context_sink_chain_5() const { return ___client_context_sink_chain_5; }
	inline RuntimeObject** get_address_of_client_context_sink_chain_5() { return &___client_context_sink_chain_5; }
	inline void set_client_context_sink_chain_5(RuntimeObject* value)
	{
		___client_context_sink_chain_5 = value;
		Il2CppCodeGenWriteBarrier((&___client_context_sink_chain_5), value);
	}

	inline static int32_t get_offset_of_datastore_6() { return static_cast<int32_t>(offsetof(Context_t3668501578, ___datastore_6)); }
	inline ObjectU5BU5D_t2353520700* get_datastore_6() const { return ___datastore_6; }
	inline ObjectU5BU5D_t2353520700** get_address_of_datastore_6() { return &___datastore_6; }
	inline void set_datastore_6(ObjectU5BU5D_t2353520700* value)
	{
		___datastore_6 = value;
		Il2CppCodeGenWriteBarrier((&___datastore_6), value);
	}

	inline static int32_t get_offset_of_context_properties_7() { return static_cast<int32_t>(offsetof(Context_t3668501578, ___context_properties_7)); }
	inline ArrayList_t4132554469 * get_context_properties_7() const { return ___context_properties_7; }
	inline ArrayList_t4132554469 ** get_address_of_context_properties_7() { return &___context_properties_7; }
	inline void set_context_properties_7(ArrayList_t4132554469 * value)
	{
		___context_properties_7 = value;
		Il2CppCodeGenWriteBarrier((&___context_properties_7), value);
	}

	inline static int32_t get_offset_of_frozen_8() { return static_cast<int32_t>(offsetof(Context_t3668501578, ___frozen_8)); }
	inline bool get_frozen_8() const { return ___frozen_8; }
	inline bool* get_address_of_frozen_8() { return &___frozen_8; }
	inline void set_frozen_8(bool value)
	{
		___frozen_8 = value;
	}

	inline static int32_t get_offset_of_context_dynamic_properties_12() { return static_cast<int32_t>(offsetof(Context_t3668501578, ___context_dynamic_properties_12)); }
	inline DynamicPropertyCollection_t1178344104 * get_context_dynamic_properties_12() const { return ___context_dynamic_properties_12; }
	inline DynamicPropertyCollection_t1178344104 ** get_address_of_context_dynamic_properties_12() { return &___context_dynamic_properties_12; }
	inline void set_context_dynamic_properties_12(DynamicPropertyCollection_t1178344104 * value)
	{
		___context_dynamic_properties_12 = value;
		Il2CppCodeGenWriteBarrier((&___context_dynamic_properties_12), value);
	}

	inline static int32_t get_offset_of_callback_object_13() { return static_cast<int32_t>(offsetof(Context_t3668501578, ___callback_object_13)); }
	inline ContextCallbackObject_t697299629 * get_callback_object_13() const { return ___callback_object_13; }
	inline ContextCallbackObject_t697299629 ** get_address_of_callback_object_13() { return &___callback_object_13; }
	inline void set_callback_object_13(ContextCallbackObject_t697299629 * value)
	{
		___callback_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___callback_object_13), value);
	}
};

struct Context_t3668501578_StaticFields
{
public:
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Contexts.Context::default_server_context_sink
	RuntimeObject* ___default_server_context_sink_3;
	// System.Int32 System.Runtime.Remoting.Contexts.Context::global_count
	int32_t ___global_count_9;
	// System.Collections.Hashtable System.Runtime.Remoting.Contexts.Context::namedSlots
	Hashtable_t110396805 * ___namedSlots_10;
	// System.Runtime.Remoting.Contexts.DynamicPropertyCollection System.Runtime.Remoting.Contexts.Context::global_dynamic_properties
	DynamicPropertyCollection_t1178344104 * ___global_dynamic_properties_11;

public:
	inline static int32_t get_offset_of_default_server_context_sink_3() { return static_cast<int32_t>(offsetof(Context_t3668501578_StaticFields, ___default_server_context_sink_3)); }
	inline RuntimeObject* get_default_server_context_sink_3() const { return ___default_server_context_sink_3; }
	inline RuntimeObject** get_address_of_default_server_context_sink_3() { return &___default_server_context_sink_3; }
	inline void set_default_server_context_sink_3(RuntimeObject* value)
	{
		___default_server_context_sink_3 = value;
		Il2CppCodeGenWriteBarrier((&___default_server_context_sink_3), value);
	}

	inline static int32_t get_offset_of_global_count_9() { return static_cast<int32_t>(offsetof(Context_t3668501578_StaticFields, ___global_count_9)); }
	inline int32_t get_global_count_9() const { return ___global_count_9; }
	inline int32_t* get_address_of_global_count_9() { return &___global_count_9; }
	inline void set_global_count_9(int32_t value)
	{
		___global_count_9 = value;
	}

	inline static int32_t get_offset_of_namedSlots_10() { return static_cast<int32_t>(offsetof(Context_t3668501578_StaticFields, ___namedSlots_10)); }
	inline Hashtable_t110396805 * get_namedSlots_10() const { return ___namedSlots_10; }
	inline Hashtable_t110396805 ** get_address_of_namedSlots_10() { return &___namedSlots_10; }
	inline void set_namedSlots_10(Hashtable_t110396805 * value)
	{
		___namedSlots_10 = value;
		Il2CppCodeGenWriteBarrier((&___namedSlots_10), value);
	}

	inline static int32_t get_offset_of_global_dynamic_properties_11() { return static_cast<int32_t>(offsetof(Context_t3668501578_StaticFields, ___global_dynamic_properties_11)); }
	inline DynamicPropertyCollection_t1178344104 * get_global_dynamic_properties_11() const { return ___global_dynamic_properties_11; }
	inline DynamicPropertyCollection_t1178344104 ** get_address_of_global_dynamic_properties_11() { return &___global_dynamic_properties_11; }
	inline void set_global_dynamic_properties_11(DynamicPropertyCollection_t1178344104 * value)
	{
		___global_dynamic_properties_11 = value;
		Il2CppCodeGenWriteBarrier((&___global_dynamic_properties_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXT_T3668501578_H
#ifndef CALLINGCONVENTION_T2060314664_H
#define CALLINGCONVENTION_T2060314664_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.CallingConvention
struct  CallingConvention_t2060314664 
{
public:
	// System.Int32 System.Runtime.InteropServices.CallingConvention::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CallingConvention_t2060314664, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALLINGCONVENTION_T2060314664_H
#ifndef CONTEXTCALLBACKOBJECT_T697299629_H
#define CONTEXTCALLBACKOBJECT_T697299629_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.ContextCallbackObject
struct  ContextCallbackObject_t697299629  : public ContextBoundObject_t3600348129
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXTCALLBACKOBJECT_T697299629_H
#ifndef EXTERNALEXCEPTION_T282183335_H
#define EXTERNALEXCEPTION_T282183335_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ExternalException
struct  ExternalException_t282183335  : public SystemException_t17446202
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTERNALEXCEPTION_T282183335_H
#ifndef SYNCHRONIZATIONATTRIBUTE_T2214088928_H
#define SYNCHRONIZATIONATTRIBUTE_T2214088928_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.SynchronizationAttribute
struct  SynchronizationAttribute_t2214088928  : public ContextAttribute_t702818140
{
public:
	// System.Boolean System.Runtime.Remoting.Contexts.SynchronizationAttribute::_bReEntrant
	bool ____bReEntrant_1;
	// System.Int32 System.Runtime.Remoting.Contexts.SynchronizationAttribute::_flavor
	int32_t ____flavor_2;
	// System.Int32 System.Runtime.Remoting.Contexts.SynchronizationAttribute::_lockCount
	int32_t ____lockCount_3;
	// System.Threading.Mutex System.Runtime.Remoting.Contexts.SynchronizationAttribute::_mutex
	Mutex_t189777844 * ____mutex_4;
	// System.Threading.Thread System.Runtime.Remoting.Contexts.SynchronizationAttribute::_ownerThread
	Thread_t1234154217 * ____ownerThread_5;

public:
	inline static int32_t get_offset_of__bReEntrant_1() { return static_cast<int32_t>(offsetof(SynchronizationAttribute_t2214088928, ____bReEntrant_1)); }
	inline bool get__bReEntrant_1() const { return ____bReEntrant_1; }
	inline bool* get_address_of__bReEntrant_1() { return &____bReEntrant_1; }
	inline void set__bReEntrant_1(bool value)
	{
		____bReEntrant_1 = value;
	}

	inline static int32_t get_offset_of__flavor_2() { return static_cast<int32_t>(offsetof(SynchronizationAttribute_t2214088928, ____flavor_2)); }
	inline int32_t get__flavor_2() const { return ____flavor_2; }
	inline int32_t* get_address_of__flavor_2() { return &____flavor_2; }
	inline void set__flavor_2(int32_t value)
	{
		____flavor_2 = value;
	}

	inline static int32_t get_offset_of__lockCount_3() { return static_cast<int32_t>(offsetof(SynchronizationAttribute_t2214088928, ____lockCount_3)); }
	inline int32_t get__lockCount_3() const { return ____lockCount_3; }
	inline int32_t* get_address_of__lockCount_3() { return &____lockCount_3; }
	inline void set__lockCount_3(int32_t value)
	{
		____lockCount_3 = value;
	}

	inline static int32_t get_offset_of__mutex_4() { return static_cast<int32_t>(offsetof(SynchronizationAttribute_t2214088928, ____mutex_4)); }
	inline Mutex_t189777844 * get__mutex_4() const { return ____mutex_4; }
	inline Mutex_t189777844 ** get_address_of__mutex_4() { return &____mutex_4; }
	inline void set__mutex_4(Mutex_t189777844 * value)
	{
		____mutex_4 = value;
		Il2CppCodeGenWriteBarrier((&____mutex_4), value);
	}

	inline static int32_t get_offset_of__ownerThread_5() { return static_cast<int32_t>(offsetof(SynchronizationAttribute_t2214088928, ____ownerThread_5)); }
	inline Thread_t1234154217 * get__ownerThread_5() const { return ____ownerThread_5; }
	inline Thread_t1234154217 ** get_address_of__ownerThread_5() { return &____ownerThread_5; }
	inline void set__ownerThread_5(Thread_t1234154217 * value)
	{
		____ownerThread_5 = value;
		Il2CppCodeGenWriteBarrier((&____ownerThread_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHRONIZATIONATTRIBUTE_T2214088928_H
#ifndef UNMANAGEDTYPE_T3308016961_H
#define UNMANAGEDTYPE_T3308016961_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.UnmanagedType
struct  UnmanagedType_t3308016961 
{
public:
	// System.Int32 System.Runtime.InteropServices.UnmanagedType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnmanagedType_t3308016961, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNMANAGEDTYPE_T3308016961_H
#ifndef LIFETIMESERVICES_T3960190027_H
#define LIFETIMESERVICES_T3960190027_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Lifetime.LifetimeServices
struct  LifetimeServices_t3960190027  : public RuntimeObject
{
public:

public:
};

struct LifetimeServices_t3960190027_StaticFields
{
public:
	// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::_leaseManagerPollTime
	TimeSpan_t3493746183  ____leaseManagerPollTime_0;
	// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::_leaseTime
	TimeSpan_t3493746183  ____leaseTime_1;
	// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::_renewOnCallTime
	TimeSpan_t3493746183  ____renewOnCallTime_2;
	// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::_sponsorshipTimeout
	TimeSpan_t3493746183  ____sponsorshipTimeout_3;
	// System.Runtime.Remoting.Lifetime.LeaseManager System.Runtime.Remoting.Lifetime.LifetimeServices::_leaseManager
	LeaseManager_t1909612471 * ____leaseManager_4;

public:
	inline static int32_t get_offset_of__leaseManagerPollTime_0() { return static_cast<int32_t>(offsetof(LifetimeServices_t3960190027_StaticFields, ____leaseManagerPollTime_0)); }
	inline TimeSpan_t3493746183  get__leaseManagerPollTime_0() const { return ____leaseManagerPollTime_0; }
	inline TimeSpan_t3493746183 * get_address_of__leaseManagerPollTime_0() { return &____leaseManagerPollTime_0; }
	inline void set__leaseManagerPollTime_0(TimeSpan_t3493746183  value)
	{
		____leaseManagerPollTime_0 = value;
	}

	inline static int32_t get_offset_of__leaseTime_1() { return static_cast<int32_t>(offsetof(LifetimeServices_t3960190027_StaticFields, ____leaseTime_1)); }
	inline TimeSpan_t3493746183  get__leaseTime_1() const { return ____leaseTime_1; }
	inline TimeSpan_t3493746183 * get_address_of__leaseTime_1() { return &____leaseTime_1; }
	inline void set__leaseTime_1(TimeSpan_t3493746183  value)
	{
		____leaseTime_1 = value;
	}

	inline static int32_t get_offset_of__renewOnCallTime_2() { return static_cast<int32_t>(offsetof(LifetimeServices_t3960190027_StaticFields, ____renewOnCallTime_2)); }
	inline TimeSpan_t3493746183  get__renewOnCallTime_2() const { return ____renewOnCallTime_2; }
	inline TimeSpan_t3493746183 * get_address_of__renewOnCallTime_2() { return &____renewOnCallTime_2; }
	inline void set__renewOnCallTime_2(TimeSpan_t3493746183  value)
	{
		____renewOnCallTime_2 = value;
	}

	inline static int32_t get_offset_of__sponsorshipTimeout_3() { return static_cast<int32_t>(offsetof(LifetimeServices_t3960190027_StaticFields, ____sponsorshipTimeout_3)); }
	inline TimeSpan_t3493746183  get__sponsorshipTimeout_3() const { return ____sponsorshipTimeout_3; }
	inline TimeSpan_t3493746183 * get_address_of__sponsorshipTimeout_3() { return &____sponsorshipTimeout_3; }
	inline void set__sponsorshipTimeout_3(TimeSpan_t3493746183  value)
	{
		____sponsorshipTimeout_3 = value;
	}

	inline static int32_t get_offset_of__leaseManager_4() { return static_cast<int32_t>(offsetof(LifetimeServices_t3960190027_StaticFields, ____leaseManager_4)); }
	inline LeaseManager_t1909612471 * get__leaseManager_4() const { return ____leaseManager_4; }
	inline LeaseManager_t1909612471 ** get_address_of__leaseManager_4() { return &____leaseManager_4; }
	inline void set__leaseManager_4(LeaseManager_t1909612471 * value)
	{
		____leaseManager_4 = value;
		Il2CppCodeGenWriteBarrier((&____leaseManager_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIFETIMESERVICES_T3960190027_H
#ifndef ARGINFOTYPE_T2250722431_H
#define ARGINFOTYPE_T2250722431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.ArgInfoType
struct  ArgInfoType_t2250722431 
{
public:
	// System.Byte System.Runtime.Remoting.Messaging.ArgInfoType::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ArgInfoType_t2250722431, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGINFOTYPE_T2250722431_H
#ifndef MARSHALDIRECTIVEEXCEPTION_T4002986885_H
#define MARSHALDIRECTIVEEXCEPTION_T4002986885_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.MarshalDirectiveException
struct  MarshalDirectiveException_t4002986885  : public SystemException_t17446202
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALDIRECTIVEEXCEPTION_T4002986885_H
#ifndef SAFEHANDLE_T2405360779_H
#define SAFEHANDLE_T2405360779_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.SafeHandle
struct  SafeHandle_t2405360779  : public CriticalFinalizerObject_t1715998574
{
public:
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::handle
	IntPtr_t ___handle_0;
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::invalid_handle_value
	IntPtr_t ___invalid_handle_value_1;
	// System.Int32 System.Runtime.InteropServices.SafeHandle::refcount
	int32_t ___refcount_2;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::owns_handle
	bool ___owns_handle_3;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(SafeHandle_t2405360779, ___handle_0)); }
	inline IntPtr_t get_handle_0() const { return ___handle_0; }
	inline IntPtr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(IntPtr_t value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of_invalid_handle_value_1() { return static_cast<int32_t>(offsetof(SafeHandle_t2405360779, ___invalid_handle_value_1)); }
	inline IntPtr_t get_invalid_handle_value_1() const { return ___invalid_handle_value_1; }
	inline IntPtr_t* get_address_of_invalid_handle_value_1() { return &___invalid_handle_value_1; }
	inline void set_invalid_handle_value_1(IntPtr_t value)
	{
		___invalid_handle_value_1 = value;
	}

	inline static int32_t get_offset_of_refcount_2() { return static_cast<int32_t>(offsetof(SafeHandle_t2405360779, ___refcount_2)); }
	inline int32_t get_refcount_2() const { return ___refcount_2; }
	inline int32_t* get_address_of_refcount_2() { return &___refcount_2; }
	inline void set_refcount_2(int32_t value)
	{
		___refcount_2 = value;
	}

	inline static int32_t get_offset_of_owns_handle_3() { return static_cast<int32_t>(offsetof(SafeHandle_t2405360779, ___owns_handle_3)); }
	inline bool get_owns_handle_3() const { return ___owns_handle_3; }
	inline bool* get_address_of_owns_handle_3() { return &___owns_handle_3; }
	inline void set_owns_handle_3(bool value)
	{
		___owns_handle_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEHANDLE_T2405360779_H
#ifndef ASYNCRESULT_T1049892587_H
#define ASYNCRESULT_T1049892587_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.AsyncResult
struct  AsyncResult_t1049892587  : public RuntimeObject
{
public:
	// System.Object System.Runtime.Remoting.Messaging.AsyncResult::async_state
	RuntimeObject * ___async_state_0;
	// System.Threading.WaitHandle System.Runtime.Remoting.Messaging.AsyncResult::handle
	WaitHandle_t1453219373 * ___handle_1;
	// System.Object System.Runtime.Remoting.Messaging.AsyncResult::async_delegate
	RuntimeObject * ___async_delegate_2;
	// System.IntPtr System.Runtime.Remoting.Messaging.AsyncResult::data
	IntPtr_t ___data_3;
	// System.Object System.Runtime.Remoting.Messaging.AsyncResult::object_data
	RuntimeObject * ___object_data_4;
	// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::sync_completed
	bool ___sync_completed_5;
	// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::completed
	bool ___completed_6;
	// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::endinvoke_called
	bool ___endinvoke_called_7;
	// System.Object System.Runtime.Remoting.Messaging.AsyncResult::async_callback
	RuntimeObject * ___async_callback_8;
	// System.Threading.ExecutionContext System.Runtime.Remoting.Messaging.AsyncResult::current
	ExecutionContext_t42445931 * ___current_9;
	// System.Threading.ExecutionContext System.Runtime.Remoting.Messaging.AsyncResult::original
	ExecutionContext_t42445931 * ___original_10;
	// System.Int32 System.Runtime.Remoting.Messaging.AsyncResult::gchandle
	int32_t ___gchandle_11;
	// System.Runtime.Remoting.Messaging.MonoMethodMessage System.Runtime.Remoting.Messaging.AsyncResult::call_message
	MonoMethodMessage_t2546458307 * ___call_message_12;
	// System.Runtime.Remoting.Messaging.IMessageCtrl System.Runtime.Remoting.Messaging.AsyncResult::message_ctrl
	RuntimeObject* ___message_ctrl_13;
	// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::reply_message
	RuntimeObject* ___reply_message_14;

public:
	inline static int32_t get_offset_of_async_state_0() { return static_cast<int32_t>(offsetof(AsyncResult_t1049892587, ___async_state_0)); }
	inline RuntimeObject * get_async_state_0() const { return ___async_state_0; }
	inline RuntimeObject ** get_address_of_async_state_0() { return &___async_state_0; }
	inline void set_async_state_0(RuntimeObject * value)
	{
		___async_state_0 = value;
		Il2CppCodeGenWriteBarrier((&___async_state_0), value);
	}

	inline static int32_t get_offset_of_handle_1() { return static_cast<int32_t>(offsetof(AsyncResult_t1049892587, ___handle_1)); }
	inline WaitHandle_t1453219373 * get_handle_1() const { return ___handle_1; }
	inline WaitHandle_t1453219373 ** get_address_of_handle_1() { return &___handle_1; }
	inline void set_handle_1(WaitHandle_t1453219373 * value)
	{
		___handle_1 = value;
		Il2CppCodeGenWriteBarrier((&___handle_1), value);
	}

	inline static int32_t get_offset_of_async_delegate_2() { return static_cast<int32_t>(offsetof(AsyncResult_t1049892587, ___async_delegate_2)); }
	inline RuntimeObject * get_async_delegate_2() const { return ___async_delegate_2; }
	inline RuntimeObject ** get_address_of_async_delegate_2() { return &___async_delegate_2; }
	inline void set_async_delegate_2(RuntimeObject * value)
	{
		___async_delegate_2 = value;
		Il2CppCodeGenWriteBarrier((&___async_delegate_2), value);
	}

	inline static int32_t get_offset_of_data_3() { return static_cast<int32_t>(offsetof(AsyncResult_t1049892587, ___data_3)); }
	inline IntPtr_t get_data_3() const { return ___data_3; }
	inline IntPtr_t* get_address_of_data_3() { return &___data_3; }
	inline void set_data_3(IntPtr_t value)
	{
		___data_3 = value;
	}

	inline static int32_t get_offset_of_object_data_4() { return static_cast<int32_t>(offsetof(AsyncResult_t1049892587, ___object_data_4)); }
	inline RuntimeObject * get_object_data_4() const { return ___object_data_4; }
	inline RuntimeObject ** get_address_of_object_data_4() { return &___object_data_4; }
	inline void set_object_data_4(RuntimeObject * value)
	{
		___object_data_4 = value;
		Il2CppCodeGenWriteBarrier((&___object_data_4), value);
	}

	inline static int32_t get_offset_of_sync_completed_5() { return static_cast<int32_t>(offsetof(AsyncResult_t1049892587, ___sync_completed_5)); }
	inline bool get_sync_completed_5() const { return ___sync_completed_5; }
	inline bool* get_address_of_sync_completed_5() { return &___sync_completed_5; }
	inline void set_sync_completed_5(bool value)
	{
		___sync_completed_5 = value;
	}

	inline static int32_t get_offset_of_completed_6() { return static_cast<int32_t>(offsetof(AsyncResult_t1049892587, ___completed_6)); }
	inline bool get_completed_6() const { return ___completed_6; }
	inline bool* get_address_of_completed_6() { return &___completed_6; }
	inline void set_completed_6(bool value)
	{
		___completed_6 = value;
	}

	inline static int32_t get_offset_of_endinvoke_called_7() { return static_cast<int32_t>(offsetof(AsyncResult_t1049892587, ___endinvoke_called_7)); }
	inline bool get_endinvoke_called_7() const { return ___endinvoke_called_7; }
	inline bool* get_address_of_endinvoke_called_7() { return &___endinvoke_called_7; }
	inline void set_endinvoke_called_7(bool value)
	{
		___endinvoke_called_7 = value;
	}

	inline static int32_t get_offset_of_async_callback_8() { return static_cast<int32_t>(offsetof(AsyncResult_t1049892587, ___async_callback_8)); }
	inline RuntimeObject * get_async_callback_8() const { return ___async_callback_8; }
	inline RuntimeObject ** get_address_of_async_callback_8() { return &___async_callback_8; }
	inline void set_async_callback_8(RuntimeObject * value)
	{
		___async_callback_8 = value;
		Il2CppCodeGenWriteBarrier((&___async_callback_8), value);
	}

	inline static int32_t get_offset_of_current_9() { return static_cast<int32_t>(offsetof(AsyncResult_t1049892587, ___current_9)); }
	inline ExecutionContext_t42445931 * get_current_9() const { return ___current_9; }
	inline ExecutionContext_t42445931 ** get_address_of_current_9() { return &___current_9; }
	inline void set_current_9(ExecutionContext_t42445931 * value)
	{
		___current_9 = value;
		Il2CppCodeGenWriteBarrier((&___current_9), value);
	}

	inline static int32_t get_offset_of_original_10() { return static_cast<int32_t>(offsetof(AsyncResult_t1049892587, ___original_10)); }
	inline ExecutionContext_t42445931 * get_original_10() const { return ___original_10; }
	inline ExecutionContext_t42445931 ** get_address_of_original_10() { return &___original_10; }
	inline void set_original_10(ExecutionContext_t42445931 * value)
	{
		___original_10 = value;
		Il2CppCodeGenWriteBarrier((&___original_10), value);
	}

	inline static int32_t get_offset_of_gchandle_11() { return static_cast<int32_t>(offsetof(AsyncResult_t1049892587, ___gchandle_11)); }
	inline int32_t get_gchandle_11() const { return ___gchandle_11; }
	inline int32_t* get_address_of_gchandle_11() { return &___gchandle_11; }
	inline void set_gchandle_11(int32_t value)
	{
		___gchandle_11 = value;
	}

	inline static int32_t get_offset_of_call_message_12() { return static_cast<int32_t>(offsetof(AsyncResult_t1049892587, ___call_message_12)); }
	inline MonoMethodMessage_t2546458307 * get_call_message_12() const { return ___call_message_12; }
	inline MonoMethodMessage_t2546458307 ** get_address_of_call_message_12() { return &___call_message_12; }
	inline void set_call_message_12(MonoMethodMessage_t2546458307 * value)
	{
		___call_message_12 = value;
		Il2CppCodeGenWriteBarrier((&___call_message_12), value);
	}

	inline static int32_t get_offset_of_message_ctrl_13() { return static_cast<int32_t>(offsetof(AsyncResult_t1049892587, ___message_ctrl_13)); }
	inline RuntimeObject* get_message_ctrl_13() const { return ___message_ctrl_13; }
	inline RuntimeObject** get_address_of_message_ctrl_13() { return &___message_ctrl_13; }
	inline void set_message_ctrl_13(RuntimeObject* value)
	{
		___message_ctrl_13 = value;
		Il2CppCodeGenWriteBarrier((&___message_ctrl_13), value);
	}

	inline static int32_t get_offset_of_reply_message_14() { return static_cast<int32_t>(offsetof(AsyncResult_t1049892587, ___reply_message_14)); }
	inline RuntimeObject* get_reply_message_14() const { return ___reply_message_14; }
	inline RuntimeObject** get_address_of_reply_message_14() { return &___reply_message_14; }
	inline void set_reply_message_14(RuntimeObject* value)
	{
		___reply_message_14 = value;
		Il2CppCodeGenWriteBarrier((&___reply_message_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCRESULT_T1049892587_H
#ifndef GCHANDLETYPE_T2545021518_H
#define GCHANDLETYPE_T2545021518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandleType
struct  GCHandleType_t2545021518 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandleType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(GCHandleType_t2545021518, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLETYPE_T2545021518_H
#ifndef COMINTERFACETYPE_T2013217660_H
#define COMINTERFACETYPE_T2013217660_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComInterfaceType
struct  ComInterfaceType_t2013217660 
{
public:
	// System.Int32 System.Runtime.InteropServices.ComInterfaceType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ComInterfaceType_t2013217660, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMINTERFACETYPE_T2013217660_H
#ifndef INTERFACETYPEATTRIBUTE_T947765005_H
#define INTERFACETYPEATTRIBUTE_T947765005_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.InterfaceTypeAttribute
struct  InterfaceTypeAttribute_t947765005  : public Attribute_t862851146
{
public:
	// System.Runtime.InteropServices.ComInterfaceType System.Runtime.InteropServices.InterfaceTypeAttribute::intType
	int32_t ___intType_0;

public:
	inline static int32_t get_offset_of_intType_0() { return static_cast<int32_t>(offsetof(InterfaceTypeAttribute_t947765005, ___intType_0)); }
	inline int32_t get_intType_0() const { return ___intType_0; }
	inline int32_t* get_address_of_intType_0() { return &___intType_0; }
	inline void set_intType_0(int32_t value)
	{
		___intType_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERFACETYPEATTRIBUTE_T947765005_H
#ifndef UNMANAGEDFUNCTIONPOINTERATTRIBUTE_T3702940313_H
#define UNMANAGEDFUNCTIONPOINTERATTRIBUTE_T3702940313_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute
struct  UnmanagedFunctionPointerAttribute_t3702940313  : public Attribute_t862851146
{
public:
	// System.Runtime.InteropServices.CallingConvention System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute::call_conv
	int32_t ___call_conv_0;

public:
	inline static int32_t get_offset_of_call_conv_0() { return static_cast<int32_t>(offsetof(UnmanagedFunctionPointerAttribute_t3702940313, ___call_conv_0)); }
	inline int32_t get_call_conv_0() const { return ___call_conv_0; }
	inline int32_t* get_address_of_call_conv_0() { return &___call_conv_0; }
	inline void set_call_conv_0(int32_t value)
	{
		___call_conv_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNMANAGEDFUNCTIONPOINTERATTRIBUTE_T3702940313_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize400 = { sizeof (ComInterfaceType_t2013217660)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable400[4] = 
{
	ComInterfaceType_t2013217660::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize401 = { sizeof (DispIdAttribute_t3635667574), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable401[1] = 
{
	DispIdAttribute_t3635667574::get_offset_of_id_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize402 = { sizeof (ErrorWrapper_t662527816), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable402[1] = 
{
	ErrorWrapper_t662527816::get_offset_of_errorCode_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize403 = { sizeof (ExternalException_t282183335), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize404 = { sizeof (GCHandle_t3454817880)+ sizeof (RuntimeObject), sizeof(GCHandle_t3454817880 ), 0, 0 };
extern const int32_t g_FieldOffsetTable404[1] = 
{
	GCHandle_t3454817880::get_offset_of_handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize405 = { sizeof (GCHandleType_t2545021518)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable405[5] = 
{
	GCHandleType_t2545021518::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize406 = { sizeof (InterfaceTypeAttribute_t947765005), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable406[1] = 
{
	InterfaceTypeAttribute_t947765005::get_offset_of_intType_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize407 = { sizeof (Marshal_t3633690676), -1, sizeof(Marshal_t3633690676_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable407[2] = 
{
	Marshal_t3633690676_StaticFields::get_offset_of_SystemMaxDBCSCharSize_0(),
	Marshal_t3633690676_StaticFields::get_offset_of_SystemDefaultCharSize_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize408 = { sizeof (MarshalDirectiveException_t4002986885), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable408[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize409 = { sizeof (PreserveSigAttribute_t1180099458), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize410 = { sizeof (SafeHandle_t2405360779), sizeof(void*), 0, 0 };
extern const int32_t g_FieldOffsetTable410[4] = 
{
	SafeHandle_t2405360779::get_offset_of_handle_0(),
	SafeHandle_t2405360779::get_offset_of_invalid_handle_value_1(),
	SafeHandle_t2405360779::get_offset_of_refcount_2(),
	SafeHandle_t2405360779::get_offset_of_owns_handle_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize411 = { sizeof (TypeLibImportClassAttribute_t1355468166), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable411[1] = 
{
	TypeLibImportClassAttribute_t1355468166::get_offset_of__importClass_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize412 = { sizeof (TypeLibVersionAttribute_t3560779850), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable412[2] = 
{
	TypeLibVersionAttribute_t3560779850::get_offset_of_major_0(),
	TypeLibVersionAttribute_t3560779850::get_offset_of_minor_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize413 = { sizeof (UnmanagedFunctionPointerAttribute_t3702940313), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable413[1] = 
{
	UnmanagedFunctionPointerAttribute_t3702940313::get_offset_of_call_conv_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize414 = { sizeof (UnmanagedType_t3308016961)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable414[36] = 
{
	UnmanagedType_t3308016961::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize415 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize416 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize417 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize418 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize419 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize420 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize421 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize422 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize423 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize424 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize425 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize426 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize427 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize428 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize429 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize430 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize431 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize432 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize433 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize434 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize435 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize436 = { sizeof (ActivationServices_t3005230739), -1, sizeof(ActivationServices_t3005230739_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable436[1] = 
{
	ActivationServices_t3005230739_StaticFields::get_offset_of__constructionActivator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize437 = { sizeof (AppDomainLevelActivator_t2377117537), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable437[2] = 
{
	AppDomainLevelActivator_t2377117537::get_offset_of__activationUrl_0(),
	AppDomainLevelActivator_t2377117537::get_offset_of__next_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize438 = { sizeof (ConstructionLevelActivator_t3286430133), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize439 = { sizeof (ContextLevelActivator_t3865744812), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable439[1] = 
{
	ContextLevelActivator_t3865744812::get_offset_of_m_NextActivator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize440 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize441 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize442 = { sizeof (RemoteActivator_t558197887), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize443 = { sizeof (UrlAttribute_t3574621541), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable443[1] = 
{
	UrlAttribute_t3574621541::get_offset_of_url_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize444 = { sizeof (ChannelInfo_t3086940792), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable444[1] = 
{
	ChannelInfo_t3086940792::get_offset_of_channelData_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize445 = { sizeof (ChannelServices_t3916398954), -1, sizeof(ChannelServices_t3916398954_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable445[5] = 
{
	ChannelServices_t3916398954_StaticFields::get_offset_of_registeredChannels_0(),
	ChannelServices_t3916398954_StaticFields::get_offset_of_delayedClientChannels_1(),
	ChannelServices_t3916398954_StaticFields::get_offset_of__crossContextSink_2(),
	ChannelServices_t3916398954_StaticFields::get_offset_of_CrossContextUrl_3(),
	ChannelServices_t3916398954_StaticFields::get_offset_of_oldStartModeTypes_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize446 = { sizeof (CrossAppDomainData_t2983935392), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable446[3] = 
{
	CrossAppDomainData_t2983935392::get_offset_of__ContextID_0(),
	CrossAppDomainData_t2983935392::get_offset_of__DomainID_1(),
	CrossAppDomainData_t2983935392::get_offset_of__processGuid_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize447 = { sizeof (CrossAppDomainChannel_t297096014), -1, sizeof(CrossAppDomainChannel_t297096014_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable447[1] = 
{
	CrossAppDomainChannel_t297096014_StaticFields::get_offset_of_s_lock_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize448 = { sizeof (CrossAppDomainSink_t931237273), -1, sizeof(CrossAppDomainSink_t931237273_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable448[3] = 
{
	CrossAppDomainSink_t931237273_StaticFields::get_offset_of_s_sinks_0(),
	CrossAppDomainSink_t931237273_StaticFields::get_offset_of_processMessageMethod_1(),
	CrossAppDomainSink_t931237273::get_offset_of__domainID_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize449 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize450 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize451 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize452 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize453 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize454 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize455 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize456 = { sizeof (SinkProviderData_t804748480), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable456[3] = 
{
	SinkProviderData_t804748480::get_offset_of_sinkName_0(),
	SinkProviderData_t804748480::get_offset_of_children_1(),
	SinkProviderData_t804748480::get_offset_of_properties_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize457 = { sizeof (Context_t3668501578), -1, sizeof(Context_t3668501578_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable457[14] = 
{
	Context_t3668501578::get_offset_of_domain_id_0(),
	Context_t3668501578::get_offset_of_context_id_1(),
	Context_t3668501578::get_offset_of_static_data_2(),
	Context_t3668501578_StaticFields::get_offset_of_default_server_context_sink_3(),
	Context_t3668501578::get_offset_of_server_context_sink_chain_4(),
	Context_t3668501578::get_offset_of_client_context_sink_chain_5(),
	Context_t3668501578::get_offset_of_datastore_6(),
	Context_t3668501578::get_offset_of_context_properties_7(),
	Context_t3668501578::get_offset_of_frozen_8(),
	Context_t3668501578_StaticFields::get_offset_of_global_count_9(),
	Context_t3668501578_StaticFields::get_offset_of_namedSlots_10(),
	Context_t3668501578_StaticFields::get_offset_of_global_dynamic_properties_11(),
	Context_t3668501578::get_offset_of_context_dynamic_properties_12(),
	Context_t3668501578::get_offset_of_callback_object_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize458 = { sizeof (DynamicPropertyCollection_t1178344104), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable458[1] = 
{
	DynamicPropertyCollection_t1178344104::get_offset_of__properties_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize459 = { sizeof (DynamicPropertyReg_t1062014171), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable459[2] = 
{
	DynamicPropertyReg_t1062014171::get_offset_of_Property_0(),
	DynamicPropertyReg_t1062014171::get_offset_of_Sink_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize460 = { sizeof (ContextCallbackObject_t697299629), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize461 = { sizeof (ContextAttribute_t702818140), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable461[1] = 
{
	ContextAttribute_t702818140::get_offset_of_AttributeName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize462 = { sizeof (CrossContextChannel_t2763432160), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize463 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize464 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize465 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize466 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize467 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize468 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize469 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize470 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize471 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize472 = { sizeof (SynchronizationAttribute_t2214088928), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable472[5] = 
{
	SynchronizationAttribute_t2214088928::get_offset_of__bReEntrant_1(),
	SynchronizationAttribute_t2214088928::get_offset_of__flavor_2(),
	SynchronizationAttribute_t2214088928::get_offset_of__lockCount_3(),
	SynchronizationAttribute_t2214088928::get_offset_of__mutex_4(),
	SynchronizationAttribute_t2214088928::get_offset_of__ownerThread_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize473 = { sizeof (SynchronizedClientContextSink_t3713868289), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable473[2] = 
{
	SynchronizedClientContextSink_t3713868289::get_offset_of__next_0(),
	SynchronizedClientContextSink_t3713868289::get_offset_of__att_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize474 = { sizeof (SynchronizedServerContextSink_t2601039728), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable474[2] = 
{
	SynchronizedServerContextSink_t2601039728::get_offset_of__next_0(),
	SynchronizedServerContextSink_t2601039728::get_offset_of__att_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize475 = { sizeof (LeaseManager_t1909612471), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable475[2] = 
{
	LeaseManager_t1909612471::get_offset_of__objects_0(),
	LeaseManager_t1909612471::get_offset_of__timer_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize476 = { sizeof (LeaseSink_t3149820929), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable476[1] = 
{
	LeaseSink_t3149820929::get_offset_of__nextSink_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize477 = { sizeof (LifetimeServices_t3960190027), -1, sizeof(LifetimeServices_t3960190027_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable477[5] = 
{
	LifetimeServices_t3960190027_StaticFields::get_offset_of__leaseManagerPollTime_0(),
	LifetimeServices_t3960190027_StaticFields::get_offset_of__leaseTime_1(),
	LifetimeServices_t3960190027_StaticFields::get_offset_of__renewOnCallTime_2(),
	LifetimeServices_t3960190027_StaticFields::get_offset_of__sponsorshipTimeout_3(),
	LifetimeServices_t3960190027_StaticFields::get_offset_of__leaseManager_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize478 = { sizeof (ArgInfoType_t2250722431)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable478[3] = 
{
	ArgInfoType_t2250722431::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize479 = { sizeof (ArgInfo_t1516951195), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable479[3] = 
{
	ArgInfo_t1516951195::get_offset_of__paramMap_0(),
	ArgInfo_t1516951195::get_offset_of__inoutArgCount_1(),
	ArgInfo_t1516951195::get_offset_of__method_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize480 = { sizeof (AsyncResult_t1049892587), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable480[15] = 
{
	AsyncResult_t1049892587::get_offset_of_async_state_0(),
	AsyncResult_t1049892587::get_offset_of_handle_1(),
	AsyncResult_t1049892587::get_offset_of_async_delegate_2(),
	AsyncResult_t1049892587::get_offset_of_data_3(),
	AsyncResult_t1049892587::get_offset_of_object_data_4(),
	AsyncResult_t1049892587::get_offset_of_sync_completed_5(),
	AsyncResult_t1049892587::get_offset_of_completed_6(),
	AsyncResult_t1049892587::get_offset_of_endinvoke_called_7(),
	AsyncResult_t1049892587::get_offset_of_async_callback_8(),
	AsyncResult_t1049892587::get_offset_of_current_9(),
	AsyncResult_t1049892587::get_offset_of_original_10(),
	AsyncResult_t1049892587::get_offset_of_gchandle_11(),
	AsyncResult_t1049892587::get_offset_of_call_message_12(),
	AsyncResult_t1049892587::get_offset_of_message_ctrl_13(),
	AsyncResult_t1049892587::get_offset_of_reply_message_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize481 = { sizeof (ClientContextTerminatorSink_t1733852064), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable481[1] = 
{
	ClientContextTerminatorSink_t1733852064::get_offset_of__context_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize482 = { sizeof (ConstructionCall_t1782353890), -1, sizeof(ConstructionCall_t1782353890_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable482[7] = 
{
	ConstructionCall_t1782353890::get_offset_of__activator_11(),
	ConstructionCall_t1782353890::get_offset_of__activationAttributes_12(),
	ConstructionCall_t1782353890::get_offset_of__contextProperties_13(),
	ConstructionCall_t1782353890::get_offset_of__activationType_14(),
	ConstructionCall_t1782353890::get_offset_of__activationTypeName_15(),
	ConstructionCall_t1782353890::get_offset_of__isContextOk_16(),
	ConstructionCall_t1782353890_StaticFields::get_offset_of_U3CU3Ef__switchU24map20_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize483 = { sizeof (ConstructionCallDictionary_t2686331325), -1, sizeof(ConstructionCallDictionary_t2686331325_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable483[3] = 
{
	ConstructionCallDictionary_t2686331325_StaticFields::get_offset_of_InternalKeys_6(),
	ConstructionCallDictionary_t2686331325_StaticFields::get_offset_of_U3CU3Ef__switchU24map23_7(),
	ConstructionCallDictionary_t2686331325_StaticFields::get_offset_of_U3CU3Ef__switchU24map24_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize484 = { sizeof (EnvoyTerminatorSink_t3479444128), -1, sizeof(EnvoyTerminatorSink_t3479444128_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable484[1] = 
{
	EnvoyTerminatorSink_t3479444128_StaticFields::get_offset_of_Instance_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize485 = { sizeof (Header_t3247917065), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable485[4] = 
{
	Header_t3247917065::get_offset_of_HeaderNamespace_0(),
	Header_t3247917065::get_offset_of_MustUnderstand_1(),
	Header_t3247917065::get_offset_of_Name_2(),
	Header_t3247917065::get_offset_of_Value_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize486 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize487 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize488 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize489 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize490 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize491 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize492 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize493 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize494 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize495 = { sizeof (LogicalCallContext_t4224332165), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable495[2] = 
{
	LogicalCallContext_t4224332165::get_offset_of__data_0(),
	LogicalCallContext_t4224332165::get_offset_of__remotingData_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize496 = { sizeof (CallContextRemotingData_t638146523), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable496[1] = 
{
	CallContextRemotingData_t638146523::get_offset_of__logicalCallID_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize497 = { sizeof (MethodCall_t4009424417), -1, sizeof(MethodCall_t4009424417_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable497[11] = 
{
	MethodCall_t4009424417::get_offset_of__uri_0(),
	MethodCall_t4009424417::get_offset_of__typeName_1(),
	MethodCall_t4009424417::get_offset_of__methodName_2(),
	MethodCall_t4009424417::get_offset_of__args_3(),
	MethodCall_t4009424417::get_offset_of__methodSignature_4(),
	MethodCall_t4009424417::get_offset_of__methodBase_5(),
	MethodCall_t4009424417::get_offset_of__callContext_6(),
	MethodCall_t4009424417::get_offset_of__genericArguments_7(),
	MethodCall_t4009424417::get_offset_of_ExternalProperties_8(),
	MethodCall_t4009424417::get_offset_of_InternalProperties_9(),
	MethodCall_t4009424417_StaticFields::get_offset_of_U3CU3Ef__switchU24map1F_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize498 = { sizeof (MethodCallDictionary_t3631173038), -1, sizeof(MethodCallDictionary_t3631173038_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable498[1] = 
{
	MethodCallDictionary_t3631173038_StaticFields::get_offset_of_InternalKeys_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize499 = { sizeof (MethodDictionary_t870439230), -1, sizeof(MethodDictionary_t870439230_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable499[6] = 
{
	MethodDictionary_t870439230::get_offset_of__internalProperties_0(),
	MethodDictionary_t870439230::get_offset_of__message_1(),
	MethodDictionary_t870439230::get_offset_of__methodKeys_2(),
	MethodDictionary_t870439230::get_offset_of__ownProperties_3(),
	MethodDictionary_t870439230_StaticFields::get_offset_of_U3CU3Ef__switchU24map21_4(),
	MethodDictionary_t870439230_StaticFields::get_offset_of_U3CU3Ef__switchU24map22_5(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
