/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:42 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUtils/CoreUtils-Structs.h>
#import <libobjc.A.dylib/AVAudioPlayerDelegate.h>

@protocol OS_dispatch_queue;
@class AVAudioSession, CUAudioRequest, NSObject, NSString;

@interface CUAudioPlayer : NSObject <AVAudioPlayerDelegate> {

	AVAudioSession* _audioSession;
	CUAudioRequest* _currentRequest;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	unsigned _invalidateFlags;
	NSMutableArray* _playRequests;
	NSMutableDictionary* _preparedRequests;
	CUAudioPlayer* _selfRef;
	LogCategory* _ucat;
	unsigned _flags;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	NSString* _label;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,readonly) unsigned flags;                                        //@synthesize flags=_flags - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned)flags;
-(void)_invalidateWithFlags:(unsigned)arg1 ;
-(void)playPreparedIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_playPreparedIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_playURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)prepareURL:(id)arg1 identifier:(id*)arg2 completion:(/*^block*/id)arg3 ;
-(void)_prepareURL:(id)arg1 identifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_abortRequestsWithError:(id)arg1 ;
-(void)_invalidated;
-(void)invalidateWithFlags:(unsigned)arg1 ;
-(void)playURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)audioSessionInterrupted:(id)arg1 ;
-(void)_completeRequest:(id)arg1 error:(id)arg2 ;
-(void)_processRequests;
-(void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2 ;
-(void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)_activate;
-(id)init;
-(void)dealloc;
-(void)activate;
-(NSString *)label;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(id)invalidationHandler;
@end
