/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "itunesstored-Structs.h"
#import <Foundation/NSObject.h>

@class NSLock, NSString;

__attribute__((visibility("hidden")))
@interface ClientIdentity : NSObject {
	unsigned _applicationState;
	BOOL _appleSigned;
	NSString* _clientIdentifier;
	int _clientType;
	BOOL _isListening;
	NSLock* _lock;
	int _pid;
}
@property(assign) int processIdentifier;
@property(assign, getter=isListening) BOOL listening;
@property(readonly, assign) NSString* clientIdentifierHeader;
@property(readonly, assign) NSString* clientIdentifier;
@property(readonly, assign) int clientType;
@property(readonly, assign) BOOL canReceiveMessages;
@property(assign) unsigned applicationState;
@property(readonly, assign, getter=isAppleSigned) BOOL appleSigned;
-(int)_ntsClientType;
-(unsigned)_ntsApplicationState;
-(BOOL)isEqual:(id)equal;
-(void)dealloc;
-(id)initWithApplicationIdentifier:(id)applicationIdentifier isAppleSigned:(BOOL)aSigned;
-(id)initWithAuditToken:(XXStruct_kUSYWB*)auditToken;
-(id)init;
-(id)_initCommon;
@end
