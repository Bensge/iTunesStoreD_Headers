/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class NSString, ISDialog;

__attribute__((visibility("hidden")))
@interface PurchaseResponseInfo : NSObject {
	ISDialog* _dialog;
	NSString* _changedBuyParameters;
}
@property(retain, nonatomic) NSString* changedBuyParameters;
@property(retain, nonatomic) ISDialog* dialog;
-(void)reset;
-(void)dealloc;
@end
