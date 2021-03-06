/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <Foundation/NSObject.h>


@interface ISInvocationRecorder : NSObject {
	id _target;
}
-(void)dealloc;
-(id)adjustedTargetForSelector:(SEL)selector;
-(void)invokeInvocation:(id)invocation;
-(void)forwardInvocation:(id)invocation;
-(id)initWithTarget:(id)target;
-(id)methodSignatureForSelector:(SEL)selector;
@end

