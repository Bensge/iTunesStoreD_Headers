/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "itunesstored-Structs.h"
#import <Foundation/NSObject.h>


__attribute__((visibility("hidden")))
@interface XPCClientBackgroundTask : NSObject {
	id _invalidationBlock;
	SBSProcessAssertionRef _processAssertion;
}
@property(readonly, assign, nonatomic) SBSProcessAssertionRef processAssertion;
@property(readonly, assign, nonatomic) id invalidationBlock;
-(void)dealloc;
-(id)initWithProcessAssertion:(SBSProcessAssertionRef)processAssertion invalidationBlock:(id)block;
@end

