/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISInvocationRecorder.h"


@interface ISMainThreadInvocationRecorder : ISInvocationRecorder {
	BOOL _waitUntilDone;
}
@property(assign, nonatomic) BOOL waitUntilDone;
-(void)invokeInvocation:(id)invocation;
@end
