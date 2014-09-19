/*
 * IDENTIFICATION:
 * stub generated Wed Sep  3 11:41:38 2014
 * with a MiG generated by bootstrap_cmds-86
 * OPTIONS: 
 */
#define	__MIG_check__Reply__eapolcfg_auth_subsystem__ 1

#include "eapolcfg_auth.h"


#ifndef	mig_internal
#define	mig_internal	static __inline__
#endif	/* mig_internal */

#ifndef	mig_external
#define mig_external
#endif	/* mig_external */

#if	!defined(__MigTypeCheck) && defined(TypeCheck)
#define	__MigTypeCheck		TypeCheck	/* Legacy setting */
#endif	/* !defined(__MigTypeCheck) */

#if	!defined(__MigKernelSpecificCode) && defined(_MIG_KERNEL_SPECIFIC_CODE_)
#define	__MigKernelSpecificCode	_MIG_KERNEL_SPECIFIC_CODE_	/* Legacy setting */
#endif	/* !defined(__MigKernelSpecificCode) */

#ifndef	LimitCheck
#define	LimitCheck 0
#endif	/* LimitCheck */

#ifndef	min
#define	min(a,b)  ( ((a) < (b))? (a): (b) )
#endif	/* min */

#if !defined(_WALIGN_)
#define _WALIGN_(x) (((x) + 3) & ~3)
#endif /* !defined(_WALIGN_) */

#if !defined(_WALIGNSZ_)
#define _WALIGNSZ_(x) _WALIGN_(sizeof(x))
#endif /* !defined(_WALIGNSZ_) */

#ifndef	UseStaticTemplates
#define	UseStaticTemplates	0
#endif	/* UseStaticTemplates */

#ifndef	__MachMsgErrorWithTimeout
#define	__MachMsgErrorWithTimeout(_R_) { \
	switch (_R_) { \
	case MACH_SEND_INVALID_DATA: \
	case MACH_SEND_INVALID_DEST: \
	case MACH_SEND_INVALID_HEADER: \
		mig_put_reply_port(InP->Head.msgh_reply_port); \
		break; \
	case MACH_SEND_TIMED_OUT: \
	case MACH_RCV_TIMED_OUT: \
	default: \
		mig_dealloc_reply_port(InP->Head.msgh_reply_port); \
	} \
}
#endif	/* __MachMsgErrorWithTimeout */

#ifndef	__MachMsgErrorWithoutTimeout
#define	__MachMsgErrorWithoutTimeout(_R_) { \
	switch (_R_) { \
	case MACH_SEND_INVALID_DATA: \
	case MACH_SEND_INVALID_DEST: \
	case MACH_SEND_INVALID_HEADER: \
		mig_put_reply_port(InP->Head.msgh_reply_port); \
		break; \
	default: \
		mig_dealloc_reply_port(InP->Head.msgh_reply_port); \
	} \
}
#endif	/* __MachMsgErrorWithoutTimeout */

#ifndef	__DeclareSendRpc
#define	__DeclareSendRpc(_NUM_, _NAME_)
#endif	/* __DeclareSendRpc */

#ifndef	__BeforeSendRpc
#define	__BeforeSendRpc(_NUM_, _NAME_)
#endif	/* __BeforeSendRpc */

#ifndef	__AfterSendRpc
#define	__AfterSendRpc(_NUM_, _NAME_)
#endif	/* __AfterSendRpc */

#ifndef	__DeclareSendSimple
#define	__DeclareSendSimple(_NUM_, _NAME_)
#endif	/* __DeclareSendSimple */

#ifndef	__BeforeSendSimple
#define	__BeforeSendSimple(_NUM_, _NAME_)
#endif	/* __BeforeSendSimple */

#ifndef	__AfterSendSimple
#define	__AfterSendSimple(_NUM_, _NAME_)
#endif	/* __AfterSendSimple */

#define msgh_request_port	msgh_remote_port
#define msgh_reply_port		msgh_local_port



#if ( __MigTypeCheck )
#if __MIG_check__Reply__eapolcfg_auth_subsystem__
#if !defined(__MIG_check__Reply__eapolclientitemid_set_identity_t__defined)
#define __MIG_check__Reply__eapolclientitemid_set_identity_t__defined

mig_internal kern_return_t __MIG_check__Reply__eapolclientitemid_set_identity_t(__Reply__eapolclientitemid_set_identity_t *Out0P)
{

	typedef __Reply__eapolclientitemid_set_identity_t __Reply;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 22100) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    ((msgh_size != (mach_msg_size_t)sizeof(__Reply)) &&
	     (msgh_size != (mach_msg_size_t)sizeof(mig_reply_error_t) ||
	      Out0P->RetCode == KERN_SUCCESS)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

	if (Out0P->RetCode != KERN_SUCCESS) {
		return ((mig_reply_error_t *)Out0P)->RetCode;
	}

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__eapolclientitemid_set_identity_t__defined) */
#endif /* __MIG_check__Reply__eapolcfg_auth_subsystem__ */
#endif /* ( __MigTypeCheck ) */


/* Routine eapolclientitemid_set_identity */
mig_external kern_return_t eapolclientitemid_set_identity
(
	mach_port_t server,
	OOBData_t auth_data,
	mach_msg_type_number_t auth_dataCnt,
	xmlData_t itemID_data,
	mach_msg_type_number_t itemID_dataCnt,
	OOBData_t id_handle,
	mach_msg_type_number_t id_handleCnt,
	int *result
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t auth_data;
		mach_msg_ool_descriptor_t itemID_data;
		mach_msg_ool_descriptor_t id_handle;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t auth_dataCnt;
		mach_msg_type_number_t itemID_dataCnt;
		mach_msg_type_number_t id_handleCnt;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		int result;
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		int result;
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;

#ifdef	__MIG_check__Reply__eapolclientitemid_set_identity_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__eapolclientitemid_set_identity_t__defined */

	__DeclareSendRpc(22000, "eapolclientitemid_set_identity")

#if	UseStaticTemplates
	const static mach_msg_ool_descriptor_t auth_dataTemplate = {
		/* addr = */		(void *)0,
		/* size = */		0,
		/* deal = */		FALSE,
		/* copy = */		MACH_MSG_VIRTUAL_COPY,
		/* pad2 = */		0,
		/* type = */		MACH_MSG_OOL_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#if	UseStaticTemplates
	const static mach_msg_ool_descriptor_t itemID_dataTemplate = {
		/* addr = */		(void *)0,
		/* size = */		0,
		/* deal = */		FALSE,
		/* copy = */		MACH_MSG_VIRTUAL_COPY,
		/* pad2 = */		0,
		/* type = */		MACH_MSG_OOL_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#if	UseStaticTemplates
	const static mach_msg_ool_descriptor_t id_handleTemplate = {
		/* addr = */		(void *)0,
		/* size = */		0,
		/* deal = */		FALSE,
		/* copy = */		MACH_MSG_VIRTUAL_COPY,
		/* pad2 = */		0,
		/* type = */		MACH_MSG_OOL_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

	InP->msgh_body.msgh_descriptor_count = 3;
#if	UseStaticTemplates
	InP->auth_data = auth_dataTemplate;
	InP->auth_data.address = (void *)(auth_data);
	InP->auth_data.size = auth_dataCnt;
#else	/* UseStaticTemplates */
	InP->auth_data.address = (void *)(auth_data);
	InP->auth_data.size = auth_dataCnt;
	InP->auth_data.deallocate =  FALSE;
	InP->auth_data.copy = MACH_MSG_VIRTUAL_COPY;
	InP->auth_data.type = MACH_MSG_OOL_DESCRIPTOR;
#endif	/* UseStaticTemplates */

#if	UseStaticTemplates
	InP->itemID_data = itemID_dataTemplate;
	InP->itemID_data.address = (void *)(itemID_data);
	InP->itemID_data.size = itemID_dataCnt;
#else	/* UseStaticTemplates */
	InP->itemID_data.address = (void *)(itemID_data);
	InP->itemID_data.size = itemID_dataCnt;
	InP->itemID_data.deallocate =  FALSE;
	InP->itemID_data.copy = MACH_MSG_VIRTUAL_COPY;
	InP->itemID_data.type = MACH_MSG_OOL_DESCRIPTOR;
#endif	/* UseStaticTemplates */

#if	UseStaticTemplates
	InP->id_handle = id_handleTemplate;
	InP->id_handle.address = (void *)(id_handle);
	InP->id_handle.size = id_handleCnt;
#else	/* UseStaticTemplates */
	InP->id_handle.address = (void *)(id_handle);
	InP->id_handle.size = id_handleCnt;
	InP->id_handle.deallocate =  FALSE;
	InP->id_handle.copy = MACH_MSG_VIRTUAL_COPY;
	InP->id_handle.type = MACH_MSG_OOL_DESCRIPTOR;
#endif	/* UseStaticTemplates */

	InP->NDR = NDR_record;

	InP->auth_dataCnt = auth_dataCnt;

	InP->itemID_dataCnt = itemID_dataCnt;

	InP->id_handleCnt = id_handleCnt;

	InP->Head.msgh_bits = MACH_MSGH_BITS_COMPLEX|
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = server;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 22000;

	__BeforeSendRpc(22000, "eapolclientitemid_set_identity")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(22000, "eapolclientitemid_set_identity")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__eapolclientitemid_set_identity_t__defined)
	check_result = __MIG_check__Reply__eapolclientitemid_set_identity_t((__Reply__eapolclientitemid_set_identity_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__eapolclientitemid_set_identity_t__defined) */

	*result = Out0P->result;

	return KERN_SUCCESS;
}

#if ( __MigTypeCheck )
#if __MIG_check__Reply__eapolcfg_auth_subsystem__
#if !defined(__MIG_check__Reply__eapolclientitemid_set_password_t__defined)
#define __MIG_check__Reply__eapolclientitemid_set_password_t__defined

mig_internal kern_return_t __MIG_check__Reply__eapolclientitemid_set_password_t(__Reply__eapolclientitemid_set_password_t *Out0P)
{

	typedef __Reply__eapolclientitemid_set_password_t __Reply;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 22101) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    ((msgh_size != (mach_msg_size_t)sizeof(__Reply)) &&
	     (msgh_size != (mach_msg_size_t)sizeof(mig_reply_error_t) ||
	      Out0P->RetCode == KERN_SUCCESS)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

	if (Out0P->RetCode != KERN_SUCCESS) {
		return ((mig_reply_error_t *)Out0P)->RetCode;
	}

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__eapolclientitemid_set_password_t__defined) */
#endif /* __MIG_check__Reply__eapolcfg_auth_subsystem__ */
#endif /* ( __MigTypeCheck ) */


/* Routine eapolclientitemid_set_password */
mig_external kern_return_t eapolclientitemid_set_password
(
	mach_port_t server,
	OOBData_t auth_data,
	mach_msg_type_number_t auth_dataCnt,
	xmlData_t itemID_data,
	mach_msg_type_number_t itemID_dataCnt,
	uint32_t flags,
	OOBData_t name,
	mach_msg_type_number_t nameCnt,
	OOBData_t password,
	mach_msg_type_number_t passwordCnt,
	int *result
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t auth_data;
		mach_msg_ool_descriptor_t itemID_data;
		mach_msg_ool_descriptor_t name;
		mach_msg_ool_descriptor_t password;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t auth_dataCnt;
		mach_msg_type_number_t itemID_dataCnt;
		uint32_t flags;
		mach_msg_type_number_t nameCnt;
		mach_msg_type_number_t passwordCnt;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		int result;
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		int result;
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;

#ifdef	__MIG_check__Reply__eapolclientitemid_set_password_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__eapolclientitemid_set_password_t__defined */

	__DeclareSendRpc(22001, "eapolclientitemid_set_password")

#if	UseStaticTemplates
	const static mach_msg_ool_descriptor_t auth_dataTemplate = {
		/* addr = */		(void *)0,
		/* size = */		0,
		/* deal = */		FALSE,
		/* copy = */		MACH_MSG_VIRTUAL_COPY,
		/* pad2 = */		0,
		/* type = */		MACH_MSG_OOL_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#if	UseStaticTemplates
	const static mach_msg_ool_descriptor_t itemID_dataTemplate = {
		/* addr = */		(void *)0,
		/* size = */		0,
		/* deal = */		FALSE,
		/* copy = */		MACH_MSG_VIRTUAL_COPY,
		/* pad2 = */		0,
		/* type = */		MACH_MSG_OOL_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#if	UseStaticTemplates
	const static mach_msg_ool_descriptor_t nameTemplate = {
		/* addr = */		(void *)0,
		/* size = */		0,
		/* deal = */		FALSE,
		/* copy = */		MACH_MSG_VIRTUAL_COPY,
		/* pad2 = */		0,
		/* type = */		MACH_MSG_OOL_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#if	UseStaticTemplates
	const static mach_msg_ool_descriptor_t passwordTemplate = {
		/* addr = */		(void *)0,
		/* size = */		0,
		/* deal = */		FALSE,
		/* copy = */		MACH_MSG_VIRTUAL_COPY,
		/* pad2 = */		0,
		/* type = */		MACH_MSG_OOL_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

	InP->msgh_body.msgh_descriptor_count = 4;
#if	UseStaticTemplates
	InP->auth_data = auth_dataTemplate;
	InP->auth_data.address = (void *)(auth_data);
	InP->auth_data.size = auth_dataCnt;
#else	/* UseStaticTemplates */
	InP->auth_data.address = (void *)(auth_data);
	InP->auth_data.size = auth_dataCnt;
	InP->auth_data.deallocate =  FALSE;
	InP->auth_data.copy = MACH_MSG_VIRTUAL_COPY;
	InP->auth_data.type = MACH_MSG_OOL_DESCRIPTOR;
#endif	/* UseStaticTemplates */

#if	UseStaticTemplates
	InP->itemID_data = itemID_dataTemplate;
	InP->itemID_data.address = (void *)(itemID_data);
	InP->itemID_data.size = itemID_dataCnt;
#else	/* UseStaticTemplates */
	InP->itemID_data.address = (void *)(itemID_data);
	InP->itemID_data.size = itemID_dataCnt;
	InP->itemID_data.deallocate =  FALSE;
	InP->itemID_data.copy = MACH_MSG_VIRTUAL_COPY;
	InP->itemID_data.type = MACH_MSG_OOL_DESCRIPTOR;
#endif	/* UseStaticTemplates */

#if	UseStaticTemplates
	InP->name = nameTemplate;
	InP->name.address = (void *)(name);
	InP->name.size = nameCnt;
#else	/* UseStaticTemplates */
	InP->name.address = (void *)(name);
	InP->name.size = nameCnt;
	InP->name.deallocate =  FALSE;
	InP->name.copy = MACH_MSG_VIRTUAL_COPY;
	InP->name.type = MACH_MSG_OOL_DESCRIPTOR;
#endif	/* UseStaticTemplates */

#if	UseStaticTemplates
	InP->password = passwordTemplate;
	InP->password.address = (void *)(password);
	InP->password.size = passwordCnt;
#else	/* UseStaticTemplates */
	InP->password.address = (void *)(password);
	InP->password.size = passwordCnt;
	InP->password.deallocate =  FALSE;
	InP->password.copy = MACH_MSG_VIRTUAL_COPY;
	InP->password.type = MACH_MSG_OOL_DESCRIPTOR;
#endif	/* UseStaticTemplates */

	InP->NDR = NDR_record;

	InP->auth_dataCnt = auth_dataCnt;

	InP->itemID_dataCnt = itemID_dataCnt;

	InP->flags = flags;

	InP->nameCnt = nameCnt;

	InP->passwordCnt = passwordCnt;

	InP->Head.msgh_bits = MACH_MSGH_BITS_COMPLEX|
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = server;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 22001;

	__BeforeSendRpc(22001, "eapolclientitemid_set_password")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(22001, "eapolclientitemid_set_password")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__eapolclientitemid_set_password_t__defined)
	check_result = __MIG_check__Reply__eapolclientitemid_set_password_t((__Reply__eapolclientitemid_set_password_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__eapolclientitemid_set_password_t__defined) */

	*result = Out0P->result;

	return KERN_SUCCESS;
}

#if ( __MigTypeCheck )
#if __MIG_check__Reply__eapolcfg_auth_subsystem__
#if !defined(__MIG_check__Reply__eapolclientitemid_remove_password_t__defined)
#define __MIG_check__Reply__eapolclientitemid_remove_password_t__defined

mig_internal kern_return_t __MIG_check__Reply__eapolclientitemid_remove_password_t(__Reply__eapolclientitemid_remove_password_t *Out0P)
{

	typedef __Reply__eapolclientitemid_remove_password_t __Reply;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 22102) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    ((msgh_size != (mach_msg_size_t)sizeof(__Reply)) &&
	     (msgh_size != (mach_msg_size_t)sizeof(mig_reply_error_t) ||
	      Out0P->RetCode == KERN_SUCCESS)))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

	if (Out0P->RetCode != KERN_SUCCESS) {
		return ((mig_reply_error_t *)Out0P)->RetCode;
	}

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__eapolclientitemid_remove_password_t__defined) */
#endif /* __MIG_check__Reply__eapolcfg_auth_subsystem__ */
#endif /* ( __MigTypeCheck ) */


/* Routine eapolclientitemid_remove_password */
mig_external kern_return_t eapolclientitemid_remove_password
(
	mach_port_t server,
	OOBData_t auth_data,
	mach_msg_type_number_t auth_dataCnt,
	xmlData_t itemID_data,
	mach_msg_type_number_t itemID_dataCnt,
	int *result
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t auth_data;
		mach_msg_ool_descriptor_t itemID_data;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t auth_dataCnt;
		mach_msg_type_number_t itemID_dataCnt;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		int result;
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		int result;
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;

#ifdef	__MIG_check__Reply__eapolclientitemid_remove_password_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__eapolclientitemid_remove_password_t__defined */

	__DeclareSendRpc(22002, "eapolclientitemid_remove_password")

#if	UseStaticTemplates
	const static mach_msg_ool_descriptor_t auth_dataTemplate = {
		/* addr = */		(void *)0,
		/* size = */		0,
		/* deal = */		FALSE,
		/* copy = */		MACH_MSG_VIRTUAL_COPY,
		/* pad2 = */		0,
		/* type = */		MACH_MSG_OOL_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#if	UseStaticTemplates
	const static mach_msg_ool_descriptor_t itemID_dataTemplate = {
		/* addr = */		(void *)0,
		/* size = */		0,
		/* deal = */		FALSE,
		/* copy = */		MACH_MSG_VIRTUAL_COPY,
		/* pad2 = */		0,
		/* type = */		MACH_MSG_OOL_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

	InP->msgh_body.msgh_descriptor_count = 2;
#if	UseStaticTemplates
	InP->auth_data = auth_dataTemplate;
	InP->auth_data.address = (void *)(auth_data);
	InP->auth_data.size = auth_dataCnt;
#else	/* UseStaticTemplates */
	InP->auth_data.address = (void *)(auth_data);
	InP->auth_data.size = auth_dataCnt;
	InP->auth_data.deallocate =  FALSE;
	InP->auth_data.copy = MACH_MSG_VIRTUAL_COPY;
	InP->auth_data.type = MACH_MSG_OOL_DESCRIPTOR;
#endif	/* UseStaticTemplates */

#if	UseStaticTemplates
	InP->itemID_data = itemID_dataTemplate;
	InP->itemID_data.address = (void *)(itemID_data);
	InP->itemID_data.size = itemID_dataCnt;
#else	/* UseStaticTemplates */
	InP->itemID_data.address = (void *)(itemID_data);
	InP->itemID_data.size = itemID_dataCnt;
	InP->itemID_data.deallocate =  FALSE;
	InP->itemID_data.copy = MACH_MSG_VIRTUAL_COPY;
	InP->itemID_data.type = MACH_MSG_OOL_DESCRIPTOR;
#endif	/* UseStaticTemplates */

	InP->NDR = NDR_record;

	InP->auth_dataCnt = auth_dataCnt;

	InP->itemID_dataCnt = itemID_dataCnt;

	InP->Head.msgh_bits = MACH_MSGH_BITS_COMPLEX|
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = server;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 22002;

	__BeforeSendRpc(22002, "eapolclientitemid_remove_password")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(22002, "eapolclientitemid_remove_password")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__eapolclientitemid_remove_password_t__defined)
	check_result = __MIG_check__Reply__eapolclientitemid_remove_password_t((__Reply__eapolclientitemid_remove_password_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__eapolclientitemid_remove_password_t__defined) */

	*result = Out0P->result;

	return KERN_SUCCESS;
}

#if ( __MigTypeCheck )
#if __MIG_check__Reply__eapolcfg_auth_subsystem__
#if !defined(__MIG_check__Reply__eapolclientitemid_check_password_t__defined)
#define __MIG_check__Reply__eapolclientitemid_check_password_t__defined

mig_internal kern_return_t __MIG_check__Reply__eapolclientitemid_check_password_t(__Reply__eapolclientitemid_check_password_t *Out0P)
{

	typedef __Reply__eapolclientitemid_check_password_t __Reply;
	boolean_t msgh_simple;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */
	if (Out0P->Head.msgh_id != 22103) {
	    if (Out0P->Head.msgh_id == MACH_NOTIFY_SEND_ONCE)
		{ return MIG_SERVER_DIED; }
	    else
		{ return MIG_REPLY_MISMATCH; }
	}

	msgh_simple = !(Out0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX);
#if	__MigTypeCheck
	msgh_size = Out0P->Head.msgh_size;

	if ((msgh_simple || Out0P->msgh_body.msgh_descriptor_count != 1 ||
	    msgh_size != (mach_msg_size_t)sizeof(__Reply)) &&
	    (!msgh_simple || msgh_size != (mach_msg_size_t)sizeof(mig_reply_error_t) ||
	    ((mig_reply_error_t *)Out0P)->RetCode == KERN_SUCCESS))
		{ return MIG_TYPE_ERROR ; }
#endif	/* __MigTypeCheck */

	if (msgh_simple) {
		return ((mig_reply_error_t *)Out0P)->RetCode;
	}

#if	__MigTypeCheck
	if (Out0P->name.type != MACH_MSG_OOL_DESCRIPTOR) {
		return MIG_TYPE_ERROR;
	}
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Reply__eapolclientitemid_check_password_t__defined) */
#endif /* __MIG_check__Reply__eapolcfg_auth_subsystem__ */
#endif /* ( __MigTypeCheck ) */


/* Routine eapolclientitemid_check_password */
mig_external kern_return_t eapolclientitemid_check_password
(
	mach_port_t server,
	OOBData_t auth_data,
	mach_msg_type_number_t auth_dataCnt,
	xmlData_t itemID_data,
	mach_msg_type_number_t itemID_dataCnt,
	OOBDataOut_t *name,
	mach_msg_type_number_t *nameCnt,
	boolean_t *password_set,
	int *result
)
{

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t auth_data;
		mach_msg_ool_descriptor_t itemID_data;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t auth_dataCnt;
		mach_msg_type_number_t itemID_dataCnt;
	} Request;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t name;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t nameCnt;
		boolean_t password_set;
		int result;
		mach_msg_trailer_t trailer;
	} Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_ool_descriptor_t name;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t nameCnt;
		boolean_t password_set;
		int result;
	} __Reply;
#ifdef  __MigPackStructs
#pragma pack()
#endif
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	union {
		Request In;
		Reply Out;
	} Mess;

	Request *InP = &Mess.In;
	Reply *Out0P = &Mess.Out;

	mach_msg_return_t msg_result;

#ifdef	__MIG_check__Reply__eapolclientitemid_check_password_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Reply__eapolclientitemid_check_password_t__defined */

	__DeclareSendRpc(22003, "eapolclientitemid_check_password")

#if	UseStaticTemplates
	const static mach_msg_ool_descriptor_t auth_dataTemplate = {
		/* addr = */		(void *)0,
		/* size = */		0,
		/* deal = */		FALSE,
		/* copy = */		MACH_MSG_VIRTUAL_COPY,
		/* pad2 = */		0,
		/* type = */		MACH_MSG_OOL_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

#if	UseStaticTemplates
	const static mach_msg_ool_descriptor_t itemID_dataTemplate = {
		/* addr = */		(void *)0,
		/* size = */		0,
		/* deal = */		FALSE,
		/* copy = */		MACH_MSG_VIRTUAL_COPY,
		/* pad2 = */		0,
		/* type = */		MACH_MSG_OOL_DESCRIPTOR,
	};
#endif	/* UseStaticTemplates */

	InP->msgh_body.msgh_descriptor_count = 2;
#if	UseStaticTemplates
	InP->auth_data = auth_dataTemplate;
	InP->auth_data.address = (void *)(auth_data);
	InP->auth_data.size = auth_dataCnt;
#else	/* UseStaticTemplates */
	InP->auth_data.address = (void *)(auth_data);
	InP->auth_data.size = auth_dataCnt;
	InP->auth_data.deallocate =  FALSE;
	InP->auth_data.copy = MACH_MSG_VIRTUAL_COPY;
	InP->auth_data.type = MACH_MSG_OOL_DESCRIPTOR;
#endif	/* UseStaticTemplates */

#if	UseStaticTemplates
	InP->itemID_data = itemID_dataTemplate;
	InP->itemID_data.address = (void *)(itemID_data);
	InP->itemID_data.size = itemID_dataCnt;
#else	/* UseStaticTemplates */
	InP->itemID_data.address = (void *)(itemID_data);
	InP->itemID_data.size = itemID_dataCnt;
	InP->itemID_data.deallocate =  FALSE;
	InP->itemID_data.copy = MACH_MSG_VIRTUAL_COPY;
	InP->itemID_data.type = MACH_MSG_OOL_DESCRIPTOR;
#endif	/* UseStaticTemplates */

	InP->NDR = NDR_record;

	InP->auth_dataCnt = auth_dataCnt;

	InP->itemID_dataCnt = itemID_dataCnt;

	InP->Head.msgh_bits = MACH_MSGH_BITS_COMPLEX|
		MACH_MSGH_BITS(19, MACH_MSG_TYPE_MAKE_SEND_ONCE);
	/* msgh_size passed as argument */
	InP->Head.msgh_request_port = server;
	InP->Head.msgh_reply_port = mig_get_reply_port();
	InP->Head.msgh_id = 22003;

	__BeforeSendRpc(22003, "eapolclientitemid_check_password")
	msg_result = mach_msg(&InP->Head, MACH_SEND_MSG|MACH_RCV_MSG|MACH_MSG_OPTION_NONE, (mach_msg_size_t)sizeof(Request), (mach_msg_size_t)sizeof(Reply), InP->Head.msgh_reply_port, MACH_MSG_TIMEOUT_NONE, MACH_PORT_NULL);
	__AfterSendRpc(22003, "eapolclientitemid_check_password")
	if (msg_result != MACH_MSG_SUCCESS) {
		__MachMsgErrorWithoutTimeout(msg_result);
		{ return msg_result; }
	}


#if	defined(__MIG_check__Reply__eapolclientitemid_check_password_t__defined)
	check_result = __MIG_check__Reply__eapolclientitemid_check_password_t((__Reply__eapolclientitemid_check_password_t *)Out0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ return check_result; }
#endif	/* defined(__MIG_check__Reply__eapolclientitemid_check_password_t__defined) */

	*name = (OOBDataOut_t)(Out0P->name.address);
	*nameCnt = Out0P->nameCnt;

	*password_set = Out0P->password_set;

	*result = Out0P->result;

	return KERN_SUCCESS;
}
