/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RequestQueueOperation.h"

@class NSURLRequest, NSOrderedSet, ExternalDownloadManifest;

__attribute__((visibility("hidden")))
@interface LoadExternalDownloadManifestOperation : RequestQueueOperation {
	NSOrderedSet* _downloadIDs;
	ExternalDownloadManifest* _manifest;
	int _manifestFormat;
	BOOL _shouldHideUserPrompts;
	NSURLRequest* _urlRequest;
}
@property(retain) ExternalDownloadManifest* manifest;
@property(retain) NSURLRequest* URLRequest;
@property(assign) BOOL shouldHideUserPrompts;
@property(assign) int manifestFormat;
-(void)_showDialogForError:(id)error;
-(BOOL)_showConfirmationPromptForManifest:(id)manifest;
-(BOOL)_runForPurchaseFormatWithURLRequest:(id)urlrequest error:(id*)error;
-(BOOL)_runForPublicFormatWithURLRequest:(id)urlrequest error:(id*)error;
-(void)_processValidDownloads:(id)downloads;
-(id)_newManifestResponse;
-(BOOL)_handlePublicResponseForOperation:(id)operation error:(id*)error;
-(void)run;
-(id)copyResponseDictionary;
-(id)copyRequest;
-(void)dealloc;
-(id)initWithRequest:(id)request;
@end
