/******************************************************************************

Copyright (c) 2016-2019 VMware, Inc.
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

    1. Redistributions of source code must retain the above copyright notice,
       this list of conditions and the following disclaimer.

    2. Redistributions in binary form must reproduce the above copyright
       notice, this list of conditions and the following disclaimer in the
       documentation and/or other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

******************************************************************************/

/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _VMCL_RPC_H_RPCGEN
#define _VMCL_RPC_H_RPCGEN

#include <rpc/rpc.h>

#include "vmaccel_rpc.h"
#include "vmcl_defs.h"

typedef u_int VMCLCaps;

typedef u_int VMCLKernelLanguage;

typedef VMAccelId VMCLContextId;

struct VMCLContextAllocateDesc {
   VMAccelId accelId;
   VMCLContextId clientId;
   VMAccelSelectionMask selectionMask;
   VMCLCaps requiredCaps;
};
typedef struct VMCLContextAllocateDesc VMCLContextAllocateDesc;

struct VMCLContextAllocateStatus {
   VMAccelStatusCode status;
   VMCLCaps caps;
};
typedef struct VMCLContextAllocateStatus VMCLContextAllocateStatus;

struct VMCLSurfaceId {
   VMCLContextId cid;
   VMAccelSurfaceId accel;
};
typedef struct VMCLSurfaceId VMCLSurfaceId;

struct VMCLSurfaceAllocateDesc {
   VMCLSurfaceId client;
   VMAccelSurfaceDesc desc;
};
typedef struct VMCLSurfaceAllocateDesc VMCLSurfaceAllocateDesc;

struct VMCLSharedHandle {
   VMCLContextId cid;
   VMAccelSurfaceId surf;
};
typedef struct VMCLSharedHandle VMCLSharedHandle;

struct VMCLQueueId {
   VMCLContextId cid;
   VMAccelId id;
};
typedef struct VMCLQueueId VMCLQueueId;

struct VMCLQueueAllocateDesc {
   VMCLQueueId client;
   VMAccelQueueDesc desc;
};
typedef struct VMCLQueueAllocateDesc VMCLQueueAllocateDesc;

struct VMCLEventId {
   VMCLContextId cid;
   VMAccelId id;
};
typedef struct VMCLEventId VMCLEventId;

struct VMCLEventAllocateDesc {
   VMCLEventId client;
   VMAccelEventDesc desc;
};
typedef struct VMCLEventAllocateDesc VMCLEventAllocateDesc;

struct VMCLFenceId {
   VMCLContextId cid;
   VMAccelId id;
};
typedef struct VMCLFenceId VMCLFenceId;

struct VMCLFenceAllocateDesc {
   VMCLFenceId client;
   VMAccelFenceDesc desc;
};
typedef struct VMCLFenceAllocateDesc VMCLFenceAllocateDesc;

struct VMCLQueueFlushOp {
   VMCLQueueId queue;
};
typedef struct VMCLQueueFlushOp VMCLQueueFlushOp;

struct VMCLEventInsertOp {
   VMCLQueueId queue;
   VMAccelId id;
};
typedef struct VMCLEventInsertOp VMCLEventInsertOp;

struct VMCLFenceInsertOp {
   VMCLQueueId queue;
   VMAccelId id;
};
typedef struct VMCLFenceInsertOp VMCLFenceInsertOp;

struct VMCLSurfaceCopyOp {
   VMCLQueueId queue;
   VMCLSurfaceId dst;
   VMCLSurfaceId src;
   VMAccelSurfaceCopyOp op;
};
typedef struct VMCLSurfaceCopyOp VMCLSurfaceCopyOp;

struct VMCLImageFillOp {
   VMCLQueueId queue;
   VMCLSurfaceId img;
   VMAccelImageFillOp op;
};
typedef struct VMCLImageFillOp VMCLImageFillOp;

struct VMCLImageUploadOp {
   VMCLQueueId queue;
   VMCLSurfaceId img;
   VMAccelImageTransferOp op;
   VMAccelSurfaceWriteConsistency mode;
};
typedef struct VMCLImageUploadOp VMCLImageUploadOp;

struct VMCLImageDownloadOp {
   VMCLQueueId queue;
   VMCLSurfaceId img;
   VMAccelImageTransferOp op;
   VMAccelSurfaceReadConsistency mode;
};
typedef struct VMCLImageDownloadOp VMCLImageDownloadOp;

struct VMCLSurfaceMapOp {
   VMCLQueueId queue;
   VMAccelSurfaceMapOp op;
};
typedef struct VMCLSurfaceMapOp VMCLSurfaceMapOp;

struct VMCLSurfaceUnmapOp {
   VMCLQueueId queue;
   VMAccelSurfaceUnmapOp op;
};
typedef struct VMCLSurfaceUnmapOp VMCLSurfaceUnmapOp;

struct VMCLSamplerId {
   VMCLContextId cid;
   VMAccelId id;
};
typedef struct VMCLSamplerId VMCLSamplerId;

enum VMCLSamplerAddressingMode {
   VMCL_ADDRESS_MIRRORED_REPEAT = 0,
   VMCL_ADDRESS_REPEAT = 1,
   VMCL_ADDRESS_CLAMP_TO_EDGE = 2,
   VMCL_ADDRESS_CLAMP = 3,
   VMCL_ADDRESS_NONE = 4,
};
typedef enum VMCLSamplerAddressingMode VMCLSamplerAddressingMode;

enum VMCLSamplerFilterMode {
   VMCL_FILTER_NEAREST = 0,
   VMCL_FILTER_LINEAR = 1,
};
typedef enum VMCLSamplerFilterMode VMCLSamplerFilterMode;

struct VMCLSamplerDesc {
   bool_t normalizedCoords;
   VMCLSamplerAddressingMode addressMode;
   VMCLSamplerFilterMode filterMode;
};
typedef struct VMCLSamplerDesc VMCLSamplerDesc;

struct VMCLSamplerAllocateDesc {
   VMCLSamplerId client;
   VMCLSamplerDesc desc;
};
typedef struct VMCLSamplerAllocateDesc VMCLSamplerAllocateDesc;

struct VMCLSamplerAllocateStatus {
   VMAccelStatusCode status;
};
typedef struct VMCLSamplerAllocateStatus VMCLSamplerAllocateStatus;

struct VMCLKernelId {
   VMCLContextId cid;
   VMAccelId id;
};
typedef struct VMCLKernelId VMCLKernelId;

struct VMCLKernelAllocateDesc {
   VMCLKernelId client;
   VMCLKernelLanguage language;
   struct {
      u_int source_len;
      char *source_val;
   } source;
   struct {
      u_int kernelName_len;
      char *kernelName_val;
   } kernelName;
};
typedef struct VMCLKernelAllocateDesc VMCLKernelAllocateDesc;

struct VMCLKernelAllocateStatus {
   VMAccelStatusCode status;
};
typedef struct VMCLKernelAllocateStatus VMCLKernelAllocateStatus;

enum VMCLKernelSemanticType {
   VMCL_SEMANTIC_DECLARED = 0,
   VMCL_SEMANTIC_WORK_DIMENSION = 1,
   VMCL_SEMANTIC_GLOBAL_ID = 2,
   VMCL_SEMANTIC_GLOBAL_SIZE = 3,
   VMCL_SEMANTIC_GLOBAL_OFFSET = 4,
   VMCL_SEMANTIC_GROUP_ID = 5,
   VMCL_SEMANTIC_LOCAL_ID = 6,
   VMCL_SEMANTIC_LOCAL_SIZE = 7,
   VMCL_SEMANTIC_NUM_GROUPS = 8,
   VMCL_SEMANTIC_MAX = 9,
};
typedef enum VMCLKernelSemanticType VMCLKernelSemanticType;

enum VMCLKernelArgType {
   VMCL_ARG_IMMEDIATE = 0,
   VMCL_ARG_SURFACE = 1,
   VMCL_ARG_SAMPLER = 2,
};
typedef enum VMCLKernelArgType VMCLKernelArgType;

struct VMCLKernelArgDesc {
   u_int index;
   VMCLKernelArgType type;
   VMAccelSurfaceUsage usage;
   VMAccelSurfaceId surf;
   VMCLSamplerId sampler;
};
typedef struct VMCLKernelArgDesc VMCLKernelArgDesc;

struct VMCLDispatchOp {
   VMCLQueueId queue;
   VMCLKernelId kernel;
   u_int dimension;
   struct {
      u_int globalWorkOffset_len;
      u_int *globalWorkOffset_val;
   } globalWorkOffset;
   struct {
      u_int globalWorkSize_len;
      u_int *globalWorkSize_val;
   } globalWorkSize;
   struct {
      u_int localWorkSize_len;
      u_int *localWorkSize_val;
   } localWorkSize;
   struct {
      u_int args_len;
      VMCLKernelArgDesc *args_val;
   } args;
   struct {
      u_int refs_len;
      VMAccelSurfaceId *refs_val;
   } refs;
};
typedef struct VMCLDispatchOp VMCLDispatchOp;

struct VMCLContextAllocateReturnStatus {
   int errno;
   union {
      VMCLContextAllocateStatus *ret;
   } VMCLContextAllocateReturnStatus_u;
};
typedef struct VMCLContextAllocateReturnStatus VMCLContextAllocateReturnStatus;

struct VMCLSamplerAllocateReturnStatus {
   int errno;
   union {
      VMCLSamplerAllocateStatus *ret;
   } VMCLSamplerAllocateReturnStatus_u;
};
typedef struct VMCLSamplerAllocateReturnStatus VMCLSamplerAllocateReturnStatus;

struct VMCLKernelAllocateReturnStatus {
   int errno;
   union {
      VMCLKernelAllocateStatus *ret;
   } VMCLKernelAllocateReturnStatus_u;
};
typedef struct VMCLKernelAllocateReturnStatus VMCLKernelAllocateReturnStatus;

#define VMCL 0x20000081
#define VMCL_VERSION 1

#if defined(__STDC__) || defined(__cplusplus)
#define VMCL_CONTEXTALLOC 1
VMCLContextAllocateReturnStatus *vmcl_contextalloc_1(VMCLContextAllocateDesc *,
                                                     CLIENT *);
VMCLContextAllocateReturnStatus *
vmcl_contextalloc_1_svc(VMCLContextAllocateDesc *, struct svc_req *);
#define VMCL_CONTEXTDESTROY 2
VMAccelReturnStatus *vmcl_contextdestroy_1(VMCLContextId *, CLIENT *);
VMAccelReturnStatus *vmcl_contextdestroy_1_svc(VMCLContextId *,
                                               struct svc_req *);
#define VMCL_SURFACEALLOC 3
VMAccelSurfaceAllocateReturnStatus *
vmcl_surfacealloc_1(VMCLSurfaceAllocateDesc *, CLIENT *);
VMAccelSurfaceAllocateReturnStatus *
vmcl_surfacealloc_1_svc(VMCLSurfaceAllocateDesc *, struct svc_req *);
#define VMCL_SURFACEDESTROY 4
VMAccelReturnStatus *vmcl_surfacedestroy_1(VMCLSurfaceId *, CLIENT *);
VMAccelReturnStatus *vmcl_surfacedestroy_1_svc(VMCLSurfaceId *,
                                               struct svc_req *);
#define VMCL_SURFACEGETSHAREDHANDLE 5
VMAccelSharedHandleReturnStatus *vmcl_surfacegetsharedhandle_1(VMCLSurfaceId *,
                                                               CLIENT *);
VMAccelSharedHandleReturnStatus *
vmcl_surfacegetsharedhandle_1_svc(VMCLSurfaceId *, struct svc_req *);
#define VMCL_SURFACERELEASESHAREDHANDLE 6
VMAccelReturnStatus *vmcl_surfacereleasesharedhandle_1(VMCLSharedHandle *,
                                                       CLIENT *);
VMAccelReturnStatus *vmcl_surfacereleasesharedhandle_1_svc(VMCLSharedHandle *,
                                                           struct svc_req *);
#define VMCL_QUEUEALLOC 7
VMAccelQueueReturnStatus *vmcl_queuealloc_1(VMCLQueueAllocateDesc *, CLIENT *);
VMAccelQueueReturnStatus *vmcl_queuealloc_1_svc(VMCLQueueAllocateDesc *,
                                                struct svc_req *);
#define VMCL_QUEUEDESTROY 8
VMAccelReturnStatus *vmcl_queuedestroy_1(VMCLQueueId *, CLIENT *);
VMAccelReturnStatus *vmcl_queuedestroy_1_svc(VMCLQueueId *, struct svc_req *);
#define VMCL_EVENTALLOC 9
VMAccelEventReturnStatus *vmcl_eventalloc_1(VMCLEventAllocateDesc *, CLIENT *);
VMAccelEventReturnStatus *vmcl_eventalloc_1_svc(VMCLEventAllocateDesc *,
                                                struct svc_req *);
#define VMCL_EVENTGETSTATUS 10
VMAccelEventReturnStatus *vmcl_eventgetstatus_1(VMCLEventId *, CLIENT *);
VMAccelEventReturnStatus *vmcl_eventgetstatus_1_svc(VMCLEventId *,
                                                    struct svc_req *);
#define VMCL_EVENTDESTROY 11
VMAccelEventReturnStatus *vmcl_eventdestroy_1(VMCLEventId *, CLIENT *);
VMAccelEventReturnStatus *vmcl_eventdestroy_1_svc(VMCLEventId *,
                                                  struct svc_req *);
#define VMCL_FENCEALLOC 12
VMAccelFenceReturnStatus *vmcl_fencealloc_1(VMCLFenceAllocateDesc *, CLIENT *);
VMAccelFenceReturnStatus *vmcl_fencealloc_1_svc(VMCLFenceAllocateDesc *,
                                                struct svc_req *);
#define VMCL_FENCEGETSTATUS 13
VMAccelFenceReturnStatus *vmcl_fencegetstatus_1(VMCLFenceId *, CLIENT *);
VMAccelFenceReturnStatus *vmcl_fencegetstatus_1_svc(VMCLFenceId *,
                                                    struct svc_req *);
#define VMCL_FENCEDESTROY 14
VMAccelFenceReturnStatus *vmcl_fencedestroy_1(VMCLFenceId *, CLIENT *);
VMAccelFenceReturnStatus *vmcl_fencedestroy_1_svc(VMCLFenceId *,
                                                  struct svc_req *);
#define VMCL_QUEUEFLUSH 15
VMAccelReturnStatus *vmcl_queueflush_1(VMCLQueueId *, CLIENT *);
VMAccelReturnStatus *vmcl_queueflush_1_svc(VMCLQueueId *, struct svc_req *);
#define VMCL_EVENTINSERT 16
VMAccelReturnStatus *vmcl_eventinsert_1(VMCLEventInsertOp *, CLIENT *);
VMAccelReturnStatus *vmcl_eventinsert_1_svc(VMCLEventInsertOp *,
                                            struct svc_req *);
#define VMCL_FENCEINSERT 17
VMAccelReturnStatus *vmcl_fenceinsert_1(VMCLFenceInsertOp *, CLIENT *);
VMAccelReturnStatus *vmcl_fenceinsert_1_svc(VMCLFenceInsertOp *,
                                            struct svc_req *);
#define VMCL_IMAGEUPLOAD 18
VMAccelReturnStatus *vmcl_imageupload_1(VMCLImageUploadOp *, CLIENT *);
VMAccelReturnStatus *vmcl_imageupload_1_svc(VMCLImageUploadOp *,
                                            struct svc_req *);
#define VMCL_IMAGEDOWNLOAD 19
VMAccelDownloadReturnStatus *vmcl_imagedownload_1(VMCLImageDownloadOp *,
                                                  CLIENT *);
VMAccelDownloadReturnStatus *vmcl_imagedownload_1_svc(VMCLImageDownloadOp *,
                                                      struct svc_req *);
#define VMCL_SURFACEMAP 20
VMAccelSurfaceMapReturnStatus *vmcl_surfacemap_1(VMCLSurfaceMapOp *, CLIENT *);
VMAccelSurfaceMapReturnStatus *vmcl_surfacemap_1_svc(VMCLSurfaceMapOp *,
                                                     struct svc_req *);
#define VMCL_SURFACEUNMAP 21
VMAccelReturnStatus *vmcl_surfaceunmap_1(VMCLSurfaceUnmapOp *, CLIENT *);
VMAccelReturnStatus *vmcl_surfaceunmap_1_svc(VMCLSurfaceUnmapOp *,
                                             struct svc_req *);
#define VMCL_SURFACECOPY 22
VMAccelReturnStatus *vmcl_surfacecopy_1(VMCLSurfaceCopyOp *, CLIENT *);
VMAccelReturnStatus *vmcl_surfacecopy_1_svc(VMCLSurfaceCopyOp *,
                                            struct svc_req *);
#define VMCL_IMAGEFILL 23
VMAccelReturnStatus *vmcl_imagefill_1(VMCLImageFillOp *, CLIENT *);
VMAccelReturnStatus *vmcl_imagefill_1_svc(VMCLImageFillOp *, struct svc_req *);
#define VMCL_SAMPLERALLOC 24
VMCLSamplerAllocateReturnStatus *vmcl_sampleralloc_1(VMCLSamplerAllocateDesc *,
                                                     CLIENT *);
VMCLSamplerAllocateReturnStatus *
vmcl_sampleralloc_1_svc(VMCLSamplerAllocateDesc *, struct svc_req *);
#define VMCL_SAMPLERDESTROY 25
VMAccelReturnStatus *vmcl_samplerdestroy_1(VMCLSamplerId *, CLIENT *);
VMAccelReturnStatus *vmcl_samplerdestroy_1_svc(VMCLSamplerId *,
                                               struct svc_req *);
#define VMCL_KERNELALLOC 26
VMCLKernelAllocateReturnStatus *vmcl_kernelalloc_1(VMCLKernelAllocateDesc *,
                                                   CLIENT *);
VMCLKernelAllocateReturnStatus *vmcl_kernelalloc_1_svc(VMCLKernelAllocateDesc *,
                                                       struct svc_req *);
#define VMCL_KERNELDESTROY 27
VMAccelReturnStatus *vmcl_kerneldestroy_1(VMCLKernelId *, CLIENT *);
VMAccelReturnStatus *vmcl_kerneldestroy_1_svc(VMCLKernelId *, struct svc_req *);
#define VMCL_DISPATCH 28
VMAccelReturnStatus *vmcl_dispatch_1(VMCLDispatchOp *, CLIENT *);
VMAccelReturnStatus *vmcl_dispatch_1_svc(VMCLDispatchOp *, struct svc_req *);
int vmcl_1_freeresult(SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define VMCL_CONTEXTALLOC 1
VMCLContextAllocateReturnStatus *vmcl_contextalloc_1();
VMCLContextAllocateReturnStatus *vmcl_contextalloc_1_svc();
#define VMCL_CONTEXTDESTROY 2
VMAccelReturnStatus *vmcl_contextdestroy_1();
VMAccelReturnStatus *vmcl_contextdestroy_1_svc();
#define VMCL_SURFACEALLOC 3
VMAccelSurfaceAllocateReturnStatus *vmcl_surfacealloc_1();
VMAccelSurfaceAllocateReturnStatus *vmcl_surfacealloc_1_svc();
#define VMCL_SURFACEDESTROY 4
VMAccelReturnStatus *vmcl_surfacedestroy_1();
VMAccelReturnStatus *vmcl_surfacedestroy_1_svc();
#define VMCL_SURFACEGETSHAREDHANDLE 5
VMAccelSharedHandleReturnStatus *vmcl_surfacegetsharedhandle_1();
VMAccelSharedHandleReturnStatus *vmcl_surfacegetsharedhandle_1_svc();
#define VMCL_SURFACERELEASESHAREDHANDLE 6
VMAccelReturnStatus *vmcl_surfacereleasesharedhandle_1();
VMAccelReturnStatus *vmcl_surfacereleasesharedhandle_1_svc();
#define VMCL_QUEUEALLOC 7
VMAccelQueueReturnStatus *vmcl_queuealloc_1();
VMAccelQueueReturnStatus *vmcl_queuealloc_1_svc();
#define VMCL_QUEUEDESTROY 8
VMAccelReturnStatus *vmcl_queuedestroy_1();
VMAccelReturnStatus *vmcl_queuedestroy_1_svc();
#define VMCL_EVENTALLOC 9
VMAccelEventReturnStatus *vmcl_eventalloc_1();
VMAccelEventReturnStatus *vmcl_eventalloc_1_svc();
#define VMCL_EVENTGETSTATUS 10
VMAccelEventReturnStatus *vmcl_eventgetstatus_1();
VMAccelEventReturnStatus *vmcl_eventgetstatus_1_svc();
#define VMCL_EVENTDESTROY 11
VMAccelEventReturnStatus *vmcl_eventdestroy_1();
VMAccelEventReturnStatus *vmcl_eventdestroy_1_svc();
#define VMCL_FENCEALLOC 12
VMAccelFenceReturnStatus *vmcl_fencealloc_1();
VMAccelFenceReturnStatus *vmcl_fencealloc_1_svc();
#define VMCL_FENCEGETSTATUS 13
VMAccelFenceReturnStatus *vmcl_fencegetstatus_1();
VMAccelFenceReturnStatus *vmcl_fencegetstatus_1_svc();
#define VMCL_FENCEDESTROY 14
VMAccelFenceReturnStatus *vmcl_fencedestroy_1();
VMAccelFenceReturnStatus *vmcl_fencedestroy_1_svc();
#define VMCL_QUEUEFLUSH 15
VMAccelReturnStatus *vmcl_queueflush_1();
VMAccelReturnStatus *vmcl_queueflush_1_svc();
#define VMCL_EVENTINSERT 16
VMAccelReturnStatus *vmcl_eventinsert_1();
VMAccelReturnStatus *vmcl_eventinsert_1_svc();
#define VMCL_FENCEINSERT 17
VMAccelReturnStatus *vmcl_fenceinsert_1();
VMAccelReturnStatus *vmcl_fenceinsert_1_svc();
#define VMCL_IMAGEUPLOAD 18
VMAccelReturnStatus *vmcl_imageupload_1();
VMAccelReturnStatus *vmcl_imageupload_1_svc();
#define VMCL_IMAGEDOWNLOAD 19
VMAccelDownloadReturnStatus *vmcl_imagedownload_1();
VMAccelDownloadReturnStatus *vmcl_imagedownload_1_svc();
#define VMCL_SURFACEMAP 20
VMAccelSurfaceMapReturnStatus *vmcl_surfacemap_1();
VMAccelSurfaceMapReturnStatus *vmcl_surfacemap_1_svc();
#define VMCL_SURFACEUNMAP 21
VMAccelReturnStatus *vmcl_surfaceunmap_1();
VMAccelReturnStatus *vmcl_surfaceunmap_1_svc();
#define VMCL_SURFACECOPY 22
VMAccelReturnStatus *vmcl_surfacecopy_1();
VMAccelReturnStatus *vmcl_surfacecopy_1_svc();
#define VMCL_IMAGEFILL 23
VMAccelReturnStatus *vmcl_imagefill_1();
VMAccelReturnStatus *vmcl_imagefill_1_svc();
#define VMCL_SAMPLERALLOC 24
VMCLSamplerAllocateReturnStatus *vmcl_sampleralloc_1();
VMCLSamplerAllocateReturnStatus *vmcl_sampleralloc_1_svc();
#define VMCL_SAMPLERDESTROY 25
VMAccelReturnStatus *vmcl_samplerdestroy_1();
VMAccelReturnStatus *vmcl_samplerdestroy_1_svc();
#define VMCL_KERNELALLOC 26
VMCLKernelAllocateReturnStatus *vmcl_kernelalloc_1();
VMCLKernelAllocateReturnStatus *vmcl_kernelalloc_1_svc();
#define VMCL_KERNELDESTROY 27
VMAccelReturnStatus *vmcl_kerneldestroy_1();
VMAccelReturnStatus *vmcl_kerneldestroy_1_svc();
#define VMCL_DISPATCH 28
VMAccelReturnStatus *vmcl_dispatch_1();
VMAccelReturnStatus *vmcl_dispatch_1_svc();
int vmcl_1_freeresult();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
bool_t xdr_VMCLCaps(XDR *, VMCLCaps *);
bool_t xdr_VMCLKernelLanguage(XDR *, VMCLKernelLanguage *);
bool_t xdr_VMCLContextId(XDR *, VMCLContextId *);
bool_t xdr_VMCLContextAllocateDesc(XDR *, VMCLContextAllocateDesc *);
bool_t xdr_VMCLContextAllocateStatus(XDR *, VMCLContextAllocateStatus *);
bool_t xdr_VMCLSurfaceId(XDR *, VMCLSurfaceId *);
bool_t xdr_VMCLSurfaceAllocateDesc(XDR *, VMCLSurfaceAllocateDesc *);
bool_t xdr_VMCLSharedHandle(XDR *, VMCLSharedHandle *);
bool_t xdr_VMCLQueueId(XDR *, VMCLQueueId *);
bool_t xdr_VMCLQueueAllocateDesc(XDR *, VMCLQueueAllocateDesc *);
bool_t xdr_VMCLEventId(XDR *, VMCLEventId *);
bool_t xdr_VMCLEventAllocateDesc(XDR *, VMCLEventAllocateDesc *);
bool_t xdr_VMCLFenceId(XDR *, VMCLFenceId *);
bool_t xdr_VMCLFenceAllocateDesc(XDR *, VMCLFenceAllocateDesc *);
bool_t xdr_VMCLQueueFlushOp(XDR *, VMCLQueueFlushOp *);
bool_t xdr_VMCLEventInsertOp(XDR *, VMCLEventInsertOp *);
bool_t xdr_VMCLFenceInsertOp(XDR *, VMCLFenceInsertOp *);
bool_t xdr_VMCLSurfaceCopyOp(XDR *, VMCLSurfaceCopyOp *);
bool_t xdr_VMCLImageFillOp(XDR *, VMCLImageFillOp *);
bool_t xdr_VMCLImageUploadOp(XDR *, VMCLImageUploadOp *);
bool_t xdr_VMCLImageDownloadOp(XDR *, VMCLImageDownloadOp *);
bool_t xdr_VMCLSurfaceMapOp(XDR *, VMCLSurfaceMapOp *);
bool_t xdr_VMCLSurfaceUnmapOp(XDR *, VMCLSurfaceUnmapOp *);
bool_t xdr_VMCLSamplerId(XDR *, VMCLSamplerId *);
bool_t xdr_VMCLSamplerAddressingMode(XDR *, VMCLSamplerAddressingMode *);
bool_t xdr_VMCLSamplerFilterMode(XDR *, VMCLSamplerFilterMode *);
bool_t xdr_VMCLSamplerDesc(XDR *, VMCLSamplerDesc *);
bool_t xdr_VMCLSamplerAllocateDesc(XDR *, VMCLSamplerAllocateDesc *);
bool_t xdr_VMCLSamplerAllocateStatus(XDR *, VMCLSamplerAllocateStatus *);
bool_t xdr_VMCLKernelId(XDR *, VMCLKernelId *);
bool_t xdr_VMCLKernelAllocateDesc(XDR *, VMCLKernelAllocateDesc *);
bool_t xdr_VMCLKernelAllocateStatus(XDR *, VMCLKernelAllocateStatus *);
bool_t xdr_VMCLKernelSemanticType(XDR *, VMCLKernelSemanticType *);
bool_t xdr_VMCLKernelArgType(XDR *, VMCLKernelArgType *);
bool_t xdr_VMCLKernelArgDesc(XDR *, VMCLKernelArgDesc *);
bool_t xdr_VMCLDispatchOp(XDR *, VMCLDispatchOp *);
bool_t xdr_VMCLContextAllocateReturnStatus(XDR *,
                                           VMCLContextAllocateReturnStatus *);
bool_t xdr_VMCLSamplerAllocateReturnStatus(XDR *,
                                           VMCLSamplerAllocateReturnStatus *);
bool_t xdr_VMCLKernelAllocateReturnStatus(XDR *,
                                          VMCLKernelAllocateReturnStatus *);

#else /* K&R C */
bool_t xdr_VMCLCaps();
bool_t xdr_VMCLKernelLanguage();
bool_t xdr_VMCLContextId();
bool_t xdr_VMCLContextAllocateDesc();
bool_t xdr_VMCLContextAllocateStatus();
bool_t xdr_VMCLSurfaceId();
bool_t xdr_VMCLSurfaceAllocateDesc();
bool_t xdr_VMCLSharedHandle();
bool_t xdr_VMCLQueueId();
bool_t xdr_VMCLQueueAllocateDesc();
bool_t xdr_VMCLEventId();
bool_t xdr_VMCLEventAllocateDesc();
bool_t xdr_VMCLFenceId();
bool_t xdr_VMCLFenceAllocateDesc();
bool_t xdr_VMCLQueueFlushOp();
bool_t xdr_VMCLEventInsertOp();
bool_t xdr_VMCLFenceInsertOp();
bool_t xdr_VMCLSurfaceCopyOp();
bool_t xdr_VMCLImageFillOp();
bool_t xdr_VMCLImageUploadOp();
bool_t xdr_VMCLImageDownloadOp();
bool_t xdr_VMCLSurfaceMapOp();
bool_t xdr_VMCLSurfaceUnmapOp();
bool_t xdr_VMCLSamplerId();
bool_t xdr_VMCLSamplerAddressingMode();
bool_t xdr_VMCLSamplerFilterMode();
bool_t xdr_VMCLSamplerDesc();
bool_t xdr_VMCLSamplerAllocateDesc();
bool_t xdr_VMCLSamplerAllocateStatus();
bool_t xdr_VMCLKernelId();
bool_t xdr_VMCLKernelAllocateDesc();
bool_t xdr_VMCLKernelAllocateStatus();
bool_t xdr_VMCLKernelSemanticType();
bool_t xdr_VMCLKernelArgType();
bool_t xdr_VMCLKernelArgDesc();
bool_t xdr_VMCLDispatchOp();
bool_t xdr_VMCLContextAllocateReturnStatus();
bool_t xdr_VMCLSamplerAllocateReturnStatus();
bool_t xdr_VMCLKernelAllocateReturnStatus();

#endif /* K&R C */

#endif /* !_VMCL_RPC_H_RPCGEN */
