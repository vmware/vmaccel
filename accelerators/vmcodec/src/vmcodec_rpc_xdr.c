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

#include "vmcodec_rpc.h"

bool_t xdr_VMCODECCaps(XDR *xdrs, VMCODECCaps *objp) {
   register int32_t *buf;

   if (!xdr_u_int(xdrs, objp))
      return FALSE;
   return TRUE;
}

bool_t xdr_VMCODECContextId(XDR *xdrs, VMCODECContextId *objp) {
   register int32_t *buf;

   if (!xdr_VMAccelId(xdrs, objp))
      return FALSE;
   return TRUE;
}

bool_t xdr_VMCODECContextAllocateDesc(XDR *xdrs,
                                      VMCODECContextAllocateDesc *objp) {
   register int32_t *buf;

   if (!xdr_VMAccelId(xdrs, &objp->accelId))
      return FALSE;
   if (!xdr_VMCODECContextId(xdrs, &objp->clientId))
      return FALSE;
   if (!xdr_VMAccelSelectionMask(xdrs, &objp->selectionMask))
      return FALSE;
   if (!xdr_u_int(xdrs, &objp->codec))
      return FALSE;
   if (!xdr_VMCODECCaps(xdrs, &objp->requiredCaps))
      return FALSE;
   return TRUE;
}

bool_t xdr_VMCODECContextAllocateStatus(XDR *xdrs,
                                        VMCODECContextAllocateStatus *objp) {
   register int32_t *buf;

   if (!xdr_VMAccelStatusCode(xdrs, &objp->status))
      return FALSE;
   if (!xdr_VMCODECCaps(xdrs, &objp->caps))
      return FALSE;
   return TRUE;
}

bool_t xdr_VMCODECSurfaceId(XDR *xdrs, VMCODECSurfaceId *objp) {
   register int32_t *buf;

   if (!xdr_VMCODECContextId(xdrs, &objp->cid))
      return FALSE;
   if (!xdr_VMAccelSurfaceId(xdrs, &objp->accel))
      return FALSE;
   return TRUE;
}

bool_t xdr_VMCODECSurfaceAllocateDesc(XDR *xdrs,
                                      VMCODECSurfaceAllocateDesc *objp) {
   register int32_t *buf;

   if (!xdr_VMAccelSurfaceId(xdrs, &objp->client))
      return FALSE;
   if (!xdr_VMAccelSurfaceDesc(xdrs, &objp->desc))
      return FALSE;
   return TRUE;
}

bool_t xdr_VMCODECImageUploadOp(XDR *xdrs, VMCODECImageUploadOp *objp) {
   register int32_t *buf;

   if (!xdr_VMCODECSurfaceId(xdrs, &objp->img))
      return FALSE;
   if (!xdr_VMAccelImageTransferOp(xdrs, &objp->op))
      return FALSE;
   if (!xdr_VMAccelSurfaceWriteConsistency(xdrs, &objp->mode))
      return FALSE;
   return TRUE;
}

bool_t xdr_VMCODECImageDownloadOp(XDR *xdrs, VMCODECImageDownloadOp *objp) {
   register int32_t *buf;

   if (!xdr_VMCODECSurfaceId(xdrs, &objp->img))
      return FALSE;
   if (!xdr_VMAccelImageTransferOp(xdrs, &objp->op))
      return FALSE;
   if (!xdr_VMAccelSurfaceReadConsistency(xdrs, &objp->mode))
      return FALSE;
   return TRUE;
}

bool_t xdr_VMCODECArg(XDR *xdrs, VMCODECArg *objp) {
   register int32_t *buf;

   if (!xdr_VMCODECSurfaceId(xdrs, &objp->sid))
      return FALSE;
   if (!xdr_VMAccelSurfaceRegion(xdrs, &objp->imgRegion))
      return FALSE;
   return TRUE;
}

bool_t xdr_VMCODECDecodeOp(XDR *xdrs, VMCODECDecodeOp *objp) {
   register int32_t *buf;

   if (!xdr_VMCODECContextId(xdrs, &objp->cid))
      return FALSE;
   if (!xdr_array(xdrs, (char **)&objp->output.output_val,
                  (u_int *)&objp->output.output_len, ~0, sizeof(VMCODECArg),
                  (xdrproc_t)xdr_VMCODECArg))
      return FALSE;
   return TRUE;
}

bool_t xdr_VMCODECEncodeOp(XDR *xdrs, VMCODECEncodeOp *objp) {
   register int32_t *buf;

   if (!xdr_VMCODECContextId(xdrs, &objp->cid))
      return FALSE;
   if (!xdr_array(xdrs, (char **)&objp->inptut.inptut_val,
                  (u_int *)&objp->inptut.inptut_len, ~0, sizeof(VMCODECArg),
                  (xdrproc_t)xdr_VMCODECArg))
      return FALSE;
   return TRUE;
}

bool_t xdr_VMCODECContextAllocateReturnStatus(
   XDR *xdrs, VMCODECContextAllocateReturnStatus *objp) {
   register int32_t *buf;

   if (!xdr_int(xdrs, &objp->errno))
      return FALSE;
   switch (objp->errno) {
      case 0:
         if (!xdr_pointer(
                xdrs, (char **)&objp->VMCODECContextAllocateReturnStatus_u.ret,
                sizeof(VMCODECContextAllocateStatus),
                (xdrproc_t)xdr_VMCODECContextAllocateStatus))
            return FALSE;
         break;
      default:
         break;
   }
   return TRUE;
}