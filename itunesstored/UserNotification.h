/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "itunesstored-Structs.h"
#import <Foundation/NSObject.h>


__attribute__((visibility("hidden")))
@interface UserNotification : NSObject {
	id _completionBlock;
	CFDictionaryRef _notificationDictionary;
	unsigned long _notificationOptions;
	CFRunLoopSourceRef _runLoopSource;
	CFUserNotificationRef _userNotification;
}
@property(readonly, assign, nonatomic) CFUserNotificationRef userNotification;
@property(readonly, assign, nonatomic) id completionBlock;
-(void)updateWithDictionary:(CFDictionaryRef)dictionary options:(unsigned long)options;
-(void)show;
-(void)cancel;
-(void)dealloc;
-(id)initWithDictionary:(CFDictionaryRef)dictionary options:(unsigned long)options completionBlock:(id)block;
@end

