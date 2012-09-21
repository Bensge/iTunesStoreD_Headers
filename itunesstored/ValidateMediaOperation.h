/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <iTunesStore/ISOperation.h>

@class AVFileValidator, NSURL, NSString;

__attribute__((visibility("hidden")))
@interface ValidateMediaOperation : ISOperation {
	AVFileValidator* _fileValidator;
	NSString* _title;
}
@property(readonly, assign) NSURL* mediaURL;
@property(readonly, assign) NSString* mediaTitle;
-(void)_startAVFileValidator;
-(void)_mainThreadStartAVFileValidator;
-(id)_errorTitle;
-(void)_endObservingAVFileValidator;
-(void)_beginObservingAVFileValidator:(id)validator;
-(void)_timeoutTimer:(id)timer;
-(void)_validationFinished:(id)finished;
-(void)stopRunLoop;
-(void)run;
-(void)cancel;
-(void)dealloc;
-(id)initWithMediaURL:(id)mediaURL title:(id)title;
-(id)init;
@end

