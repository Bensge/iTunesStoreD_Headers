/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <iTunesStore/ISOperation.h>

@class SSAuthenticationContext, NSArray;

__attribute__((visibility("hidden")))
@interface PurchaseHistoryOperation : ISOperation {
	SSAuthenticationContext* _authenticationContext;
	NSArray* _inputItems;
	NSArray* _outputItems;
}
@property(readonly, assign) NSArray* purchasedItems;
@property(readonly, assign) NSArray* purchaseHistoryItems;
@property(readonly, assign) SSAuthenticationContext* authenticationContext;
-(void)_setOutputItemsWithMapping:(id)mapping;
-(id)_newURLOperation;
-(void)run;
-(void)dealloc;
-(id)initWithPurchaseHistoryItems:(id)purchaseHistoryItems authenticationContext:(id)context;
-(id)init;
@end
