/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <iTunesStore/ISOperation.h>

@class NSManagedObjectID, NSNumber, NSString, ClientIdentity;

__attribute__((visibility("hidden")))
@interface FinishMicroPaymentOperation : ISOperation {
	ClientIdentity* _clientIdentity;
	NSManagedObjectID* _objectID;
	NSString* _transactionIdentifier;
	NSNumber* _userDSID;
}
@property(retain) NSNumber* userDSID;
@property(retain) NSString* transactionIdentifier;
@property(retain) ClientIdentity* clientIdentity;
@property(retain) NSManagedObjectID* objectID;
-(BOOL)_parseResponse:(id)response returningError:(id*)error;
-(void)run;
-(void)dealloc;
-(id)initWithObjectID:(id)objectID;
@end

