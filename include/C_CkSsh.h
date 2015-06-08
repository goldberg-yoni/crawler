// This is a generated source file for Chilkat version 9.5.0.48
#ifndef _C_CkSsh_H
#define _C_CkSsh_H
#include "chilkatDefs.h"

#include "Chilkat_C.h"

CK_VISIBLE_PUBLIC HCkSsh CkSsh_Create(void);
CK_VISIBLE_PUBLIC void CkSsh_Dispose(HCkSsh handle);
CK_VISIBLE_PUBLIC BOOL CkSsh_getCaretControl(HCkSsh cHandle);
CK_VISIBLE_PUBLIC void CkSsh_putCaretControl(HCkSsh cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC int CkSsh_getChannelOpenFailCode(HCkSsh cHandle);
CK_VISIBLE_PUBLIC void CkSsh_getChannelOpenFailReason(HCkSsh cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkSsh_channelOpenFailReason(HCkSsh cHandle);
CK_VISIBLE_PUBLIC void CkSsh_getClientIdentifier(HCkSsh cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSsh_putClientIdentifier(HCkSsh cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSsh_clientIdentifier(HCkSsh cHandle);
CK_VISIBLE_PUBLIC void CkSsh_getClientIpAddress(HCkSsh cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSsh_putClientIpAddress(HCkSsh cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSsh_clientIpAddress(HCkSsh cHandle);
CK_VISIBLE_PUBLIC int CkSsh_getConnectTimeoutMs(HCkSsh cHandle);
CK_VISIBLE_PUBLIC void CkSsh_putConnectTimeoutMs(HCkSsh cHandle, int newVal);
CK_VISIBLE_PUBLIC void CkSsh_getDebugLogFilePath(HCkSsh cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSsh_putDebugLogFilePath(HCkSsh cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSsh_debugLogFilePath(HCkSsh cHandle);
CK_VISIBLE_PUBLIC int CkSsh_getDisconnectCode(HCkSsh cHandle);
CK_VISIBLE_PUBLIC void CkSsh_getDisconnectReason(HCkSsh cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkSsh_disconnectReason(HCkSsh cHandle);
CK_VISIBLE_PUBLIC void CkSsh_getForceCipher(HCkSsh cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSsh_putForceCipher(HCkSsh cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSsh_forceCipher(HCkSsh cHandle);
CK_VISIBLE_PUBLIC int CkSsh_getHeartbeatMs(HCkSsh cHandle);
CK_VISIBLE_PUBLIC void CkSsh_putHeartbeatMs(HCkSsh cHandle, int newVal);
CK_VISIBLE_PUBLIC void CkSsh_getHostKeyAlg(HCkSsh cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSsh_putHostKeyAlg(HCkSsh cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSsh_hostKeyAlg(HCkSsh cHandle);
CK_VISIBLE_PUBLIC void CkSsh_getHostKeyFingerprint(HCkSsh cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkSsh_hostKeyFingerprint(HCkSsh cHandle);
CK_VISIBLE_PUBLIC void CkSsh_getHttpProxyAuthMethod(HCkSsh cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSsh_putHttpProxyAuthMethod(HCkSsh cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSsh_httpProxyAuthMethod(HCkSsh cHandle);
CK_VISIBLE_PUBLIC void CkSsh_getHttpProxyDomain(HCkSsh cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSsh_putHttpProxyDomain(HCkSsh cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSsh_httpProxyDomain(HCkSsh cHandle);
CK_VISIBLE_PUBLIC void CkSsh_getHttpProxyHostname(HCkSsh cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSsh_putHttpProxyHostname(HCkSsh cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSsh_httpProxyHostname(HCkSsh cHandle);
CK_VISIBLE_PUBLIC void CkSsh_getHttpProxyPassword(HCkSsh cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSsh_putHttpProxyPassword(HCkSsh cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSsh_httpProxyPassword(HCkSsh cHandle);
CK_VISIBLE_PUBLIC int CkSsh_getHttpProxyPort(HCkSsh cHandle);
CK_VISIBLE_PUBLIC void CkSsh_putHttpProxyPort(HCkSsh cHandle, int newVal);
CK_VISIBLE_PUBLIC void CkSsh_getHttpProxyUsername(HCkSsh cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSsh_putHttpProxyUsername(HCkSsh cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSsh_httpProxyUsername(HCkSsh cHandle);
CK_VISIBLE_PUBLIC int CkSsh_getIdleTimeoutMs(HCkSsh cHandle);
CK_VISIBLE_PUBLIC void CkSsh_putIdleTimeoutMs(HCkSsh cHandle, int newVal);
CK_VISIBLE_PUBLIC BOOL CkSsh_getIsConnected(HCkSsh cHandle);
CK_VISIBLE_PUBLIC BOOL CkSsh_getKeepSessionLog(HCkSsh cHandle);
CK_VISIBLE_PUBLIC void CkSsh_putKeepSessionLog(HCkSsh cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkSsh_getLastErrorHtml(HCkSsh cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkSsh_lastErrorHtml(HCkSsh cHandle);
CK_VISIBLE_PUBLIC void CkSsh_getLastErrorText(HCkSsh cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkSsh_lastErrorText(HCkSsh cHandle);
CK_VISIBLE_PUBLIC void CkSsh_getLastErrorXml(HCkSsh cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkSsh_lastErrorXml(HCkSsh cHandle);
CK_VISIBLE_PUBLIC int CkSsh_getMaxPacketSize(HCkSsh cHandle);
CK_VISIBLE_PUBLIC void CkSsh_putMaxPacketSize(HCkSsh cHandle, int newVal);
CK_VISIBLE_PUBLIC int CkSsh_getNumOpenChannels(HCkSsh cHandle);
CK_VISIBLE_PUBLIC BOOL CkSsh_getPasswordChangeRequested(HCkSsh cHandle);
CK_VISIBLE_PUBLIC BOOL CkSsh_getPreferIpv6(HCkSsh cHandle);
CK_VISIBLE_PUBLIC void CkSsh_putPreferIpv6(HCkSsh cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC int CkSsh_getReadTimeoutMs(HCkSsh cHandle);
CK_VISIBLE_PUBLIC void CkSsh_putReadTimeoutMs(HCkSsh cHandle, int newVal);
CK_VISIBLE_PUBLIC void CkSsh_getReqExecCharset(HCkSsh cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSsh_putReqExecCharset(HCkSsh cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSsh_reqExecCharset(HCkSsh cHandle);
CK_VISIBLE_PUBLIC void CkSsh_getSessionLog(HCkSsh cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkSsh_sessionLog(HCkSsh cHandle);
CK_VISIBLE_PUBLIC int CkSsh_getSoRcvBuf(HCkSsh cHandle);
CK_VISIBLE_PUBLIC void CkSsh_putSoRcvBuf(HCkSsh cHandle, int newVal);
CK_VISIBLE_PUBLIC int CkSsh_getSoSndBuf(HCkSsh cHandle);
CK_VISIBLE_PUBLIC void CkSsh_putSoSndBuf(HCkSsh cHandle, int newVal);
CK_VISIBLE_PUBLIC void CkSsh_getSocksHostname(HCkSsh cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSsh_putSocksHostname(HCkSsh cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSsh_socksHostname(HCkSsh cHandle);
CK_VISIBLE_PUBLIC void CkSsh_getSocksPassword(HCkSsh cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSsh_putSocksPassword(HCkSsh cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSsh_socksPassword(HCkSsh cHandle);
CK_VISIBLE_PUBLIC int CkSsh_getSocksPort(HCkSsh cHandle);
CK_VISIBLE_PUBLIC void CkSsh_putSocksPort(HCkSsh cHandle, int newVal);
CK_VISIBLE_PUBLIC void CkSsh_getSocksUsername(HCkSsh cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSsh_putSocksUsername(HCkSsh cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSsh_socksUsername(HCkSsh cHandle);
CK_VISIBLE_PUBLIC int CkSsh_getSocksVersion(HCkSsh cHandle);
CK_VISIBLE_PUBLIC void CkSsh_putSocksVersion(HCkSsh cHandle, int newVal);
CK_VISIBLE_PUBLIC BOOL CkSsh_getStderrToStdout(HCkSsh cHandle);
CK_VISIBLE_PUBLIC void CkSsh_putStderrToStdout(HCkSsh cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkSsh_getTcpNoDelay(HCkSsh cHandle);
CK_VISIBLE_PUBLIC void CkSsh_putTcpNoDelay(HCkSsh cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkSsh_getUserAuthBanner(HCkSsh cHandle, HCkString retval);
CK_VISIBLE_PUBLIC void CkSsh_putUserAuthBanner(HCkSsh cHandle, const char *newVal);
CK_VISIBLE_PUBLIC const char *CkSsh_userAuthBanner(HCkSsh cHandle);
CK_VISIBLE_PUBLIC BOOL CkSsh_getUtf8(HCkSsh cHandle);
CK_VISIBLE_PUBLIC void CkSsh_putUtf8(HCkSsh cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC BOOL CkSsh_getVerboseLogging(HCkSsh cHandle);
CK_VISIBLE_PUBLIC void CkSsh_putVerboseLogging(HCkSsh cHandle, BOOL newVal);
CK_VISIBLE_PUBLIC void CkSsh_getVersion(HCkSsh cHandle, HCkString retval);
CK_VISIBLE_PUBLIC const char *CkSsh_version(HCkSsh cHandle);
CK_VISIBLE_PUBLIC BOOL CkSsh_AuthenticatePk(HCkSsh cHandle, const char *username, HCkSshKey privateKey);
CK_VISIBLE_PUBLIC BOOL CkSsh_AuthenticatePw(HCkSsh cHandle, const char *login, const char *password);
CK_VISIBLE_PUBLIC BOOL CkSsh_AuthenticatePwPk(HCkSsh cHandle, const char *username, const char *password, HCkSshKey privateKey);
CK_VISIBLE_PUBLIC BOOL CkSsh_ChannelIsOpen(HCkSsh cHandle, int channelNum);
CK_VISIBLE_PUBLIC int CkSsh_ChannelPoll(HCkSsh cHandle, int channelNum, int pollTimeoutMs);
CK_VISIBLE_PUBLIC int CkSsh_ChannelRead(HCkSsh cHandle, int channelNum);
CK_VISIBLE_PUBLIC int CkSsh_ChannelReadAndPoll(HCkSsh cHandle, int channelNum, int pollTimeoutMs);
CK_VISIBLE_PUBLIC int CkSsh_ChannelReadAndPoll2(HCkSsh cHandle, int channelNum, int pollTimeoutMs, int maxNumBytes);
CK_VISIBLE_PUBLIC BOOL CkSsh_ChannelReceiveToClose(HCkSsh cHandle, int channelNum);
CK_VISIBLE_PUBLIC BOOL CkSsh_ChannelReceiveUntilMatch(HCkSsh cHandle, int channelNum, const char *matchPattern, const char *charset, BOOL caseSensitive);
CK_VISIBLE_PUBLIC BOOL CkSsh_ChannelReceiveUntilMatchN(HCkSsh cHandle, int channelNum, HCkStringArray matchPatterns, const char *charset, BOOL caseSensitive);
CK_VISIBLE_PUBLIC BOOL CkSsh_ChannelReceivedClose(HCkSsh cHandle, int channelNum);
CK_VISIBLE_PUBLIC BOOL CkSsh_ChannelReceivedEof(HCkSsh cHandle, int channelNum);
CK_VISIBLE_PUBLIC BOOL CkSsh_ChannelReceivedExitStatus(HCkSsh cHandle, int channelNum);
CK_VISIBLE_PUBLIC void CkSsh_ChannelRelease(HCkSsh cHandle, int channelNum);
CK_VISIBLE_PUBLIC BOOL CkSsh_ChannelSendClose(HCkSsh cHandle, int channelNum);
CK_VISIBLE_PUBLIC BOOL CkSsh_ChannelSendData(HCkSsh cHandle, int channelNum, HCkByteData byteData);
CK_VISIBLE_PUBLIC BOOL CkSsh_ChannelSendEof(HCkSsh cHandle, int channelNum);
CK_VISIBLE_PUBLIC BOOL CkSsh_ChannelSendString(HCkSsh cHandle, int channelNum, const char *textData, const char *charset);
CK_VISIBLE_PUBLIC BOOL CkSsh_CheckConnection(HCkSsh cHandle);
CK_VISIBLE_PUBLIC void CkSsh_ClearTtyModes(HCkSsh cHandle);
CK_VISIBLE_PUBLIC BOOL CkSsh_Connect(HCkSsh cHandle, const char *domainName, int port);
CK_VISIBLE_PUBLIC BOOL CkSsh_ContinueKeyboardAuth(HCkSsh cHandle, const char *response, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkSsh_continueKeyboardAuth(HCkSsh cHandle, const char *response);
CK_VISIBLE_PUBLIC void CkSsh_Disconnect(HCkSsh cHandle);
CK_VISIBLE_PUBLIC int CkSsh_GetChannelExitStatus(HCkSsh cHandle, int channelNum);
CK_VISIBLE_PUBLIC int CkSsh_GetChannelNumber(HCkSsh cHandle, int index);
CK_VISIBLE_PUBLIC BOOL CkSsh_GetChannelType(HCkSsh cHandle, int index, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkSsh_getChannelType(HCkSsh cHandle, int index);
CK_VISIBLE_PUBLIC BOOL CkSsh_GetReceivedData(HCkSsh cHandle, int channelNum, HCkByteData outBytes);
CK_VISIBLE_PUBLIC BOOL CkSsh_GetReceivedDataN(HCkSsh cHandle, int channelNum, int maxNumBytes, HCkByteData outBytes);
CK_VISIBLE_PUBLIC int CkSsh_GetReceivedNumBytes(HCkSsh cHandle, int channelNum);
CK_VISIBLE_PUBLIC BOOL CkSsh_GetReceivedStderr(HCkSsh cHandle, int channelNum, HCkByteData outBytes);
CK_VISIBLE_PUBLIC BOOL CkSsh_GetReceivedStderrText(HCkSsh cHandle, int channelNum, const char *charset, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkSsh_getReceivedStderrText(HCkSsh cHandle, int channelNum, const char *charset);
CK_VISIBLE_PUBLIC BOOL CkSsh_GetReceivedText(HCkSsh cHandle, int channelNum, const char *charset, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkSsh_getReceivedText(HCkSsh cHandle, int channelNum, const char *charset);
CK_VISIBLE_PUBLIC BOOL CkSsh_GetReceivedTextS(HCkSsh cHandle, int channelNum, const char *substr, const char *charset, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkSsh_getReceivedTextS(HCkSsh cHandle, int channelNum, const char *substr, const char *charset);
CK_VISIBLE_PUBLIC int CkSsh_OpenCustomChannel(HCkSsh cHandle, const char *channelType);
CK_VISIBLE_PUBLIC int CkSsh_OpenDirectTcpIpChannel(HCkSsh cHandle, const char *targetHostname, int targetPort);
CK_VISIBLE_PUBLIC int CkSsh_OpenSessionChannel(HCkSsh cHandle);
CK_VISIBLE_PUBLIC BOOL CkSsh_PeekReceivedText(HCkSsh cHandle, int channelNum, const char *charset, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkSsh_peekReceivedText(HCkSsh cHandle, int channelNum, const char *charset);
CK_VISIBLE_PUBLIC BOOL CkSsh_ReKey(HCkSsh cHandle);
CK_VISIBLE_PUBLIC BOOL CkSsh_SaveLastError(HCkSsh cHandle, const char *path);
CK_VISIBLE_PUBLIC BOOL CkSsh_SendIgnore(HCkSsh cHandle);
CK_VISIBLE_PUBLIC BOOL CkSsh_SendReqExec(HCkSsh cHandle, int channelNum, const char *commandLine);
CK_VISIBLE_PUBLIC BOOL CkSsh_SendReqPty(HCkSsh cHandle, int channelNum, const char *termType, int widthInChars, int heightInChars, int widthInPixels, int heightInPixels);
CK_VISIBLE_PUBLIC BOOL CkSsh_SendReqSetEnv(HCkSsh cHandle, int channelNum, const char *name, const char *value);
CK_VISIBLE_PUBLIC BOOL CkSsh_SendReqShell(HCkSsh cHandle, int channelNum);
CK_VISIBLE_PUBLIC BOOL CkSsh_SendReqSignal(HCkSsh cHandle, int channelNum, const char *signalName);
CK_VISIBLE_PUBLIC BOOL CkSsh_SendReqSubsystem(HCkSsh cHandle, int channelNum, const char *subsystemName);
CK_VISIBLE_PUBLIC BOOL CkSsh_SendReqWindowChange(HCkSsh cHandle, int channelNum, int widthInChars, int heightInRows, int pixWidth, int pixHeight);
CK_VISIBLE_PUBLIC BOOL CkSsh_SendReqX11Forwarding(HCkSsh cHandle, int channelNum, BOOL singleConnection, const char *authProt, const char *authCookie, int screenNum);
CK_VISIBLE_PUBLIC BOOL CkSsh_SendReqXonXoff(HCkSsh cHandle, int channelNum, BOOL clientCanDo);
CK_VISIBLE_PUBLIC BOOL CkSsh_SetTtyMode(HCkSsh cHandle, const char *ttyName, int ttyValue);
CK_VISIBLE_PUBLIC BOOL CkSsh_StartKeyboardAuth(HCkSsh cHandle, const char *login, HCkString outStr);
CK_VISIBLE_PUBLIC const char *CkSsh_startKeyboardAuth(HCkSsh cHandle, const char *login);
CK_VISIBLE_PUBLIC BOOL CkSsh_UnlockComponent(HCkSsh cHandle, const char *unlockCode);
CK_VISIBLE_PUBLIC int CkSsh_WaitForChannelMessage(HCkSsh cHandle, int pollTimeoutMs);
#endif
