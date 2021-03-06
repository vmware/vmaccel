/******************************************************************************

Copyright (c) 2019 VMware, Inc.
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

#include <memory.h> /* for memset */
#include "vmcodec_rpc.h"

/* Default timeout can be changed using clnt_control() */
static struct timeval TIMEOUT = {25, 0};

VMCODECContextAllocateReturnStatus *
vmcodec_contextalloc_1(VMCODECContextAllocateDesc *argp, CLIENT *clnt) {
   static VMCODECContextAllocateReturnStatus clnt_res;

   memset((char *)&clnt_res, 0, sizeof(clnt_res));
   if (clnt_call(clnt, VMCODEC_CONTEXTALLOC,
                 (xdrproc_t)xdr_VMCODECContextAllocateDesc, (caddr_t)argp,
                 (xdrproc_t)xdr_VMCODECContextAllocateReturnStatus,
                 (caddr_t)&clnt_res, TIMEOUT) != RPC_SUCCESS) {
      return (NULL);
   }
   return (&clnt_res);
}

VMAccelReturnStatus *vmcodec_contextdestroy_1(VMCODECContextId *argp,
                                              CLIENT *clnt) {
   static VMAccelReturnStatus clnt_res;

   memset((char *)&clnt_res, 0, sizeof(clnt_res));
   if (clnt_call(clnt, VMCODEC_CONTEXTDESTROY, (xdrproc_t)xdr_VMCODECContextId,
                 (caddr_t)argp, (xdrproc_t)xdr_VMAccelReturnStatus,
                 (caddr_t)&clnt_res, TIMEOUT) != RPC_SUCCESS) {
      return (NULL);
   }
   return (&clnt_res);
}

VMAccelSurfaceAllocateReturnStatus *
vmcodec_surfacealloc_1(VMCODECSurfaceAllocateDesc *argp, CLIENT *clnt) {
   static VMAccelSurfaceAllocateReturnStatus clnt_res;

   memset((char *)&clnt_res, 0, sizeof(clnt_res));
   if (clnt_call(clnt, VMCODEC_SURFACEALLOC,
                 (xdrproc_t)xdr_VMCODECSurfaceAllocateDesc, (caddr_t)argp,
                 (xdrproc_t)xdr_VMAccelSurfaceAllocateReturnStatus,
                 (caddr_t)&clnt_res, TIMEOUT) != RPC_SUCCESS) {
      return (NULL);
   }
   return (&clnt_res);
}

VMAccelReturnStatus *vmcodec_surfacedestroy_1(VMCODECSurfaceId *argp,
                                              CLIENT *clnt) {
   static VMAccelReturnStatus clnt_res;

   memset((char *)&clnt_res, 0, sizeof(clnt_res));
   if (clnt_call(clnt, VMCODEC_SURFACEDESTROY, (xdrproc_t)xdr_VMCODECSurfaceId,
                 (caddr_t)argp, (xdrproc_t)xdr_VMAccelReturnStatus,
                 (caddr_t)&clnt_res, TIMEOUT) != RPC_SUCCESS) {
      return (NULL);
   }
   return (&clnt_res);
}

VMAccelReturnStatus *vmcodec_imageupload_1(VMCODECImageUploadOp *argp,
                                           CLIENT *clnt) {
   static VMAccelReturnStatus clnt_res;

   memset((char *)&clnt_res, 0, sizeof(clnt_res));
   if (clnt_call(clnt, VMCODEC_IMAGEUPLOAD, (xdrproc_t)xdr_VMCODECImageUploadOp,
                 (caddr_t)argp, (xdrproc_t)xdr_VMAccelReturnStatus,
                 (caddr_t)&clnt_res, TIMEOUT) != RPC_SUCCESS) {
      return (NULL);
   }
   return (&clnt_res);
}

VMAccelDownloadReturnStatus *
vmcodec_imagedownload_1(VMCODECImageDownloadOp *argp, CLIENT *clnt) {
   static VMAccelDownloadReturnStatus clnt_res;

   memset((char *)&clnt_res, 0, sizeof(clnt_res));
   if (clnt_call(clnt, VMCODEC_IMAGEDOWNLOAD,
                 (xdrproc_t)xdr_VMCODECImageDownloadOp, (caddr_t)argp,
                 (xdrproc_t)xdr_VMAccelDownloadReturnStatus, (caddr_t)&clnt_res,
                 TIMEOUT) != RPC_SUCCESS) {
      return (NULL);
   }
   return (&clnt_res);
}

VMAccelReturnStatus *vmcodec_decode_1(VMCODECDecodeOp *argp, CLIENT *clnt) {
   static VMAccelReturnStatus clnt_res;

   memset((char *)&clnt_res, 0, sizeof(clnt_res));
   if (clnt_call(clnt, VMCODEC_DECODE, (xdrproc_t)xdr_VMCODECDecodeOp,
                 (caddr_t)argp, (xdrproc_t)xdr_VMAccelReturnStatus,
                 (caddr_t)&clnt_res, TIMEOUT) != RPC_SUCCESS) {
      return (NULL);
   }
   return (&clnt_res);
}

VMAccelReturnStatus *vmcodec_encode_1(VMCODECEncodeOp *argp, CLIENT *clnt) {
   static VMAccelReturnStatus clnt_res;

   memset((char *)&clnt_res, 0, sizeof(clnt_res));
   if (clnt_call(clnt, VMCODEC_ENCODE, (xdrproc_t)xdr_VMCODECEncodeOp,
                 (caddr_t)argp, (xdrproc_t)xdr_VMAccelReturnStatus,
                 (caddr_t)&clnt_res, TIMEOUT) != RPC_SUCCESS) {
      return (NULL);
   }
   return (&clnt_res);
}
