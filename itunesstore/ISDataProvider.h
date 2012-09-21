/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <Foundation/NSObject.h>
#import "NSCopying.h"
#import "iTunesStore-Structs.h"

@class NSURL, NSString, NSNumber, SSURLBagContext, SSAuthenticationContext;

@interface ISDataProvider : NSObject <NSCopying> {
	SSAuthenticationContext* _authenticationContext;
	NSNumber* _authenticatedAccountDSID;
	SSURLBagContext* _bagContext;
	long long _contentLength;
	NSString* _contentType;
	id _output;
	NSURL* _redirectURL;
}
@property(retain) NSURL* redirectURL;
@property(retain) id output;
@property(retain) NSNumber* authenticatedAccountDSID;
@property(retain) NSString* contentType;
@property(assign) long long contentLength;
@property(retain) SSURLBagContext* bagContext;
@property(retain) SSAuthenticationContext* authenticationContext;
+(id)provider;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(void)migrateOutputFromSubProvider:(id)subProvider;
-(BOOL)parseData:(id)data returningError:(id*)error;
-(void)configureFromProvider:(id)provider;
-(void)setup;
-(BOOL)canStreamContentLength:(long long)length error:(id*)error;
-(void)resetStream;
-(void)closeStream;
-(long long)streamedBytes;
-(BOOL)isStream;
@end

