/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:44 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderBrailleDriver.framework/ScreenReaderBrailleDriver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCRDFileReaderDelegate;
@class NSThread, NSFileHandle;

@interface SCRDFileReader : NSObject {

	id<SCRDFileReaderDelegate> _delegate;
	NSThread* _readerThread;
	NSFileHandle* _fileHandle;
	int _threadStartCount;

}
-(void)_readHandler:(id)arg1 ;
-(BOOL)hasStarted;
-(void)invalidateWithWait:(BOOL)arg1 ;
-(id)initWithDelegate:(id)arg1 fileHandle:(id)arg2 ;
-(void)dealloc;
-(void)invalidate;
-(void)start;
-(BOOL)isValid;
@end

