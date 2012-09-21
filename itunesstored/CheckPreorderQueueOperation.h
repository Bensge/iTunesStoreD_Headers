/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <iTunesStore/ISOperation.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface CheckPreorderQueueOperation : ISOperation {
	NSNumber* _accountID;
	int _numberOfPreorders;
}
@property(readonly, assign) int numberOfPreordersInQueue;
@property(readonly, assign) NSNumber* accountIdentifier;
-(id)_newURLOperation;
-(void)run;
-(void)dealloc;
-(id)initWithAccountIdentifier:(id)accountIdentifier;
@end

