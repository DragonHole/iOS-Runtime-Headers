/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:04 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MIME/MFObservable.h>
#import <libobjc.A.dylib/MFObserver.h>

@class NSLock, NSError, MFQueue, NSMutableArray, NSString;

@interface _MFReplayObservable : MFObservable <MFObserver> {

	NSLock* _lock;
	BOOL _isStopped;
	NSError* _error;
	MFQueue* _queue;
	NSMutableArray* _observers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)observerDidComplete;
-(id)subscribe:(id)arg1 ;
-(void)observerDidReceiveResult:(id)arg1 ;
-(void)observerDidFailWithError:(id)arg1 ;
-(void)_unsubscribe:(id)arg1 ;
-(id)initWithCount:(unsigned long long)arg1 ;
-(void)dealloc;
@end

