/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <Foundation/NSObject.h>

@class NSLock, NSString;

@interface ISClient : NSObject {
	NSString* _appleClientApplication;
	NSString* _appleClientVersions;
	NSString* _identifier;
	NSLock* _lock;
	NSString* _partnerHeader;
	NSString* _userAgent;
}
@property(copy) NSString* partnerHeader;
@property(copy) NSString* identifier;
@property(readonly, assign) NSString* appleClientVersions;
@property(copy) NSString* userAgent;
@property(copy) NSString* appleClientApplication;
+(id)currentClient;
-(id)init;
-(void)dealloc;
-(id)localStoreFrontID;
-(void)_softwareMapInvalidatedNotification:(id)notification;
@end

