/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <Foundation/NSObject.h>

@class NSOperationQueue;

@interface ISOperationQueue : NSObject {
	NSOperationQueue* _queue;
}
+(id)mainQueue;
+(BOOL)isActive;
-(void)setMaxConcurrentOperationCount:(int)count;
-(void)cancelAllOperations;
-(void)addOperation:(id)operation;
-(id)init;
-(void)dealloc;
-(void)addOperations:(id)operations waitUntilFinished:(BOOL)finished;
-(void)setSuspended:(BOOL)suspended;
-(id)operations;
-(int)maxConcurrentOperationCount;
@end

