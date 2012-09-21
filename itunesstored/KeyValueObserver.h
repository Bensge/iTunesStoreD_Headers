/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "itunesstored-Structs.h"
#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface KeyValueObserver : NSObject {
	dispatch_queue_s* _dispatchQueue;
	NSMutableArray* _observers;
}
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)removeObserver:(id)observer;
-(id)observeObject:(id)object keyPath:(id)path options:(unsigned)options usingBlock:(id)block;
-(void)dealloc;
-(id)init;
@end

