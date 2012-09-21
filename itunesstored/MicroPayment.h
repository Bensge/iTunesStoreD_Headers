/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <CoreData/NSManagedObject.h>

@class NSData, NSNumber, MicroPaymentClient, NSString, NSDate;

__attribute__((visibility("hidden")))
@interface MicroPayment : NSManagedObject {
	NSString* _temporaryIdentifier;
	BOOL _transientFailed;
}
@property(retain, nonatomic) NSNumber* userDSID;
@property(retain, nonatomic) NSString* transactionIdentifier;
@property(retain, nonatomic) NSNumber* state;
@property(retain, nonatomic) NSData* requestData;
@property(retain, nonatomic) NSData* receiptData;
@property(retain, nonatomic) NSNumber* quantity;
@property(retain, nonatomic) NSDate* purchaseDate;
@property(retain, nonatomic) NSString* productIdentifier;
@property(retain, nonatomic) NSString* originalTransactionIdentifier;
@property(retain, nonatomic) NSDate* originalPurchaseDate;
@property(retain, nonatomic) NSDate* insertDate;
@property(retain, nonatomic) NSData* errorData;
@property(retain, nonatomic) MicroPaymentClient* client;
@property(retain, nonatomic) NSString* actionParams;
@property(readonly, assign, nonatomic) NSString* matchingIdentifier;
@property(assign, nonatomic, getter=isTransientFailed) BOOL transientFailed;
@property(readonly, assign, nonatomic, getter=isReady) BOOL ready;
+(BOOL)responseIsValid:(id)valid;
+(id)refundEntityFromContext:(id)context;
+(id)paymentEntityFromContext:(id)context;
-(id)_temporaryIdentifier;
-(int)_clientStateForServerState:(int)serverState;
-(void)awakeFromInsert;
-(void)setFailedWithError:(id)error;
-(void)mergeValuesFromResponse:(id)response;
-(BOOL)isEqualToResponse:(id)response compareAllFields:(BOOL)fields;
-(id)copyPropertyListRepresentation;
-(id)copyProcessingOperations;
-(void)dealloc;
@end
