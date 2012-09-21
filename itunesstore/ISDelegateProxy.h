/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <Foundation/NSObject.h>

@class NSLock;

@interface ISDelegateProxy : NSObject {
	id _delegate;
	NSLock* _lock;
	BOOL _shouldMessageMainThread;
}
-(BOOL)respondsToSelector:(SEL)selector;
-(id)init;
-(void)dealloc;
-(void)setShouldMessageMainThread:(BOOL)messageMainThread;
-(void)sendInvocationToDelegate:(id)delegate;
-(void)forwardInvocation:(id)invocation;
-(id)methodSignatureForSelector:(SEL)selector;
-(void)setDelegate:(id)delegate;
@end

