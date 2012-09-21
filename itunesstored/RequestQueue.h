/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>
#import "ISOperationDelegate.h"

@class NSMutableDictionary, NSLock;

__attribute__((visibility("hidden")))
@interface RequestQueue : NSObject <ISOperationDelegate> {
	NSLock* _lock;
	NSMutableDictionary* _operationsByIdentifier;
}
-(void)operationFinished:(id)finished;
-(void)operation:(id)operation failedWithError:(id)error;
-(void)sendResponseForOperation:(id)operation;
-(void)sendError:(id)error forOperation:(id)operation;
-(id)requestOperationForIdentifier:(id)identifier;
-(void)enqueueRequestOperation:(id)operation;
-(void)cancelRequestWithIdentifier:(id)identifier;
-(void)dealloc;
-(id)init;
@end
