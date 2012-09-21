/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface ISDialogTextField : NSObject {
	int _keyboardType;
	BOOL _secure;
	NSString* _title;
	NSString* _value;
}
@property(retain) NSString* value;
@property(retain) NSString* title;
@property(assign, getter=isSecure) BOOL secure;
@property(assign) int keyboardType;
+(id)textFieldWithTitle:(id)title;
-(void)dealloc;
@end

