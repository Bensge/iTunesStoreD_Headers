/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>
#import "itunesstored-Structs.h"
#import "NSCopying.h"

@class NSNumber, NSLock, ClientIdentity;

__attribute__((visibility("hidden")))
@interface MicroPaymentQueueRequest : NSObject <NSCopying> {
	ClientIdentity* _clientIdentity;
	NSLock* _lock;
	BOOL _needsAuthentication;
	NSNumber* _rangeEndIdentifier;
	NSNumber* _rangeStartIdentifier;
	NSNumber* _userIdentifier;
}
@property(retain) NSNumber* userIdentifier;
@property(retain) NSNumber* rangeStartIdentifier;
@property(retain) NSNumber* rangeEndIdentifier;
@property(assign) BOOL needsAuthentication;
@property(retain) ClientIdentity* clientIdentity;
-(id)_ntsQueryParameters:(id*)parameters;
-(id)_ntsClientApplication:(id*)application;
-(id)description;
-(id)newStoreURLOperation:(id*)operation;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)init;
@end

