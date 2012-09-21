/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISOperation.h"

@class SSRequest;

@interface ISStoreServicesRequestOperation : ISOperation {
@private
	SSRequest* _request;
}
@property(readonly, assign) SSRequest* request;
-(void)cancel;
-(void)dealloc;
-(void)stopRunLoop;
-(void)_beginObservingNotifications;
-(void)_endObservingNotifications;
-(void)_timer:(id)timer;
-(void)_requestStateChangedNotification:(id)notification;
-(void)_delayedStopRequest;
-(void)_delayedStartRequest;
-(id)initWithRequest:(id)request;
-(void)run;
@end

