/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class ISOperation;

__attribute__((visibility("hidden")))
@interface ProcessAssetStep : NSObject {
	BOOL _failureShouldResetFile;
	ISOperation* _operation;
	float _progressWeight;
}
@property(assign, nonatomic) float progressWeight;
@property(retain, nonatomic) ISOperation* operation;
@property(assign, nonatomic) BOOL failureShouldResetFile;
-(void)dealloc;
-(id)initWithOperation:(id)operation;
@end
