/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISDataProvider.h"
#import "iTunesStore-Structs.h"
#import "NSCopying.h"

@class NSArray, NSString;

@interface ISHashedDownloadProvider : ISDataProvider <NSCopying> {
	int _fileDescriptor;
	NSArray* _hashes;
	NSString* _localFilePath;
	CC_MD5state_st _md5Context;
	long long _numberOfBytesToHash;
	long long _totalBytesWritten;
	long long _validatedBytes;
}
@property(assign) long long validatedBytes;
@property(assign) long long streamedBytes;
@property(assign) long long numberOfBytesToHash;
@property(retain) NSArray* hashes;
@property(retain) NSString* localFilePath;
-(id)copyWithZone:(NSZone*)zone;
-(id)init;
-(void)dealloc;
-(BOOL)parseData:(id)data returningError:(id*)error;
-(void)setup;
-(BOOL)_checkHashForByteCount:(long long)byteCount;
-(long long)_verifiedBytesByInitializingHashForFileSize:(long long)fileSize;
-(BOOL)_truncateToSize:(long long)size;
-(BOOL)_openFile;
-(BOOL)_writeDataWithHashing:(id)hashing returningError:(id*)error;
-(BOOL)_writeDataWithoutHashing:(id)hashing returningError:(id*)error;
-(void)_closeFile;
-(BOOL)canStreamContentLength:(long long)length error:(id*)error;
-(void)resetStream;
-(void)closeStream;
-(BOOL)isStream;
@end

