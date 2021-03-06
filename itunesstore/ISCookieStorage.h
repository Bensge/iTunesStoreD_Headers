/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "iTunesStore-Structs.h"
#import <Foundation/NSObject.h>

@class ISSQLiteDatabase, NSURL;

@interface ISCookieStorage : NSObject {
@private
	ISSQLiteDatabase* _db;
	dispatch_queue_s* _dispatchQueue;
	void* _processAssertion;
	int _processAssertionCount;
	NSURL* _storageLocation;
}
@property(readonly, assign) NSURL* storageLocation;
+(id)sharedInstance;
+(id)sharedStorage;
-(id)init;
-(void)dealloc;
-(void)setCookiesForHTTPResponse:(id)httpresponse userIdentifier:(id)identifier;
-(void)setCookies:(id)cookies forUserIdentifier:(id)userIdentifier;
-(id)cookieHeadersForURL:(id)url userIdentifier:(id)identifier;
-(void)synchronizeCookies;
-(void)removeCookiesWithProperties:(id)properties;
-(void)removeAllCookies;
-(id)_cookieForSelectStatement:(sqlite3_stmt*)selectStatement;
-(BOOL)_bindStatement:(sqlite3_stmt*)statement withValues:(id)values;
-(id)_columnNameForCookieProperty:(id)cookieProperty;
-(void)_endProcessAssertion;
-(void)_bindInsertStatement:(sqlite3_stmt*)statement forCookie:(id)cookie userIdentifier:(id)identifier;
-(void)_beginProcessAssertion;
-(CFSetRef)_copyPrivateCookiesForURL:(id)url userIdentifier:(id)identifier;
-(BOOL)_setupCookieDatabase:(id)database;
-(id)initWithStorageLocation:(id)storageLocation;
@end

