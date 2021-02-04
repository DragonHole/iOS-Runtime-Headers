/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:07 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSURL, NSError;

@interface NSFilesystemItemMoveOperation : NSOperation {

	id _delegate;
	NSURL* _sourceURL;
	NSURL* _destinationURL;
	NSError* _error;
	unsigned long long _options;

}
+(id)filesystemItemMoveOperationWithSourceURL:(id)arg1 destinationURL:(id)arg2 options:(unsigned long long)arg3 ;
+(id)_errorWithErrno:(int)arg1 sourceURL:(id)arg2 destinationURL:(id)arg3 ;
-(BOOL)filesystemItemCopyOperation:(id)arg1 shouldProceedAfterError:(id)arg2 copyingItemAtPath:(id)arg3 toPath:(id)arg4 ;
-(void)initWithSourceURL:(id)arg1 destinationURL:(id)arg2 options:(unsigned long long)arg3 ;
-(void)_setError:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)main;
-(id)error;
@end
