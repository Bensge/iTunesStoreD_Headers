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
@interface EventMonitor : NSObject {
	dispatch_queue_s* _dispatchQueue;
	NSMutableArray* _events;
	double _lastPollTime;
	dispatch_source_s* _pollTimer;
}
+(id)sharedEventMonitor;
-(void)_willRemoveEvent:(id)event;
-(void)_reloadPollTimer;
-(void)_fireEventsAfterPollTimer;
-(void)_cancelPollTimer;
-(void)removeEvent:(id)event;
-(id)monitorEvent:(id)event;
-(void)dealloc;
-(id)init;
@end

