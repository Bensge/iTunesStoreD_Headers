/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "XPCClient.h"

@class NSSet;

__attribute__((visibility("hidden")))
@interface PreorderQueueClient : XPCClient {
	NSSet* _itemKinds;
}
@property(copy) NSSet* itemKinds;
-(BOOL)supportsItemKind:(id)kind;
-(void)dealloc;
@end

