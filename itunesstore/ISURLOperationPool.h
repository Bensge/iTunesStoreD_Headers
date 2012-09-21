/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <Foundation/NSObject.h>

@class ISOperationQueue;

@interface ISURLOperationPool : NSObject {
@private
	ISOperationQueue* _operationQueue;
}
@property(retain, nonatomic) ISOperationQueue* operationQueue;
-(id)init;
-(void)dealloc;
-(void)addOperation:(id)operation withFlags:(int)flags;
-(void)cancelOperation:(id)operation;
-(id)_poolOperationForOperation:(id)operation flags:(int)flags;
@end

