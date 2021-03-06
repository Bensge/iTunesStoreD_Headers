/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <iTunesStore/ISOperation.h>

@class SSPurchaseValidationResponse, NSArray;

__attribute__((visibility("hidden")))
@interface PurchaseValidationOperation : ISOperation {
	NSArray* _purchases;
	SSPurchaseValidationResponse* _response;
}
@property(readonly, assign) SSPurchaseValidationResponse* purchaseValidationResponse;
@property(readonly, assign) NSArray* purchases;
-(void)run;
-(void)dealloc;
-(id)initWithPurchases:(id)purchases;
@end

