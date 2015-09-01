// This is a generated source file for Chilkat version 9.5.0.51
#ifndef _C_CkFtp2WH
#define _C_CkFtp2WH
#include "chilkatDefs.h"

#include "Chilkat_C.h"

CK_VISIBLE_PUBLIC HCkFtp2W CkFtp2W_Create(void);
CK_VISIBLE_PUBLIC HCkFtp2W CkFtp2W_Create2(BOOL bCallbackOwned);
CK_VISIBLE_PUBLIC void CkFtp2W_Dispose(HCkFtp2W handle);
CK_VISIBLE_PUBLIC void CkFtp2W_getAccount(HCkFtp2W cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkFtp2W_putAccount(HCkFtp2W cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_account(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC int CkFtp2W_getActivePortRangeEnd(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_putActivePortRangeEnd(HCkFtp2W cHandle, int newVal);
CK_VISIBLE_PUBLIC int CkFtp2W_getActivePortRangeStart(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_putActivePortRangeStart(HCkFtp2W cHandle, int newVal);
CK_VISIBLE_PUBLIC unsigned long CkFtp2W_getAllocateSize(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_putAllocateSize(HCkFtp2W cHandle, unsigned long newVal);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_getAllowMlsd(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_putAllowMlsd(HCkFtp2W cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC unsigned long CkFtp2W_getAsyncBytesReceived(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC __int64 CkFtp2W_getAsyncBytesReceived64(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_getAsyncBytesReceivedStr(HCkFtp2W cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_asyncBytesReceivedStr(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC unsigned long CkFtp2W_getAsyncBytesSent(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC __int64 CkFtp2W_getAsyncBytesSent64(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_getAsyncBytesSentStr(HCkFtp2W cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_asyncBytesSentStr(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_getAsyncFinished(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_getAsyncLog(HCkFtp2W cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_asyncLog(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC unsigned long CkFtp2W_getAsyncPercentDone(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_getAsyncSuccess(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_getAuthSsl(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_putAuthSsl(HCkFtp2W cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_getAuthTls(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_putAuthTls(HCkFtp2W cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_getAutoFeat(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_putAutoFeat(HCkFtp2W cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_getAutoFix(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_putAutoFix(HCkFtp2W cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_getAutoGetSizeForProgress(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_putAutoGetSizeForProgress(HCkFtp2W cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_getAutoOptsUtf8(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_putAutoOptsUtf8(HCkFtp2W cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_getAutoSetUseEpsv(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_putAutoSetUseEpsv(HCkFtp2W cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_getAutoSyst(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_putAutoSyst(HCkFtp2W cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_getAutoXcrc(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_putAutoXcrc(HCkFtp2W cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC int CkFtp2W_getBandwidthThrottleDown(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_putBandwidthThrottleDown(HCkFtp2W cHandle, int newVal);
CK_VISIBLE_PUBLIC int CkFtp2W_getBandwidthThrottleUp(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_putBandwidthThrottleUp(HCkFtp2W cHandle, int newVal);
CK_VISIBLE_PUBLIC void CkFtp2W_getClientIpAddress(HCkFtp2W cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkFtp2W_putClientIpAddress(HCkFtp2W cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_clientIpAddress(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_getCommandCharset(HCkFtp2W cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkFtp2W_putCommandCharset(HCkFtp2W cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_commandCharset(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC int CkFtp2W_getConnectFailReason(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC int CkFtp2W_getConnectTimeout(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_putConnectTimeout(HCkFtp2W cHandle, int newVal);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_getConnectVerified(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC int CkFtp2W_getCrlfMode(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_putCrlfMode(HCkFtp2W cHandle, int newVal);
CK_VISIBLE_PUBLIC void CkFtp2W_getDebugLogFilePath(HCkFtp2W cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkFtp2W_putDebugLogFilePath(HCkFtp2W cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_debugLogFilePath(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_getDirListingCharset(HCkFtp2W cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkFtp2W_putDirListingCharset(HCkFtp2W cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_dirListingCharset(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC int CkFtp2W_getDownloadTransferRate(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_getForcePortIpAddress(HCkFtp2W cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkFtp2W_putForcePortIpAddress(HCkFtp2W cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_forcePortIpAddress(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_getGreeting(HCkFtp2W cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_greeting(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_getHasModeZ(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC int CkFtp2W_getHeartbeatMs(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_putHeartbeatMs(HCkFtp2W cHandle, int newVal);
CK_VISIBLE_PUBLIC void CkFtp2W_getHostname(HCkFtp2W cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkFtp2W_putHostname(HCkFtp2W cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_hostname(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_getHttpProxyAuthMethod(HCkFtp2W cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkFtp2W_putHttpProxyAuthMethod(HCkFtp2W cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_httpProxyAuthMethod(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_getHttpProxyDomain(HCkFtp2W cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkFtp2W_putHttpProxyDomain(HCkFtp2W cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_httpProxyDomain(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_getHttpProxyHostname(HCkFtp2W cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkFtp2W_putHttpProxyHostname(HCkFtp2W cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_httpProxyHostname(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_getHttpProxyPassword(HCkFtp2W cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkFtp2W_putHttpProxyPassword(HCkFtp2W cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_httpProxyPassword(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC int CkFtp2W_getHttpProxyPort(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_putHttpProxyPort(HCkFtp2W cHandle, int newVal);
CK_VISIBLE_PUBLIC void CkFtp2W_getHttpProxyUsername(HCkFtp2W cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkFtp2W_putHttpProxyUsername(HCkFtp2W cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_httpProxyUsername(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC int CkFtp2W_getIdleTimeoutMs(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_putIdleTimeoutMs(HCkFtp2W cHandle, int newVal);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_getIsConnected(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_getKeepSessionLog(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_putKeepSessionLog(HCkFtp2W cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkFtp2W_getLastErrorHtml(HCkFtp2W cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_lastErrorHtml(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_getLastErrorText(HCkFtp2W cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_lastErrorText(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_getLastErrorXml(HCkFtp2W cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_lastErrorXml(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_getLastReply(HCkFtp2W cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_lastReply(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_getListPattern(HCkFtp2W cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkFtp2W_putListPattern(HCkFtp2W cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_listPattern(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_getLoginVerified(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC int CkFtp2W_getNumFilesAndDirs(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_getPartialTransfer(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_getPassive(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_putPassive(HCkFtp2W cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_getPassiveUseHostAddr(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_putPassiveUseHostAddr(HCkFtp2W cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkFtp2W_getPassword(HCkFtp2W cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkFtp2W_putPassword(HCkFtp2W cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_password(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC int CkFtp2W_getPercentDoneScale(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_putPercentDoneScale(HCkFtp2W cHandle, int newVal);
CK_VISIBLE_PUBLIC int CkFtp2W_getPort(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_putPort(HCkFtp2W cHandle, int newVal);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_getPreferIpv6(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_putPreferIpv6(HCkFtp2W cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_getPreferNlst(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_putPreferNlst(HCkFtp2W cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC int CkFtp2W_getProgressMonSize(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_putProgressMonSize(HCkFtp2W cHandle, int newVal);
CK_VISIBLE_PUBLIC __int64 CkFtp2W_getProgressMonSize64(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_putProgressMonSize64(HCkFtp2W cHandle, __int64 newVal);
CK_VISIBLE_PUBLIC void CkFtp2W_getProxyHostname(HCkFtp2W cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkFtp2W_putProxyHostname(HCkFtp2W cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_proxyHostname(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC int CkFtp2W_getProxyMethod(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_putProxyMethod(HCkFtp2W cHandle, int newVal);
CK_VISIBLE_PUBLIC void CkFtp2W_getProxyPassword(HCkFtp2W cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkFtp2W_putProxyPassword(HCkFtp2W cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_proxyPassword(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC int CkFtp2W_getProxyPort(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_putProxyPort(HCkFtp2W cHandle, int newVal);
CK_VISIBLE_PUBLIC void CkFtp2W_getProxyUsername(HCkFtp2W cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkFtp2W_putProxyUsername(HCkFtp2W cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_proxyUsername(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC int CkFtp2W_getReadTimeout(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_putReadTimeout(HCkFtp2W cHandle, int newVal);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_getRequireSslCertVerify(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_putRequireSslCertVerify(HCkFtp2W cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_getRestartNext(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_putRestartNext(HCkFtp2W cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC int CkFtp2W_getSendBufferSize(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_putSendBufferSize(HCkFtp2W cHandle, int newVal);
CK_VISIBLE_PUBLIC void CkFtp2W_getSessionLog(HCkFtp2W cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_sessionLog(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_getSkipFinalReply(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_putSkipFinalReply(HCkFtp2W cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC int CkFtp2W_getSoRcvBuf(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_putSoRcvBuf(HCkFtp2W cHandle, int newVal);
CK_VISIBLE_PUBLIC int CkFtp2W_getSoSndBuf(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_putSoSndBuf(HCkFtp2W cHandle, int newVal);
CK_VISIBLE_PUBLIC void CkFtp2W_getSocksHostname(HCkFtp2W cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkFtp2W_putSocksHostname(HCkFtp2W cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_socksHostname(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_getSocksPassword(HCkFtp2W cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkFtp2W_putSocksPassword(HCkFtp2W cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_socksPassword(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC int CkFtp2W_getSocksPort(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_putSocksPort(HCkFtp2W cHandle, int newVal);
CK_VISIBLE_PUBLIC void CkFtp2W_getSocksUsername(HCkFtp2W cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkFtp2W_putSocksUsername(HCkFtp2W cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_socksUsername(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC int CkFtp2W_getSocksVersion(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_putSocksVersion(HCkFtp2W cHandle, int newVal);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_getSsl(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_putSsl(HCkFtp2W cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkFtp2W_getSslAllowedCiphers(HCkFtp2W cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkFtp2W_putSslAllowedCiphers(HCkFtp2W cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_sslAllowedCiphers(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_getSslProtocol(HCkFtp2W cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkFtp2W_putSslProtocol(HCkFtp2W cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_sslProtocol(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_getSslServerCertVerified(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_getSyncMustMatch(HCkFtp2W cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkFtp2W_putSyncMustMatch(HCkFtp2W cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_syncMustMatch(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_getSyncMustNotMatch(HCkFtp2W cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkFtp2W_putSyncMustNotMatch(HCkFtp2W cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_syncMustNotMatch(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_getSyncPreview(HCkFtp2W cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_syncPreview(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_getSyncedFiles(HCkFtp2W cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkFtp2W_putSyncedFiles(HCkFtp2W cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_syncedFiles(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_getTlsCipherSuite(HCkFtp2W cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_tlsCipherSuite(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_getTlsVersion(HCkFtp2W cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_tlsVersion(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC int CkFtp2W_getUploadTransferRate(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_getUseEpsv(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_putUseEpsv(HCkFtp2W cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkFtp2W_getUsername(HCkFtp2W cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkFtp2W_putUsername(HCkFtp2W cHandle, const wchar_t *newVal);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_username(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_getVerboseLogging(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_putVerboseLogging(HCkFtp2W cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkFtp2W_getVersion(HCkFtp2W cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_version(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_AppendFile(HCkFtp2W cHandle, const wchar_t *localFilePath, const wchar_t *remoteFilePath);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_AppendFileFromBinaryData(HCkFtp2W cHandle, const wchar_t *remoteFilename, HCkByteData content);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_AppendFileFromTextData(HCkFtp2W cHandle, const wchar_t *remoteFilename, const wchar_t *textData, const wchar_t *charset);
CK_VISIBLE_PUBLIC void CkFtp2W_AsyncAbort(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_AsyncAppendFileStart(HCkFtp2W cHandle, const wchar_t *localFilename, const wchar_t *remoteFilename);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_AsyncGetFileStart(HCkFtp2W cHandle, const wchar_t *remoteFilename, const wchar_t *localFilename);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_AsyncPutFileStart(HCkFtp2W cHandle, const wchar_t *localFilename, const wchar_t *remoteFilename);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_ChangeRemoteDir(HCkFtp2W cHandle, const wchar_t *remoteDirPath);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_CheckConnection(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_ClearControlChannel(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_ClearDirCache(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_ClearSessionLog(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_Connect(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_ConnectOnly(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_ConvertToTls(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_CreatePlan(HCkFtp2W cHandle, const wchar_t *localDir, HCkString outStr);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_createPlan(HCkFtp2W cHandle, const wchar_t *localDir);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_CreateRemoteDir(HCkFtp2W cHandle, const wchar_t *remoteDirPath);
CK_VISIBLE_PUBLIC int CkFtp2W_DeleteMatching(HCkFtp2W cHandle, const wchar_t *remotePattern);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_DeleteRemoteFile(HCkFtp2W cHandle, const wchar_t *remoteFilePath);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_DeleteTree(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC int CkFtp2W_DetermineProxyMethod(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_DetermineSettings(HCkFtp2W cHandle, HCkString outXmlReport);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_determineSettings(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_DirTreeXml(HCkFtp2W cHandle, HCkString outStrXml);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_dirTreeXml(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_Disconnect(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_DownloadTree(HCkFtp2W cHandle, const wchar_t *localRoot);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_Feat(HCkFtp2W cHandle, HCkString outStr);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_feat(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC HCkDateTimeW CkFtp2W_GetCreateDt(HCkFtp2W cHandle, int index);
CK_VISIBLE_PUBLIC HCkDateTimeW CkFtp2W_GetCreateDtByName(HCkFtp2W cHandle, const wchar_t *filename);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_GetCreateTime(HCkFtp2W cHandle, int index, SYSTEMTIME *outSysTime);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_GetCreateTimeByName(HCkFtp2W cHandle, const wchar_t *filename, SYSTEMTIME *outSysTime);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_GetCreateTimeByNameStr(HCkFtp2W cHandle, const wchar_t *filename, HCkString outStr);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_getCreateTimeByNameStr(HCkFtp2W cHandle, const wchar_t *filename);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_GetCreateTimeStr(HCkFtp2W cHandle, int index, HCkString outStr);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_getCreateTimeStr(HCkFtp2W cHandle, int index);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_GetCurrentRemoteDir(HCkFtp2W cHandle, HCkString outStr);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_getCurrentRemoteDir(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC int CkFtp2W_GetDirCount(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_GetFile(HCkFtp2W cHandle, const wchar_t *remoteFilePath, const wchar_t *localFilePath);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_GetFilename(HCkFtp2W cHandle, int index, HCkString outStr);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_getFilename(HCkFtp2W cHandle, int index);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_GetGroup(HCkFtp2W cHandle, int index, HCkString outStr);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_getGroup(HCkFtp2W cHandle, int index);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_GetIsDirectory(HCkFtp2W cHandle, int index);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_GetIsSymbolicLink(HCkFtp2W cHandle, int index);
CK_VISIBLE_PUBLIC HCkDateTimeW CkFtp2W_GetLastAccessDt(HCkFtp2W cHandle, int index);
CK_VISIBLE_PUBLIC HCkDateTimeW CkFtp2W_GetLastAccessDtByName(HCkFtp2W cHandle, const wchar_t *filename);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_GetLastAccessTime(HCkFtp2W cHandle, int index, SYSTEMTIME *outSysTime);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_GetLastAccessTimeByName(HCkFtp2W cHandle, const wchar_t *filename, SYSTEMTIME *outSysTime);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_GetLastAccessTimeByNameStr(HCkFtp2W cHandle, const wchar_t *filename, HCkString outStr);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_getLastAccessTimeByNameStr(HCkFtp2W cHandle, const wchar_t *filename);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_GetLastAccessTimeStr(HCkFtp2W cHandle, int index, HCkString outStr);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_getLastAccessTimeStr(HCkFtp2W cHandle, int index);
CK_VISIBLE_PUBLIC HCkDateTimeW CkFtp2W_GetLastModDt(HCkFtp2W cHandle, int index);
CK_VISIBLE_PUBLIC HCkDateTimeW CkFtp2W_GetLastModDtByName(HCkFtp2W cHandle, const wchar_t *filename);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_GetLastModifiedTime(HCkFtp2W cHandle, int index, SYSTEMTIME *outSysTime);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_GetLastModifiedTimeByName(HCkFtp2W cHandle, const wchar_t *filename, SYSTEMTIME *outSysTime);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_GetLastModifiedTimeByNameStr(HCkFtp2W cHandle, const wchar_t *filename, HCkString outStr);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_getLastModifiedTimeByNameStr(HCkFtp2W cHandle, const wchar_t *filename);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_GetLastModifiedTimeStr(HCkFtp2W cHandle, int index, HCkString outStr);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_getLastModifiedTimeStr(HCkFtp2W cHandle, int index);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_GetOwner(HCkFtp2W cHandle, int index, HCkString outStr);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_getOwner(HCkFtp2W cHandle, int index);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_GetPermType(HCkFtp2W cHandle, int index, HCkString outStr);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_getPermType(HCkFtp2W cHandle, int index);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_GetPermissions(HCkFtp2W cHandle, int index, HCkString outStr);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_getPermissions(HCkFtp2W cHandle, int index);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_GetRemoteFileBinaryData(HCkFtp2W cHandle, const wchar_t *remoteFilename, HCkByteData outData);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_GetRemoteFileTextC(HCkFtp2W cHandle, const wchar_t *remoteFilename, const wchar_t *charset, HCkString outStr);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_getRemoteFileTextC(HCkFtp2W cHandle, const wchar_t *remoteFilename, const wchar_t *charset);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_GetRemoteFileTextData(HCkFtp2W cHandle, const wchar_t *remoteFilename, HCkString outStr);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_getRemoteFileTextData(HCkFtp2W cHandle, const wchar_t *remoteFilename);
CK_VISIBLE_PUBLIC int CkFtp2W_GetSize(HCkFtp2W cHandle, int index);
CK_VISIBLE_PUBLIC __int64 CkFtp2W_GetSize64(HCkFtp2W cHandle, int index);
CK_VISIBLE_PUBLIC int CkFtp2W_GetSizeByName(HCkFtp2W cHandle, const wchar_t *filename);
CK_VISIBLE_PUBLIC __int64 CkFtp2W_GetSizeByName64(HCkFtp2W cHandle, const wchar_t *filename);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_GetSizeStr(HCkFtp2W cHandle, int index, HCkString outStr);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_getSizeStr(HCkFtp2W cHandle, int index);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_GetSizeStrByName(HCkFtp2W cHandle, const wchar_t *filename, HCkString outStr);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_getSizeStrByName(HCkFtp2W cHandle, const wchar_t *filename);
CK_VISIBLE_PUBLIC HCkCertW CkFtp2W_GetSslServerCert(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_GetTextDirListing(HCkFtp2W cHandle, const wchar_t *pattern, HCkString outStrRawListing);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_getTextDirListing(HCkFtp2W cHandle, const wchar_t *pattern);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_GetXmlDirListing(HCkFtp2W cHandle, const wchar_t *pattern, HCkString outStrXmlListing);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_getXmlDirListing(HCkFtp2W cHandle, const wchar_t *pattern);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_IsUnlocked(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_LoginAfterConnectOnly(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC int CkFtp2W_MGetFiles(HCkFtp2W cHandle, const wchar_t *remotePattern, const wchar_t *localDir);
CK_VISIBLE_PUBLIC int CkFtp2W_MPutFiles(HCkFtp2W cHandle, const wchar_t *pattern);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_NlstXml(HCkFtp2W cHandle, const wchar_t *remoteDirPattern, HCkString outStr);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_nlstXml(HCkFtp2W cHandle, const wchar_t *remoteDirPattern);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_Noop(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_PutFile(HCkFtp2W cHandle, const wchar_t *localFilePath, const wchar_t *remoteFilePath);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_PutFileFromBinaryData(HCkFtp2W cHandle, const wchar_t *remoteFilename, HCkByteData content);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_PutFileFromTextData(HCkFtp2W cHandle, const wchar_t *remoteFilename, const wchar_t *textData, const wchar_t *charset);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_PutPlan(HCkFtp2W cHandle, const wchar_t *plan, const wchar_t *alreadyDoneFilename);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_PutTree(HCkFtp2W cHandle, const wchar_t *localDir);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_Quote(HCkFtp2W cHandle, const wchar_t *cmd);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_RemoveRemoteDir(HCkFtp2W cHandle, const wchar_t *remoteDirPath);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_RenameRemoteFile(HCkFtp2W cHandle, const wchar_t *existingRemoteFilePath, const wchar_t *newRemoteFilePath);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_SaveLastError(HCkFtp2W cHandle, const wchar_t *path);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_SendCommand(HCkFtp2W cHandle, const wchar_t *cmd, HCkString outReply);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_sendCommand(HCkFtp2W cHandle, const wchar_t *cmd);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_SetModeZ(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC void CkFtp2W_SetOldestDate(HCkFtp2W cHandle, SYSTEMTIME *oldestDateTime);
CK_VISIBLE_PUBLIC void CkFtp2W_SetOldestDateStr(HCkFtp2W cHandle, const wchar_t *oldestDateTimeStr);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_SetRemoteFileDateTime(HCkFtp2W cHandle, SYSTEMTIME *dt, const wchar_t *remoteFilename);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_SetRemoteFileDateTimeStr(HCkFtp2W cHandle, const wchar_t *dateTimeStr, const wchar_t *remoteFilename);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_SetRemoteFileDt(HCkFtp2W cHandle, HCkDateTimeW dt, const wchar_t *remoteFilename);
CK_VISIBLE_PUBLIC void CkFtp2W_SetSslCertRequirement(HCkFtp2W cHandle, const wchar_t *reqName, const wchar_t *reqValue);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_SetSslClientCert(HCkFtp2W cHandle, HCkCertW cert);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_SetSslClientCertPem(HCkFtp2W cHandle, const wchar_t *pemDataOrFilename, const wchar_t *pemPassword);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_SetSslClientCertPfx(HCkFtp2W cHandle, const wchar_t *pfxFilename, const wchar_t *pfxPassword);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_SetTypeAscii(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_SetTypeBinary(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_Site(HCkFtp2W cHandle, const wchar_t *siteCommand);
CK_VISIBLE_PUBLIC void CkFtp2W_SleepMs(HCkFtp2W cHandle, int millisec);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_Stat(HCkFtp2W cHandle, HCkString outStr);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_ck_stat(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_SyncDeleteRemote(HCkFtp2W cHandle, const wchar_t *localRoot);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_SyncLocalDir(HCkFtp2W cHandle, const wchar_t *localRoot, int mode);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_SyncLocalTree(HCkFtp2W cHandle, const wchar_t *localRoot, int mode);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_SyncRemoteTree(HCkFtp2W cHandle, const wchar_t *localRoot, int mode);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_SyncRemoteTree2(HCkFtp2W cHandle, const wchar_t *localDirPath, int mode, BOOL bDescend, BOOL bPreviewOnly);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_Syst(HCkFtp2W cHandle, HCkString outStr);
CK_VISIBLE_PUBLIC const wchar_t *CkFtp2W_syst(HCkFtp2W cHandle);
CK_VISIBLE_PUBLIC BOOL CkFtp2W_UnlockComponent(HCkFtp2W cHandle, const wchar_t *unlockCode);
#endif
