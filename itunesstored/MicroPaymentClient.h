/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ISOperationDelegate.h"
#import "LoadCompletedMicroPaymentsDelegate.h"
#import <CoreData/NSManagedObject.h>

@class NSNumber, NSMutableArray, LoadCompletedMicroPaymentsOperation, LoadMicroPaymentQueuesOperation, NSString, NSMutableSet, ClientIdentity;

__attribute__((visibility("hidden")))
@interface MicroPaymentClient : NSManagedObject <LoadCompletedMicroPaymentsDelegate, ISOperationDelegate> {
	BOOL _checkedIn;
	ClientIdentity* _identity;
	LoadCompletedMicroPaymentsOperation* _loadCompletedOperation;
	int _lastRefreshReason;
	LoadMicroPaymentQueuesOperation* _loadQueueOperation;
	NSMutableArray* _orderedPayments;
	int _state;
}
@property(retain, nonatomic) NSMutableSet* refunds;
@property(retain, nonatomic) NSMutableSet* payments;
@property(retain, nonatomic) NSString* identifier;
@property(retain, nonatomic) NSNumber* sandboxed;
@property(retain, nonatomic) ClientIdentity* identity;
@property(assign, nonatomic, getter=isCheckedIn) BOOL checkedIn;
+(id)entityForContext:(id)context;
-(BOOL)_shouldSendPaymentToClient:(id)client;
-(BOOL)_shouldSendDistributedNotifications;
-(void)_sendNotification:(id)notification userInfo:(id)info;
-(void)_sendLoadCompletedPaymentsFinished;
-(void)_sendLoadCompletedPaymentsFailedWithError:(id)error;
-(id)_orderedPayments;
-(void)_handleRefundsQueueResponse:(id)response forReason:(int)reason;
-(void)_handlePaymentsQueueResponse:(id)response forReason:(int)reason;
-(void)_handleLoadQueuesOperationFinished:(id)finished;
-(void)_handleLoadQueuesOperation:(id)operation failedWithError:(id)error;
-(void)_handleLoadCompletedOperationFinished:(id)finished;
-(void)_handleLoadCompletedOperation:(id)operation failedWithError:(id)error;
-(id)_copyDictionariesForPayments:(id)payments;
-(void)_triggerDownloadsNotification:(id)notification;
-(void)_mainThreadTriggerDownloadsNotification:(id)notification;
-(void)_mainThreadClientMessagabilityChangedNotification:(id)notification;
-(void)_clientMessagabilityChangedNotification:(id)notification;
-(void)operationFinished:(id)finished;
-(void)operation:(id)operation loadedPaymentsBatch:(id)batch;
-(void)operation:(id)operation failedWithError:(id)error;
-(void)didTurnIntoFault;
-(void)awakeFromFetch;
-(void)sendRefundsRemoved:(id)removed;
-(void)sendRefundsRefreshed;
-(void)sendPaymentUpdated:(id)updated;
-(void)sendPaymentsRemoved:(id)removed;
-(void)sendPaymentsRefreshed;
-(void)sendPaymentsAdded:(id)added;
-(void)restoreCompletedTransactions;
-(BOOL)replacePayment:(id)payment withResponse:(id)response;
-(BOOL)removePaymentsWithSave:(id)save;
-(id)refundForIdentifier:(id)identifier;
-(void)refreshFromServerWithReason:(int)reason;
-(id)paymentForIdentifier:(id)identifier;
-(void)handleNetworkTransition;
-(id)firstReadyPayment;
-(BOOL)addPaymentsWithSave:(id)save;
-(void)dealloc;
@end

