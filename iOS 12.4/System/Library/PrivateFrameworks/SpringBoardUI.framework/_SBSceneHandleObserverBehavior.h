/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:55 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBSceneHandleObserver;
@interface _SBSceneHandleObserverBehavior : NSObject {

	BOOL _didCreateScene;
	BOOL _didDestroyScene;
	BOOL _didUpdateContentState;
	BOOL _didUpdateSettingsWithDiff;
	BOOL _didUpdateClientSettingsWithDiff;
	BOOL _didUpdatePairingStatusForExternalSceneIdentifiers;
	id<SBSceneHandleObserver> _observer;

}

@property (nonatomic,__weak,readonly) id<SBSceneHandleObserver> observer;                         //@synthesize observer=_observer - In the implementation block
@property (assign,nonatomic) BOOL didCreateScene;                                                 //@synthesize didCreateScene=_didCreateScene - In the implementation block
@property (assign,nonatomic) BOOL didDestroyScene;                                                //@synthesize didDestroyScene=_didDestroyScene - In the implementation block
@property (assign,nonatomic) BOOL didUpdateContentState;                                          //@synthesize didUpdateContentState=_didUpdateContentState - In the implementation block
@property (assign,nonatomic) BOOL didUpdateSettingsWithDiff;                                      //@synthesize didUpdateSettingsWithDiff=_didUpdateSettingsWithDiff - In the implementation block
@property (assign,nonatomic) BOOL didUpdateClientSettingsWithDiff;                                //@synthesize didUpdateClientSettingsWithDiff=_didUpdateClientSettingsWithDiff - In the implementation block
@property (assign,nonatomic) BOOL didUpdatePairingStatusForExternalSceneIdentifiers;              //@synthesize didUpdatePairingStatusForExternalSceneIdentifiers=_didUpdatePairingStatusForExternalSceneIdentifiers - In the implementation block
+(id)behaviorFromObserver:(id)arg1 ;
-(BOOL)didCreateScene;
-(void)setDidCreateScene:(BOOL)arg1 ;
-(BOOL)didDestroyScene;
-(void)setDidDestroyScene:(BOOL)arg1 ;
-(BOOL)didUpdateContentState;
-(void)setDidUpdateContentState:(BOOL)arg1 ;
-(BOOL)didUpdateSettingsWithDiff;
-(void)setDidUpdateSettingsWithDiff:(BOOL)arg1 ;
-(BOOL)didUpdateClientSettingsWithDiff;
-(void)setDidUpdateClientSettingsWithDiff:(BOOL)arg1 ;
-(BOOL)didUpdatePairingStatusForExternalSceneIdentifiers;
-(void)setDidUpdatePairingStatusForExternalSceneIdentifiers:(BOOL)arg1 ;
-(id)initWithObserver:(id)arg1 ;
-(id<SBSceneHandleObserver>)observer;
@end

