//
//	Definitions for device driver
//
//	Version 0.4:	23.03.1999
//
//	ES,  Dr. Johannes Heidenhain GmbH
//
//
////////////////////////////////////////////////////////////////////////////////////////////////////////




#ifndef _DRVFunc_H_
#define _DRVFunc_H_


#define	FILE_DEVICE_IK220		0xA000
#define IK220_IOCTL_IDX			0xA00

#define IK220_IOCTL_INPUT		(IK220_IOCTL_IDX+0) 
#define IK220_IOCTL_OUTPUT		(IK220_IOCTL_IDX+1) 
#define IK220_IOCTL_STATUS		(IK220_IOCTL_IDX+2) 
#define IK220_IOCTL_DOWNLOAD	(IK220_IOCTL_IDX+3) 
#define IK220_IOCTL_UPLOAD		(IK220_IOCTL_IDX+4) 
#define IK220_IOCTL_BURSTRAM	(IK220_IOCTL_IDX+5) 
#define IK220_IOCTL_VERSION		(IK220_IOCTL_IDX+6) 
#define IK220_IOCTL_LATCHI		(IK220_IOCTL_IDX+7) 
#define IK220_IOCTL_LATCHE		(IK220_IOCTL_IDX+8) 
#define IK220_IOCTL_SYSLED		(IK220_IOCTL_IDX+9) 



#define IOCTL_INPUT		CTL_CODE (FILE_DEVICE_IK220,	\
								  IK220_IOCTL_INPUT,	\
								  METHOD_BUFFERED,		\
								  FILE_ANY_ACCESS )

#define IOCTL_OUTPUT	CTL_CODE (FILE_DEVICE_IK220,	\
								  IK220_IOCTL_OUTPUT,	\
								  METHOD_BUFFERED,		\
								  FILE_ANY_ACCESS )

#define IOCTL_STATUS	CTL_CODE (FILE_DEVICE_IK220,	\
								  IK220_IOCTL_STATUS,	\
								  METHOD_BUFFERED,		\
								  FILE_ANY_ACCESS )

#define IOCTL_DOWNLOAD	CTL_CODE (FILE_DEVICE_IK220,	\
								  IK220_IOCTL_DOWNLOAD,	\
								  METHOD_BUFFERED,		\
								  FILE_ANY_ACCESS )
#define IOCTL_UPLOAD	CTL_CODE (FILE_DEVICE_IK220,	\
								  IK220_IOCTL_UPLOAD,	\
								  METHOD_BUFFERED,		\
								  FILE_ANY_ACCESS )

#define IOCTL_BURSTRAM	CTL_CODE (FILE_DEVICE_IK220,	\
								  IK220_IOCTL_BURSTRAM,	\
								  METHOD_BUFFERED,		\
								  FILE_ANY_ACCESS )

#define IOCTL_VERSION	CTL_CODE (FILE_DEVICE_IK220,	\
								  IK220_IOCTL_VERSION,	\
								  METHOD_BUFFERED,		\
								  FILE_ANY_ACCESS )

#define IOCTL_LATCHI	CTL_CODE (FILE_DEVICE_IK220,	\
								  IK220_IOCTL_LATCHI,	\
								  METHOD_BUFFERED,		\
								  FILE_ANY_ACCESS )


#define IOCTL_LATCHE	CTL_CODE (FILE_DEVICE_IK220,	\
								  IK220_IOCTL_LATCHE,	\
								  METHOD_BUFFERED,		\
								  FILE_ANY_ACCESS )


#define IOCTL_SYSLED	CTL_CODE (FILE_DEVICE_IK220,	\
								  IK220_IOCTL_SYSLED,	\
								  METHOD_BUFFERED,		\
								  FILE_ANY_ACCESS )



#endif
