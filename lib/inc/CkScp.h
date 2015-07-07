// CkScp.h: interface for the CkScp class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat v9.5.0

#ifndef _CkScp_H
#define _CkScp_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"

class CkSsh;
class CkByteData;
class CkBaseProgress;



#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkScp
class CK_VISIBLE_PUBLIC CkScp  : public CkMultiByteBase
{
    private:
	CkBaseProgress *m_callback;

	// Don't allow assignment or copying these objects.
	CkScp(const CkScp &);
	CkScp &operator=(const CkScp &);

    public:
	CkScp(void);
	virtual ~CkScp(void);

	static CkScp *createNew(void);
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	CkBaseProgress *get_EventCallbackObject(void) const;
	void put_EventCallbackObject(CkBaseProgress *progress);


	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// This is the number of milliseconds between each AbortCheck event callback. The
	// AbortCheck callback allows an application to abort any SSH operation prior to
	// completion. If HeartbeatMs is 0 (the default), no AbortCheck event callbacks
	// will fire.
	int get_HeartbeatMs(void);
	// This is the number of milliseconds between each AbortCheck event callback. The
	// AbortCheck callback allows an application to abort any SSH operation prior to
	// completion. If HeartbeatMs is 0 (the default), no AbortCheck event callbacks
	// will fire.
	void put_HeartbeatMs(int newVal);

	// This property is only valid in programming environment and languages that allow
	// for event callbacks.
	// 
	// Sets the value to be defined as 100% complete for the purpose of PercentDone
	// event callbacks. The defaut value of 100 means that at most 100 event
	// PercentDone callbacks will occur in a method that (1) is event enabled and (2)
	// is such that it is possible to measure progress as a percentage completed. This
	// property may be set to larger numbers to get more fine-grained PercentDone
	// callbacks. For example, setting this property equal to 1000 will provide
	// callbacks with .1 percent granularity. For example, a value of 453 would
	// indicate 45.3% competed. This property is clamped to a minimum value of 10, and
	// a maximum value of 100000.
	// 
	int get_PercentDoneScale(void);
	// This property is only valid in programming environment and languages that allow
	// for event callbacks.
	// 
	// Sets the value to be defined as 100% complete for the purpose of PercentDone
	// event callbacks. The defaut value of 100 means that at most 100 event
	// PercentDone callbacks will occur in a method that (1) is event enabled and (2)
	// is such that it is possible to measure progress as a percentage completed. This
	// property may be set to larger numbers to get more fine-grained PercentDone
	// callbacks. For example, setting this property equal to 1000 will provide
	// callbacks with .1 percent granularity. For example, a value of 453 would
	// indicate 45.3% competed. This property is clamped to a minimum value of 10, and
	// a maximum value of 100000.
	// 
	void put_PercentDoneScale(int newVal);

	// Can contain a wildcarded list of file patterns (or exact file/directory names)
	// separated by semicolons. For example, "*.xml; *.txt; *.csv". If set, the
	// SyncTreeUpload and SyncTreeDownload methods will only transfer files that match
	// any one of these patterns.
	// 
	// Note: Unlike the SFTP's SyncMustNotMatch property, this property applies to both
	// filenames and directory names when recursively traversing a directory tree.
	// 
	void get_SyncMustMatch(CkString &str);
	// Can contain a wildcarded list of file patterns (or exact file/directory names)
	// separated by semicolons. For example, "*.xml; *.txt; *.csv". If set, the
	// SyncTreeUpload and SyncTreeDownload methods will only transfer files that match
	// any one of these patterns.
	// 
	// Note: Unlike the SFTP's SyncMustNotMatch property, this property applies to both
	// filenames and directory names when recursively traversing a directory tree.
	// 
	const char *syncMustMatch(void);
	// Can contain a wildcarded list of file patterns (or exact file/directory names)
	// separated by semicolons. For example, "*.xml; *.txt; *.csv". If set, the
	// SyncTreeUpload and SyncTreeDownload methods will only transfer files that match
	// any one of these patterns.
	// 
	// Note: Unlike the SFTP's SyncMustNotMatch property, this property applies to both
	// filenames and directory names when recursively traversing a directory tree.
	// 
	void put_SyncMustMatch(const char *newVal);

	// Can contain a wildcarded list of file patterns separated by semicolons. For
	// example, "*.xml; *.txt; *.csv". If set, the SyncTreeUpload and SyncTreeDownload
	// methods will not transfer files that match any one of these patterns.
	// 
	// Note: Unlike the SFTP's SyncMustNotMatch property, this property applies to both
	// filenames and directory names when recursively traversing a directory tree.
	// 
	void get_SyncMustNotMatch(CkString &str);
	// Can contain a wildcarded list of file patterns separated by semicolons. For
	// example, "*.xml; *.txt; *.csv". If set, the SyncTreeUpload and SyncTreeDownload
	// methods will not transfer files that match any one of these patterns.
	// 
	// Note: Unlike the SFTP's SyncMustNotMatch property, this property applies to both
	// filenames and directory names when recursively traversing a directory tree.
	// 
	const char *syncMustNotMatch(void);
	// Can contain a wildcarded list of file patterns separated by semicolons. For
	// example, "*.xml; *.txt; *.csv". If set, the SyncTreeUpload and SyncTreeDownload
	// methods will not transfer files that match any one of these patterns.
	// 
	// Note: Unlike the SFTP's SyncMustNotMatch property, this property applies to both
	// filenames and directory names when recursively traversing a directory tree.
	// 
	void put_SyncMustNotMatch(const char *newVal);

	// The paths of the files uploaded or downloaded in the last call to SyncUploadTree
	// or SyncDownloadTree. The paths are listed one per line. In both cases (for
	// upload and download) each line contains the full local file path (not the remote
	// path).
	void get_SyncedFiles(CkString &str);
	// The paths of the files uploaded or downloaded in the last call to SyncUploadTree
	// or SyncDownloadTree. The paths are listed one per line. In both cases (for
	// upload and download) each line contains the full local file path (not the remote
	// path).
	const char *syncedFiles(void);
	// The paths of the files uploaded or downloaded in the last call to SyncUploadTree
	// or SyncDownloadTree. The paths are listed one per line. In both cases (for
	// upload and download) each line contains the full local file path (not the remote
	// path).
	void put_SyncedFiles(const char *newVal);



	// ----------------------
	// Methods
	// ----------------------
	// Uses the SSH connection of ARG1 for the SCP transfers. All of the connection and
	// socket related properties, proxy properites, timeout properties, session log,
	// etc. set on the SSH object apply to the SCP methods (because internally it is
	// the SSH object that is used to do the work of the file transfers).
	bool UseSsh(CkSsh &sshConnection);

	// Uploads a file from the local filesystem to the remote SSH server.
	bool UploadFile(const char *localPath, const char *remotePath);

	// Downloads a file from the remote SSH server to the local filesystem.
	bool DownloadFile(const char *remotePath, const char *localPath);

	// Downloads files from the SSH server to a local directory tree. Synchronization
	// modes include:
	// 
	//     mode=0: Download all files
	//     mode=1: Download all files that do not exist on the local filesystem.
	//     mode=2: Download newer or non-existant files.
	//     mode=3: Download only newer files. If a file does not already exist on the
	//     local filesystem, it is not downloaded from the server.
	//     mode=5: Download only missing files or files with size differences.
	//     mode=6: Same as mode 5, but also download newer files.
	//     
	// 
	bool SyncTreeDownload(const char *remoteRoot, const char *localRoot, int mode, bool bRecurse);

	// Uploads a directory tree from the local filesystem to the SSH server.
	// Synchronization modes include:
	// 
	//     mode=0: Upload all files
	//     mode=1: Upload all files that do not exist on the FTP server.
	//     mode=2: Upload newer or non-existant files.
	//     mode=3: Upload only newer files. If a file does not already exist on the FTP
	//     server, it is not uploaded.
	//     mode=4: transfer missing files or files with size differences.
	//     mode=5: same as mode 4, but also newer files.
	// 
	bool SyncTreeUpload(const char *localBaseDir, const char *remoteBaseDir, int mode, bool bRecurse);

	// Uploads the contents of a string to a file on the remote SSH server.
	bool UploadString(const char *remotePath, const char *textData, const char *charset);

	// Uploads the binary data to a file on the remote SSH server. The binary data is
	// passed in encoded string representation (such as base64, or hex).
	bool UploadBinaryEncoded(const char *remotePath, const char *encodedData, const char *encoding);

	// Downloads a file from the SSH server returns the contents in an encoded string
	// (using an encoding such as base64).
	bool DownloadBinaryEncoded(const char *remotePath, const char *encoding, CkString &outStr);
	// Downloads a file from the SSH server returns the contents in an encoded string
	// (using an encoding such as base64).
	const char *downloadBinaryEncoded(const char *remotePath, const char *encoding);

	// Downloads a text file from the SSH server and returns the contents as a string.
	bool DownloadString(const char *remotePath, const char *charset, CkString &outStr);
	// Downloads a text file from the SSH server and returns the contents as a string.
	const char *downloadString(const char *remotePath, const char *charset);

	// Downloads a binary file from the SSH server and returns the contents.
	bool DownloadBinary(const char *remotePath, CkByteData &outBytes);

	// Uploads binary data to a file on the SSH server.
	bool UploadBinary(const char *remotePath, const CkByteData &binData);





	// END PUBLIC INTERFACE


};
#ifndef __sun__
#pragma pack (pop)
#endif


	
#endif
