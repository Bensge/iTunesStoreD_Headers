/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <iTunesStore/ISOperation.h>

@class MicroPaymentQueueResponse, NSArray, ClientIdentity;

__attribute__((visibility("hidden")))
@interface LoadMicroPaymentQueuesOperation : ISOperation {
	ClientIdentity* _clientIdentity;
	int _expectedRefundCount;
	int _reason;
	MicroPaymentQueueResponse* _paymentsResponse;
	MicroPaymentQueueResponse* _refundsResponse;
	NSArray* _userDSIDs;
}
@property(retain) MicroPaymentQueueResponse* refundsResponse;
@property(retain) MicroPaymentQueueResponse* paymentsResponse;
@property(retain) NSArray* userDSIDs;
@property(assign) int reason;
@property(assign) int expectedRefundCount;
@property(retain) ClientIdentity* clientIdentity;
-(id)_URLBagContext;
-(BOOL)_shouldCheckRefundsQueue;
-(BOOL)_shouldCheckAutoRenewQueue;
-(BOOL)_checkRefundsQueue:(id*)queue;
-(BOOL)_appendToResponse:(id)response usingOperation:(id)operation error:(id*)error;
-(BOOL)_appendNormalQueueToResponse:(id)response error:(id*)error;
-(BOOL)_appendAutoRenewQueueToResponse:(id)response error:(id*)error;
-(void)run;
-(void)dealloc;
@end

